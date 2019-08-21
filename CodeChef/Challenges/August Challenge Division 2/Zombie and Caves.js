/* 
There are N caves in a row, numbered 1 through N. For each valid i, the radiation power in the i-th cave is Ci. Originally, the radiation level in each cave was 0. Then, for each valid i, the radiation power in cave i increased the radiation levels in the caves i−Ci,…,i+Ci inclusive (if they exist) by 1, so all the caves are radioactive now.

Radiation is not the only problem, though. There are also N zombies with health levels H1,H2,…,HN. You want to kill all of them by getting them to the caves in such a way that there is exactly one zombie in each cave. A zombie dies in a cave if and only if the radiation level in that cave is equal to the health level of the zombie. Is it possible to kill all the zombies?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers C1,C2,…,CN.
The third line contains N space-separated integers H1,H2,…,HN.
Output
For each test case, print a single line containing the string "YES" if it is possible to kill all the zombies or "NO" if it is impossible
(without quotes).

Constraints
1≤T≤100
1≤N≤105
1≤Ci,Hi≤109 for each valid i

Example Input
2
5
1 2 3 4 5
1 2 3 4 5
5
1 2 3 4 5
5 4 3 4 5
Example Output
NO
YES

Explanation
In both example test cases, the final radiation levels in the caves are (5,5,4,4,3). 
For example, the radiation power in cave 1 increased the radiation levels in caves 1 and 2 (there is no cave 0) by 1, 
and the radiation power in cave 4 increased the radiation levels in all caves by 1.
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

function possibleToKillAllZombies(caves, healths) {
  let radiations = [];
  for (let i = 0; i < caves.length; i++) {
    let starttemp = i + 1 - caves[i];
    let endtemp = i + 1 + caves[i];
    let start = starttemp < 1 ? 1 : starttemp;
    let end = endtemp > caves.length ? caves.length + 1 : endtemp + 1;
    radiations[start] = (radiations[start] || 0) + 1;
    radiations[end] = (radiations[end] || 0) - 1;
  }
  radiations[0] = radiations[0] || 0;
  let freq = {};
  for (let i = 1; i < radiations.length; i++) {
    radiations[i] = (radiations[i] || 0) + radiations[i - 1];
    freq[radiations[i]] = (freq[radiations[i]] || 0) + 1;
  }
  for (let i of healths) {
    if (freq[i] === 0 || freq[i] === undefined) return false;
    freq[i]--;
  }
  return true;
}

function main(input) {
  let [t, ...rest] = input.split("\n");
  while (t) {
    rest.shift();
    let caves = rest
      .shift()
      .split(" ")
      .map(Number);
    let healths = rest
      .shift()
      .split(" ")
      .map(Number);
    let res = possibleToKillAllZombies(caves, healths);
    console.log(res === true ? "YES" : "NO");
    t--;
  }
}
