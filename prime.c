#include <stdio.h>



int isPrime(int integer) {
  if (integer<2) {
    return 0;
  }
  int i;
  for ( i == 2; i < integer; i++) {
    if (integer % i == 0) {
      return 0; //means false
    }
  }

  return 1; // which means true
}

int main() {
  printf("Prime numbers less than 100 are:\n");
    int i;
  for (i = 1; i < 100; i++) {
    if (isPrime(i)) {
      printf("%d\n", i);
    }
  }

}
