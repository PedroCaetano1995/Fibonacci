#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main() {

   /* setlocale(LC_ALL, "Portuguese"); */

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(i = 0; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
}


  /* 1 #include <stdio.h>
   2 
   3 int fib(int n)                            
   4 {                                         
   5   if (n == 1) return 1;                   
   6   else                                    
   7     if (n == 2) return 1;                 
   8     else return fib(n - 1) + fib(n - 2);  
   9 }                                         
  10 
  11 int main(void)
  12 {
  13   int n;
  14   scanf("%d", &n);
  15   printf("%d\n", fib(n));
  16   return 0;
  17 } */