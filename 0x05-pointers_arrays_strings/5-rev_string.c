#include <stdio.h>
#include "main.h"

/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
