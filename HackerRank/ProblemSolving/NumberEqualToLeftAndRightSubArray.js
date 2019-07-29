// 5 10 4 0 2 4 5 30 6 5 8 5 1 2 3

"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");

const main = input => {
  // code here
  let arr = input
    .split("\n")[0]
    .split(" ")
    .map(Number);
  console.log(arr);
  let right = arr.slice(1).reduce((a, b) => a + b, 0);
  let left = 0;
  let res = [];
  for (let i = 0; i < arr.length - 2; i++) {
    if (left === right && left === arr[i]) res.push(arr[i]);
    left += arr[i];
    right -= arr[i + 1];
  }
  console.log(res);
};

let inputString = "";

process.stdin.on("data", data => {
  inputString += data;
});

process.stdin.on("end", data => {
  main(inputString);
});
