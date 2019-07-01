console.time("Code");
let s = "abba";

let checkAnagrams = (s1, s2) => {
  s1.split("");
  s2.split("");
  for (let i of s1) {
    if (!s2.includes(i)) return false;
    else {
      s2.replace(i, "");
    }
  }
  console.log("Anagrams for", s1, s2);
  return true;
};

let getSubSets = s => {
  var i,
    j,
    result = [];

  for (i = 0; i < s.length; i++) {
    for (j = i + 1; j < s.length + 1; j++) {
      let temp = s.slice(i, j);
      if (temp.length !== s.length) result.push(s.slice(i, j));
    }
  }
  let final = [];
  for (let i of result) {
    final.push(
      i
        .split("")
        .sort()
        .join("")
    );
  }
  console.log(final);
  return final;
};

function sherlockAndAnagrams(s) {
  let subSets = getSubSets(s);
  let count = 0;
  for (let i of subSets) {
    for (let j of subSets) {
      if (i.length !== j.length) continue;
      if (checkAnagrams(i, j)) count++;
    }
  }
  return count;
}

let result = sherlockAndAnagrams(s);
console.log(result);
console.timeEnd("Code");
