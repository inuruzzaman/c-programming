#include <stdio.h>

int main()
{
  // Declare and initialize two numbers
  double number1 = 5.5;
  double number2 = 10.3;
  // Calculate the sum of the two numbers
  double sum = number1 + number2;

  if (number1 >= number2)
  {
    printf("The first number is greater than or equal to the second number.\n");
  }

  // Display the result
  printf("The sum of %.2lf and %.2lf is: %.2lf\n", number1, number2, sum);

  // Return 0 to indicate successful program execution
  return 0;
}
