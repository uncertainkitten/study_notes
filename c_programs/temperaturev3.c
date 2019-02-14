#include <stdio.h>

/* Print Fahrenheit/Celsius table */

main(){
  int fahr;

  #define LOWER 0 /* lower limit of table */
  #define UPPER 300 /* upper limit of table */
  #define STEP 20 /* step size */

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}