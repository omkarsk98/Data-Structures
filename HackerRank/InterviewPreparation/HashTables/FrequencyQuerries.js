function freqQuery(queries) {
  let counts = [];
  let arr = [];
  let freq = {};
  for (let [action, value] of queries) {
    let init = freq[value] || 0;
    if (action == 1) {
      freq[value] = init + 1;
      counts[init] = (counts[init] || 0) - 1;
      counts[init + 1] = (counts[init + 1] || 0) + 1;
    }
    if (action == 2 && init > 0) {
      freq[value] = init - 1;
      counts[init] -= 1;
      counts[init - 1] += 1;
    }
    if (action == 3) {
      arr.push(counts[value] > 0 ? 1 : 0);
    }
  }
  return arr;
}

let queries = [
  [1, 5],
  [1, 6],
  [3, 2],
  [1, 10],
  [1, 10],
  [1, 6],
  [2, 5],
  [3, 2]
];
// queries = [
//   [1, 3],
//   [1, 38],
//   [2, 1],
//   [1, 16],
//   [2, 1],
//   [2, 2],
//   [1, 64],
//   [1, 84],
//   [3, 1],
//   [1, 100],
//   [1, 10],
//   [2, 2],
//   [2, 1],
//   [1, 67],
//   [2, 2],
//   [3, 1],
//   [1, 99],
//   [1, 32],
//   [1, 58],
//   [3, 2]
// ];
let res = freqQuery(queries);
console.log(res);
