class Tree:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def insert(self, data):
        new = Tree(data)
        if data < self.data:
            if not self.left:
                self.left = new
                print('%d added to the left of %d' %
                      (new.data, self.data))
                return
            self.left.insert(data)
        else:
            if not self.right:
                self.right = new
                print('%d added to the right of %d' %
                      (new.data, self.data))
                return
            self.right.insert(data)

    def search(self, key):
        if key < self.data:
            if not self.left:
                print('\n%d not found' % key)
                return
            self.left.search(key)
        elif key > self.data:
            if not self.right:
                print('\n%d not found' % key)
                return
            self.right.search(key)
        else:
            print('\n%d found' % key)

    def PrintTree(self):
        if self.left:
            self.left.PrintTree()
        print(self.data),
        if self.right:
            self.right.PrintTree()

Tree1 = Tree(30)
Tree1.insert(20)
Tree1.insert(25)
Tree1.insert(15)
Tree1.insert(40)
Tree1.insert(35)
Tree1.PrintTree()
Tree1.search(20)
Tree1.search(10)
Tree1.search(200)