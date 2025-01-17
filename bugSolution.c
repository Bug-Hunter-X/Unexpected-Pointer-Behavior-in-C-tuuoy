#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20; 
  printf("%d\n", x); //output 20
  return 0;
} 
/*The solution here mainly relies on understanding compiler optimization.  In some cases, the compiler might optimize the code if it doesn't detect a necessary modification through the pointer. The code remains the same but the solution focuses on ensuring the compiler behaves as expected. This might involve using appropriate compiler flags or re-structuring the code for better clarity and predictability.*/