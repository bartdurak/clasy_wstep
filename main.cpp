#include <iostream>
using namespace std;
    class Zwierze {
    public:
        //atrybuty
        string gatunek;
        string imie;
        int wiek;

//metody
        void dodaj_zwierze() {
            cout << "DODAWANIE NOWEGO ZWIERZECIA DO BAZY: " << endl;
            cout << "Podaj gatunek: ";
            cin >> gatunek;
            cout << "Podaj imie: ";
            cin >> imie;
            cout << "Podaj wiek: ";
            cin >> wiek;

        }
        void dodaj_glos()
        {
            if (gatunek == "kot") cout << imie << " lat: " << wiek << ": Miau! ";
            else if (gatunek == "koza") cout << imie << " lat: " << wiek << ": Bee! ";
            else if (gatunek == "krowa") cout << imie << " lat: " << wiek << " : Muuu! ";
            else cout << "Nieznany gatunek: ";
        }
    };
    int main()
    {

    Zwierze z1;
z1.dodaj_zwierze();
z1.dodaj_glos();

Zwierze z2;
z2.dodaj_zwierze();
z2.dodaj_glos();

            // }
    return 0;
}
