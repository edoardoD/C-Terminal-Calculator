#include "functions.h"
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    cout<<'\n'<<"Enter the command to proceed: ";
    string input;
    getline(cin, input);

    if (input=="classical physics")
    {
        classical_physics();
    }
    else{
        cout<<"wrong command, Try again"<<endl;
        main();
    }
    
    return 0;
}
