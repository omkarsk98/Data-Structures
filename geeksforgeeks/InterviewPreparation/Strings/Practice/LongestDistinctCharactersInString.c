/* 
  Test Cases
  abababcdefababcdab-->6
  geeksforgeeks-->7
  aldshflasghdfasgfkhgasdfasdgvfyweofyewyrtyefgv-->10
*/
#include <stdio.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char str[10000];
    scanf("%s", str);
    int currLen = 1, maxLen = 1, prevIndex, i, visited[26];
    for (i = 0; i < 26; i++)
      visited[i] = -1;
    visited[str[0] - 'a'] = 0;
    for (i = 1; str[i] != '\0'; i++)
    {
      prevIndex = visited[str[i] - 'a'];
      if (prevIndex == -1 || i - currLen > prevIndex)
        currLen++;
      else
      {
        if (currLen > maxLen)
          maxLen = currLen;
        currLen = i - prevIndex;
      }
      visited[str[i] - 'a'] = i;
    }
    if (currLen > maxLen)
      maxLen = currLen;
    printf("%d\n", maxLen);
  }
  return 0;
}