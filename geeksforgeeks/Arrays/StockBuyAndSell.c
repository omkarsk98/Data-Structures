/* 
  7
  100 180 260 310 40 535 695
  (0, 3) (4, 6)

  10
  23 13 25 29 33 19 34 45 65 67
  (1 4) (5 9)

  84
  886 2777 6915 7793 8335 5386 492 6649 1421 2362 27 8690 59 7763 3926 540 3426 9172 5736 5211 5368 2567 6429 5782 1530 2862 5123 4067 3135 3929 9802 4022 3058 3069 8167 1393 8456 5011 8042 6229 7373 4421 4919 3784 8537 5198 4324 8315 4370 6413 3526 6091 8980 9956 1873 6862 9170 6996 7281 2305 925 7084 6327 336 6505 846 1729 1313 5857 6124 3895 9582 545 8814 3367 5434 364 4043 3750 1087 6808 7276 7178 5788
  (0 4) (6 7) (8 9) (10 11) (12 13) (15 17) (19 20) (21 22) (24 26) (28 30) (32 34) (35 36) (37 38) (39 40) (41 42) (43 44) (46 47) (48 49) (50 53) (54 56) (57 58) (60 61) (63 64) (65 66) (67 69) (70 71) (72 73) (74 75) (76 77) (79 81)
  (0 4) (6 7) (8 9) (10 11) (12 13) (15 17) (19 20) (21 22) (24 26) (28 30) (32 34) (35 36) (37 38) (39 40) (41 42) (43 44) (46 47) (48 49) (50 53) (54 56) (57 58) (60 61) (63 64) (65 66) (67 69) (70 71) (72 73) (74 75) (76 77) (79 81)
*/
#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int j = 0; j < n; j++)
      scanf("%d", &array[j]);
    short profit = 0;
    short buyIndex = 0, sellIndex = 0;
    for (int j = 1; j <= n; j++)
    {
      // printf("Buy Index:%d and Sell Index:%d\n", buyIndex, sellIndex);
      if (array[j] < array[j - 1] && buyIndex == j - 1)
        buyIndex++;
      else if (array[j] < array[j - 1] && buyIndex != j - 1)
      {
        if (buyIndex != sellIndex)
        {
          printf("(%d %d) ", buyIndex, sellIndex);
          profit = 1;
        }
        buyIndex = j;
        sellIndex = j + 1;
      }
      else if (array[j] > array[j - 1])
        sellIndex = j;
    }
    if (buyIndex < n && sellIndex - 1 < n && buyIndex != sellIndex - 1)
      printf("(%d %d)", buyIndex, sellIndex - 1);
    if (profit == 0)
      printf("No Profit");
    printf("\n");
  }
  return 0;
}