#include "funzioni.h"
#include <iostream>
#include <string>
#include <string.h>
#include "principale.h"
using namespace std;

int main()
{
    cout<<'\n'<<"Immettere i commandi per procedere: ";
    string input;
    getline(cin, input);

    if (input=="fisica classica")
    {
        fisica_classica();
    }
    else if (input=="calcolatrice")
    {
        calcolatrice_base();
    }
    else if (input=="")
    {
        cout<<"Perfavore inserisci il commando giusto per procedere, se vuoi uscire da qui scrivi 'chiudi'"<<endl;
        main();
    }
    else if (input=="chiudi")
    {
        cout<<"Arrivderci!"<<endl;
    }
    
    else{
        cout<<"Commando sbagliato, Riprova"<<endl;
        main();
    }
    
    return 0;
}