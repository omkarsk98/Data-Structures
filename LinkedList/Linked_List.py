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
        print('%d found' % (curr.data))
        return

    def delete(self, key):
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
        curr = self.head  # curr used to traverse the linked list
        while curr:  # traverse till there is an element
            print(curr.data, end=" --> ")  # print the data part of curr
            curr = curr.next  # go to the next node
        print('null\n')


List1 = SinglyLinkedList()
List1.append(23)
List1.append(26)
List1.append(87)
List1.append(8776)
List1.prepend(30)
List1.insert(32, 3)
List1.display()
List1.search(100)
List1.delete(8776)
List1.display()
List1.sort()
print("-----After Sorting-----")
List1.display()
print("-----After Reversing-----")
List1.reverse()
List1.display()
