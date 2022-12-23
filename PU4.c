#include <stdio.h>

int main()
{
long int a,c,b,ll,n;
printf("Enter one decimal number: ");
scanf("%ld",&n);
printf("Select data type (char-c; int-b; long long-ll)\n: ");
scanf("%ld",&a);

int i,f;
f=i=1;
if(a=c, n>=1, n<=12)
{
printf("Sorry, it is not possible to calculate the factorial correctly with the 'char' data type\n");
}
if(a=ll, n>=1, n<=12)
{
printf("Sorry, it is not possible to calculate a factor correctly with the 'long long' data type\n");
}
if(a=b, n>=1, n<=12)
{
while(i<=n)
{
f*=i;
i++;
}
printf("Factorial from the entered number (%ld) is : %d",n,f);
}

if(a=c, n>=13)
{
printf("Sorry, it is not possible to calculate the factorial correctly with the 'char' data type\n");
}
if(a=ll, n>=13)
{
printf("Sorry, it is not possible to calculate a factor correctly with the 'long long' data type\n");
}
if(a=b, n>=13)
{
while(n>=13)
{
printf("Factor from the entered number: The factorial has no value\n");
break;
}
}
return 0;
}