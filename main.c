// Author: Tim Dai tfd5244@psu.edu
// Collaborator: Matthew Bronstein msb5970@psu.edu
// Collaborator: Sana Tipnis sat5652@psu.edu
// Collaborator: Pradhyumna Adusumilli pza5189@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * temp = readline("Enter temperature in celsius: ");
  double ftemp = atof(temp);
  double ctemp = (ftemp*9/5)+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", ftemp, ctemp);
  return 0;
}