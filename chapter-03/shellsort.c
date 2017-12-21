#include <stdio.h>

void print_array(int v[])
{
  int i;
  for (i = 0; i <= 11; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
  int gap, i, j, temp;

  for (gap = n/2; gap > 0; gap /= 2)
    for (i = gap; i < n; i++)
      for (j = i-gap; j >=0 && v[j] > v[j+gap]; j-=gap) {
        temp = v[j];
        v[j] = v[j+gap];
        v[j+gap] = temp;
        print_array(v);
      }
}

int main()
{
  int v[] = {10, 9, 8, 100, 76, 23, 98, 213, 142, 2, 10451, 123};

  print_array(v);
  shellsort(v, 12);
}
