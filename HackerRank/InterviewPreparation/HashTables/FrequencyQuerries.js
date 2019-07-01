
function freqQuery(queries) {
  let arr = [];
  let freq = {};
  for (let i of queries) {
      if (i[0] == 1) {
          freq[i[1]] = freq[i[1]] + 1 || 0;
      }
      if (i[0] == 2) {
          freq[i[1]] = freq[i[1]] - 1 || 0;
      }
      if (i[0] == 3) {
          if (i[1] in Object.values(freq))
              arr.push(1);
          else
              arr.push(0);
      }
  }
  return arr;
}