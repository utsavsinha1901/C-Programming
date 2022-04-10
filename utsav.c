#include <stdio.h>
int sum(int a, int b)
{
  return a + b;
}
int main()
{
  int a, b;
  printf("Enter two numbers\n");
  scanf("%d %d", &a, &b);
  int c = a + b;
  c = sum(a, b);
  printf("%d",c);
// I love maggi
  return 0;
}
