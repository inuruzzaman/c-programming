#include <stdio.h>

int main(void)
{
  int number;

  printf("Enter an integer: ");

  if (scanf("%d", &number) != 1)
  {
    printf("Invalid input.\n");
    return 1;
  }

  if (number > 0)
  {
    printf("The number is positive.\n");
  }
  else if (number < 0)
  {
    printf("The number is negative.\n");
  }
  else
  {
    printf("The number is zero.\n");
  }

  return 0;
}
