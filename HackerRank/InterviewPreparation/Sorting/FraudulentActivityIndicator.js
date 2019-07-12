function getInsertPosition(array, value, low, high) {
  if (high <= low) return value > array[low] ? low + 1 : low;
  let mid = Math.floor((low + high) / 2);
  if (value == array[mid]) return mid + 1;

  if (value > array[mid]) return getInsertPosition(array, value, mid + 1, high);
  return getInsertPosition(array, value, low, mid - 1);
}

function insert(array, value) {
  let index = array.lastIndexOf(value);
  array.splice(index, 0, value);
  return array;
}

function remove(array, value) {
  var index = array.indexOf(value);
  if (index !== -1) array.splice(index, 1);
  return array;
}

// let expenditure = "2 3 4 2 3 6 8 4 5".split(" ").map(Number);
let expenditure = "1 2 3 4 4".split(" ").map(Number);
// let d = 5;
d = 4;
let sliced = expenditure.slice(0, d).sort((a, b) => {
  return a - b;
});

let mails = 0;
let mid = Math.floor(d / 2);
for (let i = d; i <= expenditure.length - 1; i++) {
  let median = d % 2 !== 0 ? sliced[mid] : (sliced[mid - 1] + sliced[mid]) / 2;
  if (2 * median <= expenditure[i]) {
    mails++;
  }
  sliced = remove(sliced, expenditure[i - d]);
  if (i < expenditure.length - 1) sliced = insert(sliced, expenditure[i]);
}
console.log(mails);
