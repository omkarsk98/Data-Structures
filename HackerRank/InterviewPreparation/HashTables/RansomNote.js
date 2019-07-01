let magazine = "two times three is not four".split(" ");
let note = "two times two is four".split(" ");
function checkMagazine(magazine, note) {
  for (let i of note){
    if(!magazine.includes(i)){
      console.log("No");
      return;
    }
    else {
      let index = magazine.indexOf(i)
      magazine.splice(index,1)
    }
  }
  console.log("Yes");
}

checkMagazine(magazine, note);