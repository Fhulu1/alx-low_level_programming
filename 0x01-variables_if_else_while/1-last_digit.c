#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
int n;
int lastDigit = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d  is" + n);

if (n > 5)
{
printf("is greater then 5 \n");
}
else if (n == 0)
{
printf("is and is 0 \n");
}
else
{
printf(" and is less than 6 and not 0 \n");
}
return (0);
}
