#include <iostream>
using namespace std;

char Carica()
{
    char inp;
    bool check = true; //serve per controllare se l'utente abbia caricato mosse valide -->> s = sasso |  c = carta | f = forbice

        cout << "Mossa giocatore: \n";
        cin >> inp;

        switch (inp)
        {
        case 's':
            return 's'; break;
        case 'c':
            return 'c'; break;
        case 'f':
            return 'f'; break;
        default:
            return 'e'; break;

        }

};
void Gioca(char p1, char p2)
{
    if (p1 == p2)
        cout<<"Pareggio\n";
    else
    {
        

        if (p1=='e' || p2 =='e')
        cout << "Mossa non valida\n";
        else
        {
            if (p1 == 'c' && p2 == 's' || p1 == 's' && p2 == 'f' || p1 == 'f' && p2 == 'c')
                cout << "Vince il giocatore 1\n";
            else
                cout << "Vince il giocatore 2\n";
        }

        
        /* 
        if (p1 == 's' && p2 == 'f')
            cout << "Vittoria P1\n";
        else
            cout << "Vittoria P2\n";
        */


    }
};

int main()
{
    char p1, p2;
    
    p1 = Carica();
    p2 = Carica();

    cout << "start\n";
    Gioca(p1, p2);
    cout << "end\n";
    
    return 0;
}


