#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * temp = readline("Enter temperature in celsius: ");
  double ftemp = atof(temp);
  double ctemp = (ftemp*9/5)+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.", ftemp, ctemp);
  return 0;
}