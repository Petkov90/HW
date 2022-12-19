#include <stdio.h>

int main() {
     
     for (int i = 0; i < 21; i++){
         printf("%d," , i); 
        } 
      printf ("\n" );
      
	  int c = 20;
     while (c < 31){
         printf("%d," , c);
         c++;
     }  printf ("\n" );
     
	 int a = 10;
        while (a < 101){
         printf("%d," , a); 
         a+=5; 
         } printf ("\n" );
         
		 int d = 20;
         do {
             d--;
             printf("%d," , d);
         }
         while (d > 10);
         int e = 1000;
     while (e >= 0){
         printf("%d," , e);
         e-=100;
     } printf ("\n" );
         
         
    
    return 0;
}