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

function diagonalDifference(array) {
  let n = array.length;
  let l2r = 0,
    r2l = 0;
  for (let i = 0; i < n; i++) {
    l2r += array[i][i];
    r2l += array[i][n - i - 1];
  }
  return Math.abs(l2r - r2l);
}

function main(input) {
  let lines = input.split("\n");
  let n = parseInt(lines[0]);
  let array = [];
  for (let i = 1; i <= n; i++) array.push(lines[i].split(" ").map(Number));
  let res = diagonalDifference(array);
  console.log(res);
}
