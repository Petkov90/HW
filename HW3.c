
#include <stdio.h>

int main() {
	int side1, side2, lice, H;
   printf (" insert side1: " ); 
   scanf ( " %d", &side1);
   printf (" insert side2: " );
   scanf ( " %d", &side2);
   printf (" insert hight: " );
   scanf ( " %d", &H);
    lice = (side1 + side2) / 2 * H;
    
        printf(" lice:%d\n ", lice );
return 0;
}