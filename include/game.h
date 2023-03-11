#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class game
{
    public:
        game();
        virtual ~game();
        bool rozstaw(int,int);
        void cpu_rozstaw();
        bool strzal(int,int);
        pair<int,int> cpu_strzal();
        pair<int,int> cpu_rozstaw_test();
        pair<int,int> cpu_dobuduj();
        pair<int,int> get_cpu_ship_pos();
        bool rozstaw_test(int,int,bool,bool kto); //1 - nowy statek, 0 - dostawianie starego ; 1 - gracz, 0 - komputer
        bool wygrana();
        void reset();
        int random();
        string get_komunikat()
        {
            return komunikat;
        };
        bool get_faza()
        {
            return faza;
        };
        void set_faza(bool wart)
        {
            faza=wart;
        };
        int get_hited()
        {
            return hited;
        }
        int get_missed()
        {
            return missed;
        }
        int get_left()
        {
            return ship_left;
        }
        int get_l_pole_status(int a, int b)
        {
            return l_tab[a][b];
        }
        int get_p_pole_status(int a, int b)
        {
            return p_tab[a][b];
        }

    protected:

    private:
        int l_tab[11][11], p_tab[11][11];
        /*
        0 - puste
        1 - statek
        2 - trafiony
        3 - pudlo
        */
        string komunikat;
        pair<int,int> last_cpu;
        pair<int,int> before;
        pair<int,int> last;
        vector<pair<int,int>> statki;
        int hited,missed,l_rand,ship_left; //hited == dlugosc, missed == ile pozostalo danego typu
        bool faza; // 0 - rozstawianie      1 - strzelanie
        int length,clicks,loop; //length == ilosc statkow
        int cpu_hited;
        int lp,lg;
        int lengthTab[11]={4,3,3,2,2,2,1,1,1,1,0};
};

#endif // GAME_H
