#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % 10) > 5)
{
printf("Last digit is greater then 5 \n");
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf(" Last digit is  less than 6 and not 0 \n");
}
else
{
printf(" Last digit  is 0 \n");
}
return (0);
}
