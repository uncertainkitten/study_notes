#include <stdio.h>

main()
{
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == '\n'){
      putchar(' ');
    } else {
      putchar(c);
    }
  }
}