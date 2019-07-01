let cost = [1, 4, 5, 3, 2];
// let cost = [2, 2, 4, 3];
let money = 4;
// let money = 4;

let copy = [...cost];
copy.sort((a, b) => {
  return a - b;
});
let left = 0,
  right = copy.length - 1;
while (left < right) {
  let sum = copy[left] + copy[right];
  if (sum === money) {
    let small = cost.indexOf(copy[left]);
    let large = cost.indexOf(copy[right]);
    console.log(small+1, large+1);
    break;
  } else if (sum < money) left++;
  else right--;
}

/* let pairs = [];
for (let i in cost) {
  // console.log(pairs);
  let temp = money - cost[i];
  if (pairs.includes(temp)) {
    console.log(cost.indexOf(temp)+1, cost[i]);
    break;
  }
  pairs.push(cost[i]);
}
 */
