#include <stdio.h>

main()
{
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\b'){
      putchar('\\');
      putchar('b');
    }
    if (c == '\t'){
      putchar('\\');
      putchar('t');
    }

    if(c == '\\'){
      putchar('\\');
      putchar('\\');
    }

    if (c != '\b' && c != '\t' && c != '\\'){
      putchar(c);
    }
  }
}