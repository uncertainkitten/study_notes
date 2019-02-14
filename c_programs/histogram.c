#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* create a histogram of word lengths in input */
main()
{
  int c, i, lcount, state;
  int histo[21];

  state = OUT;
  for (i = 0; i < 21; ++i){
    histo[i] = 0;
  }
  while ((c = getchar()) != EOF){
    if (c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
      if (lcount > 21){
        ++histo[20];
      } else {
        ++histo[lcount];
      }
      lcount = 0;
    } else {
      state = IN;
      ++lcount;
    }
  }
  for (i = 0; i < 21; ++i){
    printf("Length %d: %d\n", i, histo[i]);
  }
}