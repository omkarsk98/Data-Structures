"""
1. append
2. prepend
3. insert
4. search
5. deleteKey
6. findLengthOfLinkedList
7. deletePosition
8. sort
9. deleteLinkedList
10. display
11. findPosition
12. nthNodeFromEnd
13. middle Value
14. count of a given value
"""

import gc


class Node:
    def __init__(self, data, next):
        self.data = data
        self.next = next


class SinglyLinkedList(Node):
    def __init__(self):
        self.head = None

    def append(self, data):
        new = Node(data=data, next=None)  # new node created
        if not self.head:  # if linked list is empty
            self.head = new  # new node made as the head
            return
        curr = self.head  # let curr be the variable used to traverse and initialise it with head
        while curr.next:  # traverse to the last node
            curr = curr.next
        curr.next = new  # connect last node to the new node

    def prepend(self, data):
        new = Node(data=data, next=None)  # new Node created
        new.next = self.head  # new node connected to the first element
        self.head = new  # head reinitialised

    def insert(self, data, position):  # insertion with invalid positions handled
        new = Node(data=data, next=None)
        if position == 0:  # if position is 0, it is equivalent to prepend
            self.prepend(data)
            return
        curr = self.head
        for i in range(position-2):  # traverse till the correct node
            if not curr.next:  # if position is greater than the number of nodes
                self.append(data)
                return
            curr = curr.next
        # connect the nodes
        ahead = curr.next
        curr.next = new
        new.next = ahead

    def search(self, key):
        curr = self.head  # curr used for traversing
        value = None
        while curr.data != key:
            if not curr.next:
                print('%d Not found' % (key))
                return
            curr = curr.next
        print(key, 'found')
        return

    def deleteKey(self, key):
        # 1. find the element
        # 2. if element not found, return
        # 3. else link its previous node to its next node
        curr = self.head
        while curr.data != key:
            if not curr.next:
                print('%d not found' % (key))
                return
            prev = curr
            curr = curr.next
        if not prev:
            while curr:
                curr = curr.next
                if curr.next == self.head:
                    break
            prev = curr
        if prev.next == self.head:
            self.head = self.head.next
        prev.next = curr.next
        print('%d deleted' % (key))

    def findLengthOfLinkedList(self):
        length = 0
        curr = self.head
        while(curr):
            length += 1
            curr = curr.next
        return length

    def valueAtPosition(self, position):
        curr = self.head
        for i in range(position-1):
            if not curr.next:
                # print("Position", position, "not exit")
                return -1
            curr = curr.next
        return curr.data

    def deletePosition(self, position):
        # 1. traverse till position-1th node.
        # 2. link it to the node next to the position t be deleted
        curr = self.head
        if position == 0:
            """ position does not exit """
            # print("Position", position, "not exits")
            return -1
        if position == 1:
            self.head = self.head.next
            return
        for i in range(position-2):
            if not curr.next:
                print("Position", position, "not exit")
                return
            curr = curr.next
        curr.next = curr.next.next

    def sort(self):
        # 1. add all elements to a list
        # 2. sort the list using sort function
        # 3. over write the linkedlist with sorted list respectively
        curr = self.head
        list = []
        while curr:
            list.append(curr.data)
            curr = curr.next
        list.sort(reverse=True)
        curr = self.head
        while curr:
            curr.data = list.pop()
            curr = curr.next

    def deleteLinkedList(self):
        """
        1. point head to null
        """
        self.head = None

    def reverse(self):
        # 1. use a varible temp to point to next node
        # 2. reasign link of current node to its previous node
        # 3. reasign head in each iteration
        last = None
        temp = self.head.next
        self.head.next = last
        while temp:
            last = temp
            temp = temp.next
            last.next = self.head
            self.head = last

    def display(self):
        if not self.head:
            print("Linkedlist not present")
            return
        curr = self.head  # curr used to traverse the linked list
        while curr:  # traverse till there is an element
            print(curr.data, end=" --> ")  # print the data part of curr
            curr = curr.next  # go to the next node
        print('null\n')

    def nthNodeFromEnd(self, positionfromEnd):
        curr = self.head
        n = self.head
        for i in range(positionfromEnd-1):
            if not n.next:
                # print("this position does not exist")
                return -1
            n = n.next
        while n.next:
            curr = curr.next
            n = n.next
        return curr.data

    def middleValue(self):
        slow = self.head
        fast = self.head
        while fast.data:
            if not fast.next:
                break
            fast = fast.next
            if not fast.next:
                break
            fast = fast.next
            slow = slow.next
        return slow.data

    def countOfValue(self, value):
        curr = self.head
        count = 0
        while curr:
            print(curr.data)
            if curr.data == value:
                count += 1
            curr = curr.next
        return count


def splitList(list):
    if list == None or list.next == None:
        left_half = list
        right_half = None
        return left_half, right_half

    mid_pointer = list
    fast_runner = list.next

    while fast_runner:
        fast_runner = fast_runner.next
        if fast_runner:
            fast_runner = fast_runner.next
            mid_pointer = mid_pointer.next
    left_half = list
    right_half = mid_pointer.next
    mid_pointer.next = None
    return left_half, right_half

def Merge(left_half, right_half):
    # print("Head:",list.data)
    fake_head = Node(None,None)
    curr = fake_head
    list_head = None
    while left_half and right_half:
        if left_half.data < right_half.data:
            print("Left is smaller:",left_half.data)
            if not list_head:
                list_head = left_half
            curr.next = left_half
            print("starting from",left_half.data)
            left_half = left_half.next
            # print("Linking it to",left_half.data)
        else:
            print("Right is smaller:",right_half.data)
            if not list_head:
                list_head = right_half
            curr.next = right_half
            print("starting from",right_half.data)
            right_half = right_half.next
        print("Current:",curr.next.data)
        curr = curr.next
    
    if left_half:
        curr.next = left_half
        print("Linked to",left_half.data)
    if right_half:
        curr.next = right_half
        print("Linked to",right_half.data)
    # list = fake_head
    print("List should start at",list_head.data,"as")
    while list_head:
        print(list_head.data,"-->",end=" ")
        list_head = list_head.next
    print("null")
    return fake_head.next, list_head

def MergeSort(list):
    # print("\n+-------------------------------+\n|\t\t",list.data,"\t\t|\n+-------------------------------+\n\n")
    if not list or not list.next:
        return list
    left_half, right_half = splitList(list)
    left_half = MergeSort(left_half)
    right_half = MergeSort(right_half)
    print("\nAfter merging left",left_half.data)
    print("After merging right",right_half.data)
    merged_list, merged_head = Merge(left_half,right_half)
    return merged_list

def printList(list):
    list = list.head
    print("Printing list",list.data)
    while list:
        print(list.data,"--> ",end="")
        list = list.next
    print("null")

List1 = SinglyLinkedList()
# append
List1.append(23)
List1.append(26)
List1.append(87)
List1.append(8776)

# prepend
List1.prepend(30)
# insert
List1.insert(32, 3)
# List1.display()
# search
List1.search(100)
# deleteKey
List1.deleteKey(8776)
# List1.display()
# List1.sort()
# print("-----After Sorting-----")
# List1.display()
# print("-----After Reversing-----")
# reverse
List1.reverse()
# List1.display()
deletePosition = 100
# print("Before deleting node at postion", deletePosition)
# List1.display()
# print("After deleting node at position", deletePosition)
#  deletePosition
# List1.deletePosition(deletePosition)
# List1.display()
position = 0
valueAtPosition = List1.valueAtPosition(position)
if valueAtPosition == -1:
    print("position", position, "does not exists")
else:
    print("value at position", position, "is", valueAtPosition)
print("Length of linkedlist", List1.findLengthOfLinkedList())
# print("Before deleting linkedlist")
# List1.display()
#  deleteLinkedList
# List1.deleteLinkedList()
# print("After deleting linkedlist")
valueFromEnd = List1.nthNodeFromEnd(position)
if valueFromEnd == -1:
    print("Unable to find the value at position", position)
else:
    print("number", position, "value from end", valueFromEnd)
List1.append(8765)
List1.append(75)
valueAtMiddle = List1.middleValue()
print("Value at center is", valueAtMiddle)
# List1.append(23)
value = 23
print("Count of", value, "is", List1.countOfValue(value))
print("Displaying")
List1.display()
# printList(List1.head)
List1.append(59)
print("Sorting")
MergeSort(List1.head)
# List1.display()
printList(List1)
gc.collect()
