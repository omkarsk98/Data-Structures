/* 
Yesterday, Chef found K empty boxes in the cooler and decided to fill them with apples. 
He ordered N apples, where N is a multiple of K. Now, he just needs to hire someone 
who will distribute the apples into the boxes with professional passion.

Only two candidates passed all the interviews for the box filling job. In one minute, 
each candidate can put K apples into boxes, but they do it in different ways: 
the first candidate puts exactly one apple in each box, while the second one chooses a 
random box with the smallest number of apples and puts K apples in it.

Chef is wondering if the final distribution of apples can even depend on which candidate he hires. 
Can you answer that question?

Note: The boxes are distinguishable (labeled), while the apples are not. 
Therefore, two distributions of apples are different if there is a box such that the 
number of apples in it when the first candidate finishes working can be different 
from the number of apples in it when the second candidate finishes working.

Input
The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N and K.
Output
For each test case, print a single line containing the string "YES" if the final distributions 
of apples can be different or "NO" if they will be the same (without quotes).

Constraints
1≤T≤250
1≤N,K≤1018
N is divisible by K
Subtasks
Subtask #1 (30 points): 1≤N,K≤105
Subtask #2 (70 points): original constraints

Example Input
3
5 1
4 2
10 10
Example Output
NO
NO
YES
Explanation
Example case 1: No matter who is hired, all apples will be in the only box at the end.

Example case 2: At the end, there will be two apples in each box.

Example case 3: If we hire the first candidate, there will be one apple in each box, 
but if we hire the second one, there will be 10 apples in one box and none in all other boxes.
*/
"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");
let input = "";
process.stdin.on("data", data => {
  input += data;
});
process.stdin.on("end", () => {
  main(input);
});
function main(input) {
  let lines = input.split("\n");
  let t = lines.shift();
  while (t--) {
    let [n, k] = lines
      .shift()
      .split(" ")
      .map(Number);
    let a = [],
      b = [];
    let count = n / k;
    let kCopy = k;
    while (kCopy--) {
      a[kCopy] = count;
    }
    let min = 0,
      nCopy = n;
    while (nCopy) {
      b[min] = (b[min] || 0) + k;
      nCopy -= k;
      min = (min + 1) % k;
    }
    let diff = false;
    kCopy = k;
    // console.log(a, b);
    if (a.length !== b.length) {
      diff = true;
    }
    while (kCopy-- && !diff) {
      if (a[kCopy] !== b[kCopy]) {
        diff = true;
      }
    }
    console.log(diff ? "YES" : "NO");
  }
}
