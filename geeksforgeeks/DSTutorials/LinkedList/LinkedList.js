/* 
***** INSERT *****
1. Add to end: append
2. Add in the beginning: unshift
3. Add at a position: insert
***** DELETE *****
4. delete first item: shift
5. delete last item: pop
6. delete at a position: deleteAt
7. delete all values eqaul to value: deleteAllHaving
8. delete first node having a value: deleteFirstHaving
9. delete last node having a value: deleteLastHaving
*/

"use strict";
class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }
  append(value) {
    // O(n)
    let node = new Node(value);
    let current;
    if (!this.head) {
      this.head = node;
      return;
    }
    current = this.head;
    while (current.next) current = current.next;
    current.next = node;
  }
  unshift(value) {
    // O(1)
    let node = new Node(value);
    node.next = this.head;
    this.head = node;
  }
  insert(position, value) {
    // O(n)
    let counter = 1;
    let node = new Node(value);
    let current = this.head;
    while (counter < position - 1 && current.next) {
      current = current.next;
      counter++;
    }
    node.next = current.next;
    current.next = node;
  }
  shift() {
    // O(1)
    this.head = this.head.next;
  }
  pop() {
    // O(n)
    let current = this.head;
    while (current.next && current.next.next) current = current.next;
    current.next = null;
  }
  deleteAt(position) {
    // O(n)
    let counter = 1;
    let current = this.head;
    while (counter < position - 1 && current.next) {
      counter++;
      current = current.next;
    }
    let temp = current.next;
    if (current.next) current.next = current.next.next;
    else {
      console.log(`Position ${position} does not exists.`);
      current.next = null;
    }
    // delete temp;
  }
  deleteAllHaving(value) {
    // O(n)
    let current = this.head;
    let prev = null;
    while (current) {
      if (current.value === value) {
        if (current === this.head) this.shift();
        else {
          prev.next = current.next;
        }
      }
      prev = current;
      current = current.next;
    }
  }
  deleteFirstHaving(value) {
    // O(n)
    let current = this.head;
    let prev = null;
    while (current) {
      if (current.value === value && current === this.head) {
        this.shift();
        return;
      }
      if (current.value === value) {
        prev.next = current.next;
        return;
      }
      prev = current;
      current = current.next;
    }
  }
  deleteLastHaving(value) {
    // O(n)
    let current = this.head;
    let prev = null,
      last = null,
      prevToLast = null;
    while (current) {
      if (current.value === value) {
        prevToLast = prev;
        last = current;
      }
      prev = current;
      current = current.next;
    }
    if (last === this.head) {
      this.shift();
      return;
    }
    prevToLast.next = last.next;
  }
  print() {
    // O(n)
    if (!this.head) {
      console.log("LinkedList is empty. Nothing to print");
      return;
    }
    let current = this.head;
    let print = "Printing linkedlist as:\n";
    while (current) {
      print += current.value + " ";
      current = current.next;
    }
    console.log(print);
  }
  reverse() {
    // O(n)
    console.log("Reversing the linkedlist");
    if (!this.head) {
      console.log("LinkedList is empty. Nothing to reverse.");
      return;
    }
    let last = null;
    let temp = this.head.next;
    this.head.next = last;
    while (temp) {
      last = temp;
      temp = temp.next;
      last.next = this.head;
      this.head = last;
    }
  }
}
let list = new LinkedList();
list.append(22);
list.append(30);
list.append(1);
list.append(20);
list.append(29);
// list.reverse();
// list.print();
list.unshift(300);
list.insert(3, 400);
list.shift();
list.pop();
list.append(130);
list.append(11);
list.append(120);
list.append(129);
list.deleteAt(10);
list.unshift(120);
list.insert(6, 120);
list.append(120);
list.append(1280);
// list.deleteAllHaving(120);
// list.deleteFirstHaving(1280);
list.unshift(555);
list.print();
list.deleteLastHaving(555);
list.print();
