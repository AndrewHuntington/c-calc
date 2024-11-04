#include <stdio.h>

int main()
{
  int a, b, choice, answer;

  printf("Please enter an integer: \n");
  scanf(" %d", &a);
  printf("Please enter an integer: \n");
  scanf(" %d", &b);

  printf("Please enter a number to choose an operation:\n1. addition\n2. subtraction\n3. multiplication\n4. division\n");
  scanf(" %d", &choice);

  switch (choice)
  {
  case 1:
    answer = a + b;
    printf("%d + %d = %d", a, b, answer);
    break;
  case 2:
    answer = a - b;
    printf("%d - %d = %d", a, b, answer);
    break;
  case 3:
    answer = a * b;
    printf("%d x %d = %d", a, b, answer);
    break;
  case 4:
    if (b == 0)
    {
      printf("Error: cannot divide by zero!");
      break;
    }
    answer = a / b;
    printf("%d / %d = %d", a, b, answer);
    break;
  default:
    printf("Invalid selection. Please choose a number between 1 and 4.\n");
    break;
  }
  return 0;
}