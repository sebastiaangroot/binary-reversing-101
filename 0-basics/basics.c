#include <stdio.h>
#include <string.h>

#define BUF_MAX 256

int main(void)
{
  char buf[BUF_MAX];
  int len, i;
  printf("AWAITING REVERSING INPUT: ");
  gets(buf);
  len = strlen(buf);
  for (i = len-1; i >= 0; i--) {
    putc(buf[i], stdout);
  }
  printf("\n");
  return 0;
}
