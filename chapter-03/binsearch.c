#include <stdio.h>
#include <string.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, char v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low+high)/2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else /* found match */
      return mid;
  }
  return -1; /* no match */
}

int main()
{
  char *sortedArray = "abcdefghijklmnopqrstuvwxyz";
  char find;
 
  printf("String Length: %d\n", strlen(sortedArray));
  printf("String Length: %d\n", 26);

  printf("Enter a character: ");
  find = getchar();
  int place;
  place = binsearch(find, sortedArray, strlen(sortedArray));
  if (place >= 0)
    printf("%c was found in position %d\n", find, place);
  else
    printf("%c was not found in the sorted array\n", find);
}
