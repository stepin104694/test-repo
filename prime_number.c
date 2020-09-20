#include "prime_number.h"

int prime_number(int number)
{
    /**
    *@note Prime numbers can't be divided by other numbers than itself or 1
    *@note for loop is used to check the reminder of given number is 0 when divided with 2
    */
    for(int i=2;i<=number/2;i++)
    {

       //checks whether the reminder is 0 or not
        //if 0, the given number is not a prime number

        if(number%i == 0)
           return 0;
    }
    return 1;
}
