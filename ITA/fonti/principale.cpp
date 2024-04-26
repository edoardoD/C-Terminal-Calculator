#include "funzioni.h"
#include <iostream>
#include <string>
#include <string.h>
#include "principale.h"
using namespace std;

int main()
{
    std::map<int, void> imputDecider;
    cout<<'\n'<<"Immettere i commandi per procedere: ";
    int input;
    getline(cin, input);

    imputDecider[0] = fisica_classica();
    imputDecider[1] = calcolatrice_base();
    // if input is integer 
    if(){
        inputDecider[input];
    }

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