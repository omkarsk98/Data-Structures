let s1 = "hi";
let s2 = "world";

function twoStrings(s1, s2) {
  for (let i of s1) {
    if (s2.includes(i)) {
      return "YES";
    }
  }
  return "NO";
}
let result = twoStrings(s1, s2);
console.log(result);
