#include <stdio.h>
int main()
{
int s1; //Skaitlis Nr. 1
int s2; //Skaitlis Nr. 2
int s3; //Skaitlis Nr. 3
char order;
char d = 'd';

printf("Enter num1: ");
scanf("%d", &s1);
getchar(); //for cleanig buffer
printf("Enter num2: ");
scanf("%d", &s2);
getchar();
printf("Enter num3: ");
scanf("%d", &s3);
getchar();
printf("enter the number in ascending order - a; descending - d");
scanf("%c", &order);
getchar();



if(s1>s2 && s2>s3){
    if(order == d){
        printf("%d %d %d\n", s1,s2,s3);
    } else {
        printf("%d %d %d\n", s3,s2,s1);
        
    }
    
}

else if(s1>s3 && s3>s2){
    if(order == d){
        printf("%d %d %d\n", s1,s3,s2);
    } else {
        printf("%d %d %d\n", s2,s3,s1);
    }
    
}

else if(s2>s1 && s1>s3){
    if(order == d){
        printf("%d %d %d\n", s2,s1,s3);
    } else {
        printf("%d %d %d\n", s3,s1,s2);
    }
    
}

else if(s2>s3 && s3>s1){
    if(order == d){
        printf("%d %d %d\n", s2,s3,s1);
    } else {
        printf("%d %d %d\n", s1,s3,s2);
    }
    
}

else if(s3>s1 && s1>s2){
    if(order == d){
        printf("%d %d %d\n", s3,s1,s2);
    } else {
        printf("%d %d %d\n", s2,s1,s3);
    }
    
}

else if(s3>s2 && s2>s1){
    if(order == d){
        printf("%d %d %d\n", s3,s2,s1);
    } else {
        printf("%d %d %d\n", s1,s2,s3);
    }
    
}


return 0;
}