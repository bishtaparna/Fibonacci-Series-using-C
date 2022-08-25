//Program of Fibonacci-Series 

#include <stdio.h>

int main()
{
   int i, n;

      // initialize first (A) and second (B) terms
      int A = 0, B = 1;

      // initialize the next term (3rd term)
      int nextTerm = A + B;

     // get number of terms from user
      printf("Enter the number of terms: ");
      scanf("%d", &n);

     // print the first two terms A and B
      printf("Fibonacci Series: %d, %d, ", A, B);

    // print 3rd to nth terms
     for (i = 3; i <= n; ++i) 
         {
            printf("%d, ", nextTerm);
            A = B;
            B = nextTerm;
            nextTerm = A + B;
         }

  return 0;
}
