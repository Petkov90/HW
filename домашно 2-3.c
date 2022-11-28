#include <stdio.h>

int main() {
int a , b , c , d;
printf("a b c d:");
 scanf("%d %d %d %d" , &a, &b, &c, &d); 
if ((a && b) || (c && d)) 
{ 
    printf("lamp on!\n");
} else {

    printf("lamp of!\n");
}
 return 0;
}