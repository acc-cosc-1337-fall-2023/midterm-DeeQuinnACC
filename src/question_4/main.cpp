#include <iostream>
#include <string>
#include "question4.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
    string input;
    bool palindrome;

    do
    {
        cout<<"\nPlease enter a word to check: ";
        cin>>input;

        palindrome = is_palindrome(input);

        if(palindrome)
        {
            cout<<"\n'"<<input<<"' is a palindrome!";
        }
        else
        {
            cout<<"\n'"<<input<<"' is NOT a palindrome!";
        }
        
        cout<<"\n\nTo exit the program, type 'exit'.";
        cout<<"\nOtherwise, type anything to test another word.";
        cout<<"\nPlease enter your choice: ";
        cin>>input;
    } while (input != "exit");
    

    return 0;
}