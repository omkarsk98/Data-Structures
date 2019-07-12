function lcs(i, j, count, s1, s2) {
  if (i == 0 || j == 0) {
    console.log("found 0");
    return count;
  }
  if (s1[i] == s2[j]) {
    console.log("matched", i - 1, j - 1);
    return lcs(i - 1, j - 1, count + 1, s1, s2);
  }
  return Math.max(
    Math.max(lcs(i - 1, j, 0, s1, s2), lcs(i, j - 1, 0, s1, s2)),
    count
  );
}

function commonChild(s1, s2) {
  let lcs = [...Array(s1.length + 1)].map(x => Array(s2.length + 1).fill(0));
  for (let i = 1; i < s1.length+1; i++) {
    for (let j = 1; j < s2.length+1; j++) {
      if (s1[i - 1] == s2[j - 1]) lcs[i][j] = lcs[i - 1][j - 1] + 1;
      else lcs[i][j] = Math.max(lcs[i - 1][j], lcs[i][j - 1]);
    }
  }
  // console.log(lcs)
  return lcs[s1.length][s2.length];
}

let s1 = "HARRY";
let s2 = "SALLY";
let result = commonChild(s1, s2);
console.log(result);
