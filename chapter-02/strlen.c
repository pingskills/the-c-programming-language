#include <stdio.h>

int my_strlen(char s[])
{
  int i;

  while (s[i] != '\0')
    ++i;
  return i;
}

int main()
{
  char *quote = "The quick brown fox jumps over the lazy dog";
  int len;
  len = my_strlen(quote);
  printf("The quote %s is %d characters long.\n", quote, len);
  return 0;
}
