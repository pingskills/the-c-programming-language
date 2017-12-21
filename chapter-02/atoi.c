#include <stdio.h>

int my_atoi(char s[])
{
  int i, n;

  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
  return n;
}

int main()
{
  char *num_string = "199c!";
  int int_value;
  int_value = my_atoi(num_string);
  printf("The string %s is represented as %d as an integer.\n", num_string, int_value);
  return 0;
}
