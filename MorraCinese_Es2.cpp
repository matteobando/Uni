#include <iostream>
using namespace std;

char Carica()
{
    char inp;
    //bool check = true; //serve per controllare se l'utente abbia caricato mosse valide -->> s = sasso |  c = carta | f = forbice

    cin >> inp;
    return inp;

    /*switch (inp)
    {
    case 's':
        return 's'; break;
    case 'c':
        return 'c'; break;
    case 'f':
        return 'f'; break;
    default:
        return 'e'; break;
    }*/

};
int Gioca(char p1, char p2) //true -> vittoria giocatore 1  false -. vittoria giocatore 2
{
    if (p1 == 'c' && p2 == 'c' || p1 == 's' && p2 == 's' || p1 == 'f' && p2 == 'f')
        return -1;
    else
    {
        if (p1 == 'c' && p2 == 's' || p1 == 's' && p2 == 'f' || p1 == 'f' && p2 == 'c')
            return 1;
        else
            return 0;
    }
            
};
void ControllaVittoria(int vp1, int vp2)
{
    if (vp1 == vp2)
        cout << "Pareggio\n";
    else
    {
        if (vp1 > vp2)
            cout << "Vince il Giocatore 1\n";
        else
            cout << "Vince il Giocatore 2\n";
    }
}
//2 f f c c
int main()
{
    cout << "start\n";

    char p1, p2;
    int vp1 = 0, vp2=0,nMosse=0;  //vittorie player 1 e 2
    cin >> nMosse;
    

    for (int i = 0; i < nMosse; i++)
    {
        
        p1 = Carica();
        p2 = Carica();

        switch (Gioca(p1, p2))
        {
            case 1:
                vp1++; break;
            case 0:
                vp2++; break;
        }
             
    }
    ControllaVittoria(vp1, vp2);

    cout << "end\n";

    return 0;
}


