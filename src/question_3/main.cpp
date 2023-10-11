#include<iostream>
#include "question3.h"

using std::cout;

int main()
{
    //Show changing a value with value_copy_func
    int value = 0;
    cout<<"\nChanging a value with a value copy function: \n";
    for(int i = 0; i < 5; i++)
    {
        value = value_copy_func(value);
        cout<<value<<", ";
    }

    value = value_copy_func(value);
    cout<<value<<"\n";

    //Reset value, show changing a value with reference_func
    value = 0;
    cout<<"\nChanging a value with a reference function: \n";
    for(int i = 0; i < 5; i++)
    {
        reference_func(value);
        cout<<value<<", ";
    }

    reference_func(value);
    cout<<value<<"\n";
    return 0;
}