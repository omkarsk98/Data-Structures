"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", inputStdin => {
  inputString += inputStdin;
});

process.stdin.on("end", _ => {
  inputString = inputString
    .replace(/\s*$/, "")
    .split("\n")
    .map(str => str.replace(/\s*$/, ""));

  main();
});

function readLine() {
  return inputString[currentLine++];
}

// Complete the climbingLeaderboard function below.
function climbingLeaderboard(scores, alice) {
  let scoresObj = {};
  for (let i of scores) {
    scoresObj[i] = i;
  }
  let res = [];
  scores = Object.values(scoresObj).sort((a, b) => {
    return b - a;
  });
  // console.log("scores in descending order", scores);
  let i = 0,
    j = scores.length - 1;
  while (i < alice.length) {
    while (alice[i] >= scores[j]) {
      j--;
    }
    res.push(j + 2);
    // console.log(res);
    i++;
  }
  return res;
}

function main() {
  const scoresCount = parseInt(readLine(), 10);

  const scores = readLine()
    .split(" ")
    .map(scoresTemp => parseInt(scoresTemp, 10));

  const aliceCount = parseInt(readLine(), 10);

  const alice = readLine()
    .split(" ")
    .map(aliceTemp => parseInt(aliceTemp, 10));

  let result = climbingLeaderboard(scores, alice);
  for (let i of result) console.log(i);
}
