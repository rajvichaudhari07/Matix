#include <stdio.h>
int main () {
  int intArr [3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  printf ("\nElements of array are:\n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++)
      printf ("%d\t", intArr[i] [j]);
    printf ("\n"); 
  }
}






