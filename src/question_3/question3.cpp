#include "question3.h"

bool test_config()
{
    return true;
}

int value_copy_func(int value)
{
    value += 10;
    return value;
}

void reference_func(int& value)
{
    value += 10;
}