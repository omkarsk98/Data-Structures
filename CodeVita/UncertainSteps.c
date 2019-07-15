#include <stdio.h>
int PossibleSteps(int count);
int PossibleStepsWithThree(int count);
int PossibleStepsWithThree(int count)
{
  if (count <= 1)
    return 1;
  if (count == 2)
    return 2;
  return PossibleSteps(count - 2) + PossibleSteps(count - 1);
}

int PossibleSteps(int count)
{
  if (count <= 1)
    return 1;
  if (count == 2)
    return 2;
  return PossibleStepsWithThree(count - 3) + PossibleSteps(count - 2) + PossibleSteps(count - 1);
}
void main()
{
  int n;
  scanf("%d", &n);
  n = (int)n;
  int res = PossibleSteps(n) % 1000000007;
  printf("%d\n", res);
}