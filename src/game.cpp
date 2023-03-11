#include "game.h"

game::game()
{
    reset();
}

game::~game()
{

}

bool game::rozstaw(int a,int b)
{
    if(l_tab[a][b]==1 || length<0)
        return 0;
    if(clicks==lengthTab[loop])
        if(rozstaw_test(a,b,1,1))
            {
                l_tab[a][b]=1;
                ship_left--;
                last.first = a;
                last.second = b;
            }
        else
            return 0;
    else
        if(rozstaw_test(a,b,0,1))
            {
                l_tab[a][b]=1;
                ship_left--;
                last.first = a;
                last.second = b;
            }
        else
            return 0;
    clicks--;
    if(clicks==0)
    {
        length--;
        loop++;
        clicks=lengthTab[loop];
        hited=clicks;
        missed=5-clicks;
    }
    if(length==0 && ship_left==0)
        {
            faza=1;
            ship_left=20;
            missed=0;
            hited=0;
        }
    return 1;
}

void game::reset()
{
    faza=0;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            l_tab[i][j]=0;
            p_tab[i][j]=0;
        }
    }
    length=10;
    hited=4;
    missed=1;
    ship_left=20;
    cpu_hited=0;

    loop=0;
    clicks=lengthTab[loop];
    before=last_cpu;
    last_cpu=make_pair(0,0);
    statki.clear();
    lp=0;
    lg=1;
}

int game::random()
{
    l_rand=rand()%10+1;
    return l_rand;
}

bool game::rozstaw_test(int a, int b, bool pierw, bool czy_gracz) //metoda która ma sprawdzać czy podczas rozstawiania elementy stawiasz obok siebie
{
    int i=0;
    bool l=0; //do sprawdzania, czy jest odpowiednio, do ostatniego ustawionego, ustawiony
    if(czy_gracz==1) //sprawdzanie lewej tablicy jeżeli stawia gracz
    {
        //stykanie z ostatnim
        if(a-1 == last.first && b == last.second)
            l = 1;
        if(a == last.first && b+1 == last.second)
            l = 1;
        if(a+1 == last.first && b == last.second)
            l = 1;
        if(a == last.first && b-1 == last.second)
            l = 1;
        //stykanie z innym
        if(!(a-1<0) && ((a-1 == last.first && b == last.second) || l_tab[a-1][b]==1))
            i++;
        if(!(b+1>10) && ((a == last.first && b+1 == last.second) || l_tab[a][b+1]==1))
            i++;
        if(!(a+1>10) && ((a+1 == last.first && b == last.second) || l_tab[a+1][b]==1))
            i++;
        if(!(b-1<0) && ((a == last.first && b-1 == last.second) || l_tab[a][b-1]==1))
            i++;
    }
    else //sprawdzanie prawej tablicy jeżeli stawia komputer
    {
        if(!(a-1<=0) && p_tab[a-1][b]==1)
            i++;
        if(!(b+1>10) && p_tab[a][b+1]==1)
            i++;
        if(!(a+1>10) && p_tab[a+1][b]==1)
            i++;
        if(!(b-1<=0) && p_tab[a][b-1]==1)
            i++;
    }
    if(!pierw) //nie jest rozstawiany pierwszy element statku
        if(i==1  && (!czy_gracz || l==1))
            return 1; //jeżeli styka się z dokładnie jednym to można postawić
        else
            return 0;
    else //rozstawiany jest pierwszy element statku
        if(i==0)
            return 1; //można go postawić jeżeli z niczym sie nie styka
        else
            return 0;
}


pair<int,int> game::cpu_rozstaw_test()
{
    int a,b;
    pair<int,int> pom;
    a=random();
    b=random();
    if(lp<6) //Warunek sprawdzajacy czy rozstawiane sa statki 1x1
    {
        if(lg<=1) //jeżeli rozstawia pierwszy element statku
        {
            while(p_tab[a][b]==1||rozstaw_test(a,b,1,0)==false)
            {
                a=random();
                b=random();
            }
            p_tab[a][b]=1;
            last_cpu=make_pair(a,b);//uzupełnienie informacji o wykonanym ruchu
            before = last_cpu;
            lg++;
            return make_pair(a,b);
        }
        else
        {
            before=last_cpu;
            last_cpu=cpu_dobuduj(); //wybrane jest miejsce na następny element statku
            pom=last_cpu;
            p_tab[pom.first][pom.second]=1; //wstawienie do tablicy elementu statku
            if(lg==lengthTab[lp])
            {                               //warunek kończący budowę danego statku
                last_cpu=make_pair(0,0);
                lg=0;
                lp++;
            }
            lg++;
                                            //w nastepnym ruchu będzie budowany nowy statek
            return pom;
        }
    }
    else //jezeli tak wykonaj te instrukcje
    {
        while(p_tab[a][b]==1||rozstaw_test(a,b,1,0)==false)
        {
            a=random();
            b=random();
        }
        p_tab[a][b]=1;
        lp++;
        return make_pair(a,b);
    }

}

pair<int,int> game::cpu_dobuduj()
{
    int kierunek;
    /*
    1 - [a-1][b]
    2 - [a][b+1]
    3 - [a+1][b]
    4 - [a][b-1]
    */
    pair<int,int> pom;
    bool dobry=false;
    int loops = 0;
    while(!dobry)
    {
        if(loops == 10)
        {
            last_cpu = before;
        }
        if(loops == 20)
        {
            return make_pair(0,0);
        }
        kierunek=rand()%4+1;
        if(kierunek==1&&last_cpu.first-1>=1)
        {
            pom=make_pair(last_cpu.first-1,last_cpu.second);
            if(p_tab[pom.first][pom.second]!=1&&rozstaw_test(pom.first,pom.second,0,0)==true) //jeżeli wylosowane pole nie jest zajęte to zakończ pętlę
                dobry=true;
        }
        if(kierunek==2&&last_cpu.second+1<=10)
        {
            pom=make_pair(last_cpu.first,last_cpu.second+1);
            if(p_tab[pom.first][pom.second]!=1&&rozstaw_test(pom.first,pom.second,0,0)==true) //jeżeli wylosowane pole nie jest zajęte to zakończ pętlę
                dobry=true;
        }
        if(kierunek==3&&last_cpu.first+1<=10)
        {
            pom=make_pair(last_cpu.first+1,last_cpu.second);
            if(p_tab[pom.first][pom.second]!=1&&rozstaw_test(pom.first,pom.second,0,0)==true) //jeżeli wylosowane pole nie jest zajęte to zakończ pętlę
                dobry=true;
        }
        if(kierunek==4&&last_cpu.second-1>=1)
        {
            pom=make_pair(last_cpu.first,last_cpu.second-1);
            if(p_tab[pom.first][pom.second]!=1&&rozstaw_test(pom.first,pom.second,0,0)==true) //jeżeli wylosowane pole nie jest zajęte to zakończ pętlę
                dobry=true;
        }
        loops++;
    }
    return pom;
}

void game::cpu_rozstaw()
{
    for(int i=1;i<=20;i++)
    {
        pair<int,int> pom;
        pom = cpu_rozstaw_test();
        if(pom == make_pair(0,0))
        {
            i = 0;
            reset();
        }
        else
        {
            statki.push_back(pom);
        }
    }
}

pair<int,int> game::get_cpu_ship_pos()
{
    pair<int,int> pom;
    pom = statki.front();
    statki.erase(statki.begin());
    return pom;
}

bool game::strzal(int a, int b)
{
    if(faza)
    {
        if(p_tab[a][b]==1)
            {
                p_tab[a][b]=2;
                hited++;
                ship_left--;
                return 1;
            }//trafiony
        else
            {
                p_tab[a][b]=3;
                missed++;
                return 0;
            }//nietrafiony
    }
    return 0;
}

pair<int,int> game::cpu_strzal()
{
    int a,b;
    a=random();
    b=random();
    while(l_tab[a][b]==2||l_tab[a][b]==3) //losuj a i b tak długo aż pole nie będzie wcześniej wylosowane
    {
        a=random();
        b=random();
    }
    if(l_tab[a][b]==0) //jeżeli trafił w puste
        l_tab[a][b]=3; //ustaw wartość na pudło
    else if(l_tab[a][b]==1) //jeżeli trafił w statek
    {
        l_tab[a][b]=2; //ustaw wartość na trafiony
        cpu_hited++;
    }
    return make_pair(a,b);

}

bool game::wygrana()
{
    if(hited==20)
    {
        komunikat="Gratulacje! Wygrałeś";
        return 1;
    }
    else if(cpu_hited==20)
    {
        komunikat="Niestety przegrałeś. Spróbuj następnym razem";
        return 1;
    }
    else
        return 0;
}
