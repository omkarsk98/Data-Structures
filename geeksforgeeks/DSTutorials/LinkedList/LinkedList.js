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
    let node = new Node(value);
    let current;
    if (!this.head) {
      this.head = node;
      return;
    }
    current = this.head;
    while (current.next) current = current.next;
    current.next = node;
    // console.log(this.head.next.next.value);
  }
  print() {
    if (!this.head) {
      console.log("LinkedList is empty. Nothing to print");
      return;
    }
    let current = this.head;
    let print = "Printng linkedlist as:\n";
    while (current) {
      print += current.value + " ";
      current = current.next;
    }
    console.log(print);
  }
  reverse() {
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
list.print();
list.reverse();
list.print();
