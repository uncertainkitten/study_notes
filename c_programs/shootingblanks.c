#include <stdio.h>

main()
{
  int c, bc;
  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == '\n' || c == ' '){
      ++bc;
    }
  }
  printf("%d\n", bc);
}