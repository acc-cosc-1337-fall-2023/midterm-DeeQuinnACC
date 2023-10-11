#include "question1.h"

bool test_config()
{
    return true;
}

//https://www.epochconverter.com/
//Conversion:
//1 minute: 60 seconds
//1 hour: 3600 seconds
//1 day: 86400 seconds
//1 week: 604800 seconds
//1 month: 2629743 seconds
//1 year: 31556926 seconds

int strip_days_from_epoch(int seconds_since_1970)
{
    //Remove days until subtracting them would result in a negative number.
    //This is horribally inefficent, but I don't have another solution
    while(seconds_since_1970 > 86400)
    {
       seconds_since_1970 -= 86400;
    }
    return seconds_since_1970;
}

int get_hours(int seconds_since_1970)
{
    seconds_since_1970 = strip_days_from_epoch(seconds_since_1970);

    return seconds_since_1970 / 3600;
}

int get_minutes(int seconds_since_1970)
{
    seconds_since_1970 = strip_days_from_epoch(seconds_since_1970);

    //Get rip of hours
    seconds_since_1970 -= 3600 * get_hours(seconds_since_1970);

    return seconds_since_1970 / 60;
}

int get_seconds(int seconds_since_1970)
{
    seconds_since_1970 = strip_days_from_epoch(seconds_since_1970);
    //Get rid of hours, then minutes
    seconds_since_1970 -= 3600 * get_hours(seconds_since_1970);
    seconds_since_1970 -= 60 * get_minutes(seconds_since_1970);

    return seconds_since_1970;
}