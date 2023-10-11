#include "question2.h"
#include<iostream>
#include<time.h>

using std::cout;
using std::cin;

int main()
{
    srand(time(NULL));
    
    char input = 'Y';

    cout<<"Would you like to roll a die? (Y for yes): ";
    cin>>input;

    while(input == 'Y' || input == 'y')
    {
        cout<<"\nResult: "<<roll_die();

        cout<<"\nWould you like to roll another die? (Y for yes): ";
        cin>>input;
    }

    cout<<"\nExiting program...\n";

    return 0;
}