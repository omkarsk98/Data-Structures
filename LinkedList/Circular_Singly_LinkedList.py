class Node:
    def __init__(self, data, next):
        self.data = data
        self.next = next


class CircularSinglyLinkedList(Node):
    def __init__(self):
        self.head = None

    def append(self, data):
        # 1. create a new node
        # 2. if linked list is empty, point head to new node and link it to itself and return
        # 3. traverse till the pointer does not point to head
        # 4. link the last node to this new node and link the new node to the head
        new = Node(data=data, next=None)  # new node created
        if not self.head:  # if linked list is empty
            self.head = new  # new node made as the head
            self.head.next = self.head
            return
        curr = self.head  # let curr be the variable used to traverse and initialise it with head
        while curr.next != self.head:  # traverse to the last node
            curr = curr.next
        curr.next = new  # connect last node to the new node
        new.next = self.head

    def insert(self, data, position):  # insertion with invalid positions handled
        new = Node(data=data, next=None)
        if position == 0:  # if position is 0, it is equivalent to prepend
            self.prepend(data)
            return
        curr = self.head
        for i in range(position-2):  # traverse till the correct node
            if curr.next == self.head:  # if position is greater than the number of nodes
                self.append(data)
                return
            curr = curr.next
        # connect the nodes
        ahead = curr.next
        curr.next = new
        new.next = ahead

    def prepend(self, data):
        # 1. create new node
        # 2. traverse till the end.
        # 3. link last node to new node
        # 4. link new node to the head
        # 5. reasign head
        new = Node(data=data, next=None)  # new Node created
        curr = self.head
        while True:
            curr = curr.next
            if curr.next == self.head:
                break
        curr.next = new
        new.next = self.head  # new node connected to the first element
        self.head = new  # head reinitialised

    def search(self, key):
        curr = self.head  # curr used for traversing
        value = None
        while curr.data != key:
            curr = curr.next
            if curr == self.head:
                print('%d Not found' % (key))
                return
        print('%d found' % (curr.data))
        return

    def delete(self, key):
        # 1. find the element
        # 2. if element not found, return
        # 3. else link its previous node to its next node
        curr = self.head
        prev = None
        while curr.data != key:
            if curr.next == self.head:
                print('%d not found' % (key))
                return
            prev = curr
            curr = curr.next
        if not prev:
            while True:
                curr = curr.next
                if curr.next == self.head:
                    break
            prev = curr
        if prev.next == self.head:
            self.head = self.head.next
        prev.next = prev.next.next
        print('%d deleted' % (key))
        return

    def sort(self):
        # 1. add all elements to a list
        # 2. sort the list using sort function
        # 3. over write the linkedlist with sorted list respectively
        curr = self.head
        list = []
        while True:
            list.append(curr.data)
            curr = curr.next
            if curr == self.head:
                break
        list.sort(reverse=True)
        curr = self.head
        while list:
            curr.data = list.pop()
            curr = curr.next

    # def reverse(self):
    #     # 1. use a varible temp to point to next node
    #     # 2. reasign link of current node to its previous node
    #     # 3. reasign head in each iteration
    #     last = None
    #     track = self.head
    #     temp = self.head.next
    #     self.head.next = last
    #     while True:
    #         if last == track:
    #             return
    #         last = temp
    #         temp = temp.next
    #         last.next = self.head
    #         self.head = last

    def display(self):
        # 1. use curr to traverse
        # 2. traverse for infinite time
        # 3. if curr is equal to head, i.e. linked list has completely traversed the circle once, break the loop
        curr = self.head
        while True:
            print(curr.data, end=' --> ')
            curr = curr.next
            if curr == self.head:
                break
        print('null\n')


List1 = CircularSinglyLinkedList()
List1.append(290)
List1.append(30)
List1.append(440)
List1.prepend(910)
List1.insert(15, 2)
List1.search(300)
List1.display()
List1.delete(40)
List1.display()
List1.sort()
print("-----After Sorting-----")
List1.display()
# print("-----After Reversing-----")
# List1.reverse()
# List1.display()
