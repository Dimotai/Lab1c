#include <stdio.h>
#include <readline/readline.h>

int main(void) {
  double temp;
  printf("Enter temperature in celsius:\n");
  scanf("%lf", &temp); 
  double ftemp = (temp*9/5)+32;
  printf("%lf° in Celsius is equivalent to %lf° Fahrenheit.", temp, ftemp);
  return 0;
}