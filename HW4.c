
#include <stdio.h>

int main() {
	int num1 = -20;
	int num2 = 30;
	     printf(" number1 = %d\ , number2 = %d\n",  num1 , num2 );
  // number1 = -20 , number2 = 30
  int num3;
  num3 = num1;
  num1 = num2;
  num2 = num3;
        printf(" number1 = %d\ , number2 = %d\n", num1 , num2);
  // number1 = 30 , number2 = -20
return 0;
}