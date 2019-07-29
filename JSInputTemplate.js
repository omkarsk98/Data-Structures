"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";

function main(input) {
  // code here
}

process.stdin.on("data", function(data) {
  inputString += data;
});

process.stdin.on("end", function(data) {
  main(inputString);
});
