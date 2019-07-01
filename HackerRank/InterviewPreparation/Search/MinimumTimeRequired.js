console.time("Code");
let goal = 10;
goal = 306;
let machines = [2, 3, 2];
machines = [
  477,
  448,
  240,
  858,
  927,
  703,
  172,
  68,
  969,
  943,
  657,
  499,
  753,
  777,
  438,
  199,
  356,
  435,
  63,
  292,
  446,
  164,
  323,
  511,
  145,
  607,
  39,
  832,
  764,
  692,
  990,
  240,
  491,
  581,
  98,
  769,
  635,
  621,
  189,
  603,
  915,
  197,
  453,
  667,
  973,
  890,
  865,
  328,
  676,
  928
];
function getLCM(x, y) {
  let product = x * y;
  while (y) {
    var t = y;
    y = x % y;
    x = t;
  }
  return product / x;
}
machines.sort();
let lcm = machines[0];
for (let i = 1; i < machines.length; i++) {
  lcm = getLCM(machines[i], lcm);
}
let products = 0;
for (let i of machines) {
  products += lcm / i;
  console.log(products%1===0)
}
let days = Math.ceil((goal * lcm) / products);
console.log(days);
console.timeEnd("Code");
