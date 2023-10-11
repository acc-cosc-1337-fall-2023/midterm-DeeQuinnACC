#include "question1.h"
#include <iostream>

using std::cout;

int main()
{
    cout<<"\nEpoch Time: 1570846218";
    cout<<"\nClock Time: "<<get_hours(1570846218)<<":"<<get_minutes(1570846218)<<":"<<get_seconds(1570846218)<<"\n";
    
    cout<<"\nEpoch Time: 1570875018";
    cout<<"\nClock Time: "<<get_hours(1570875018)<<":"<<get_minutes(1570875018)<<":"<<get_seconds(1570875018)<<"\n";
    return 0;
}