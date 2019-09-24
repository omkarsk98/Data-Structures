"use strict";

const fs = require("fs");

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

function getPosition(array, element, left, right) {
  if (right - left <= 5) {
    // console.log(
    //   "Got Length less then 5, Scanning ",
    //   element,
    //   " in",
    //   array,
    //   array[left],
    //   array[right]
    // );
    for (let i = left; i < right; i++) if (array[i] < element) return i;
    return right + 1;
  }
  let mid = parseInt((left + right) / 2);
  // console.log(
  //   `If failed. Scanning for left:${left} right:${right} mid:${mid} element:${element} array[mid]:${array[mid]}`
  // );
  if (array[mid] < element) return getPosition(array, element, left, mid - 1);
  return getPosition(array, element, mid + 1, right);
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
  // console.log(scores);
  for (let i of alice) {
    let index = scores.indexOf(i);
    if (index !== -1) res.push(index + 1);
    else {
      let j = 0;
      j = getPosition(scores, i, 0, scores.length - 1);
      // while (scores[j] > i) {
      //   // O(n)
      //   j++;
      // }
      scores.splice(j, 0, i);
      // console.log("New scores as", scores);
      res.push(scores.indexOf(i) + 1);
    }
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
