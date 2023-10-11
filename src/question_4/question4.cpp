#include "question4.h"

using std::string;

bool test_config()
{
    return true;
}

bool is_palindrome(const string& word)
{
    string backwardsWord = "";

    for(int i = word.length() - 1; i >= 0; i--)
    {
        char letter = word[i];
        backwardsWord += letter;
    }
    return(word == backwardsWord);
}