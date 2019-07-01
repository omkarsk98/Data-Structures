// let s = "aaabbbb";
let s = "cdefghmnopqrstuvw";
function gameOfThrones(s) {
  let table = {};
  for (let i of s) {
    table[i] = (table[i] || 0) + 1;
  }
  let count = 0;
  for (let i of Object.values(table)) {
    if (i % 2 !== 0) count++;
    if (count > 1) break;
  }
  if (count > 1) return "NO";
  return "YES";
}
let result = gameOfThrones(s);
console.log(result);
