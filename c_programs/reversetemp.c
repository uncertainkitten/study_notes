#include <stdio.h>

main(){
  float fahr, celsius;
  int upper, lower, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("Temperature table\n");
  printf("  C\tF\n");
  while (celsius <= upper){
    fahr = ((9.0 * celsius) / 5.0) + 32;
    printf("%3.0f %6.1f \n", celsius, fahr);
    celsius = celsius + step;
  }
}