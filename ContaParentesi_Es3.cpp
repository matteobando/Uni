#include <iostream>
using namespace std;


int main()
{
    int aperte=0, chiuse=0;
    bool trovato = false, minore = false;
    char vett[50];

    cout << "start" << endl;

    int i = 0;

    while (trovato == false && minore == false)
    {
        cin >> vett[i];
        if (vett[i] == '0')
            trovato = true;
        else
        {
                if (vett[i] == '(')
                    aperte++;
                if (vett[i] == ')')
                    chiuse++;   
        }
        i++;

        if (chiuse > aperte)
            minore = true;
    }

    if (aperte == chiuse)
        cout << "la sequenza e' bilanciata\n";
    else
    {
        if (aperte > chiuse)
            cout << "la sequenza non e' bilanciata: ci sono parentesi aperte senza match\n";
        else
            cout << "la sequenza non e' bilanciata: ci sono parentesi chiuse senza match\n";
    }

    cout << "end" << endl;
}

