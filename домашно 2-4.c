#include <stdio.h>

int main() {
int a , b , c , d , f;
printf("a b c d f:");
 scanf("%d %d %d %d %d" , &a, &b, &c, &d, &f); 
if ((a && b && f) || (c && d && f) ) 
{ 
    printf("lamp on!\n");
} else {

    printf("lamp of!\n");
}
 return 0;
}