let a = [1, 3, 5, 7];
let b = [5, 7, 9];
let c = [7, 9, 11, 13];

for (let i of [a, b, c]) {
  i.sort((a, b) => a - b);
}
a = [...new Set(a)];
b = [...new Set(b)];
c = [...new Set(c)];
let bi = 0;
let ai = 0;
let ci = 0;
let total = 0;
while (bi < b.length && b[bi] != b[bi - 1]) {
  while (ai < a.length && a[ai] <= b[bi]) {
    ai++;
  }
  while (ci < c.length && c[ci] <= b[bi]) {
    ci++;
  }
  total += ai * ci;
  bi++;
}