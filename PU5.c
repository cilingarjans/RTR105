#include <stdio.h>

int main()
{
long int a,c,b,ll,n;
printf("Enter one decimal number: ");
scanf("%ld",&n);
printf("Select data type (char-c; int-b; long long-ll)\n: ");
scanf("%ld",&a);

int i,factorial;
factorial=1;
if(a=c, n>=1, n<=12)
{
printf("It is not possible to calculate the factorial correctly with the 'char' data type\n");
}
if(a=ll, n>=1, n<=12)
{
printf("With the 'long long' data type it is not possible to calculate the factorial correctly\n");
}
if(a=b, n>=1, n<=12)
{
for(i=1; i<=n; i++)
{
factorial = factorial * i;
}
printf("Factorial from the entered number (%ld) is : %d",n,factorial);
}

if(a=c, n>=13)
{
printf("It is not possible to calculate the factorial correctly with the 'char' data type\n");
}
if(a=ll, n>=13)
{
printf("With the 'long long' data type it is not possible to calculate the factorial correctly\n");
}
if(a=b, n>=13)
{
for(i=1; n>=13; i++)
{
printf("Factor from the entered number: The factorial has no value\n");
break;
}
}
return 0;
}n