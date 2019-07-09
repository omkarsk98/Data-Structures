function candies(n, arr) {
  let candiesArray = new Array(n);
  candiesArray[0] = 1;
  let sumCandies = 0;
  for (let i = 1; i < n; i++) {
    if (arr[i] > arr[i - 1]) {
      candiesArray[i] = candiesArray[i - 1] + 1;
    } else {
      candiesArray[i] = 1;
    }
  }
  for (let i = n - 2; i >= 0; i--) {
    if (arr[i] > arr[i + 1] && candiesArray[i] <= candiesArray[i + 1]) {
      candiesArray[i] = candiesArray[i + 1] + 1;
    }
    sumCandies += candiesArray[i];
  }
  sumCandies += candiesArray[n - 1];
  return sumCandies;
}
let n = 8;
let arr = "2 4 3 5 2 6 4 5".split(" ").map(Number);
// console.log(arr);
let res = candies(n, arr);
console.log(res);
