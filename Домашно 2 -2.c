#include <stdio.h>

int main() {
int a , b , c ;
printf("a b c:");
 scanf("%d %d %d" , &a, &b, &c); 
if (a || b || c) 
{ 
    printf("lamp on!\n");
} else {

    printf("lamp of!\n");
}
 return 0;
}