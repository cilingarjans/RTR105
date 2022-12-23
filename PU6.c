#include <stdio.h>

void funk1(); //bez argumentiem un bez return
void funk2(float m, float n); //ar argumentiem un bez return
float funk3(); //bez argumentiem un ar return
float funk4(float f); // ar argumentiem un ar return
int main()
{
  funk1();
  funk2(100,20);
  float apt_pi = funk3();
  printf("%f\n",apt_pi);
  int w = funk4(1000);
  printf("%d\n",w);
}
void funk1()
{
    printf("beggining of the programm\n");
}

void funk2(float m, float n)
{
    float proc = m/n*100;
    printf("procent: %f %%\n ",proc);
}
float funk3()
{
    float a = 22;
    float b = 7; 
    return(a/b);
}
float funk4(float f)
{
    return(2*3.141592*f);
}