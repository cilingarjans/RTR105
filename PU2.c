#include <stdio.h>
unsigned long size_of_array = 8; //perevod razmera int na 8 bit

int main()
{
    int num, index, i;
    int bin[size_of_array];

    printf("Enter any number: "); //input from user
    scanf("%d", &num);

    index = size_of_array - 1;

    while(index >= 0)
    {
        bin[index] = num & 1; //samiy pravij bit
        index--; // umenshaem indeks massiva
        num >>= 1; //smeshenie v pravo na 1
    }

    printf("Converted binary: ");  //vipisivaem konvertirovanoe chislo
    for(i=0; i<size_of_array; i++)
    {
        printf("%d", bin[i]);
    }

    return 0;
}