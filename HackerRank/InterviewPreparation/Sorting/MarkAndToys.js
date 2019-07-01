let prices = [1, 12, 5, 111, 200, 1000, 10]
let k = 50;
prices.sort((a, b) => {
  return a - b;
});
let toys = 0;
let cost = 0;
for (let i of prices) {
  if (cost + i >= k) break;
  cost += i;
  toys++;
}
console.log(toys)