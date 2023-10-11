#include "question2.h"

bool test_config()
{
    return true;
}

int roll_die()
{
    return ((double)rand() / (RAND_MAX)) * 6 + 1;
}