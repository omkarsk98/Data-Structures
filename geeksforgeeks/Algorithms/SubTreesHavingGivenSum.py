# Initial Template for Python 3
import atexit
import io
import sys
# default dict used as a map, to store node-value mapping.
from collections import defaultdict
# Contributed by : Nagendra Jha
_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER
@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())
# Node Class:


class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None
# Tree Class


class Tree:
    def __init__(self):
        self.root = None
        self.map_nodes = defaultdict(Node)

    def Insert(self, parent, child, dir):
        if self.root is None:
            root_node = Node(parent)
            child_node = Node(child)
            if dir == 'L':
                root_node.left = child_node
            else:
                root_node.right = child_node
            self.root = root_node
            self.map_nodes[parent] = root_node
            self.map_nodes[child] = child_node
            return
        parent_node = self.map_nodes[parent]
        child_node = Node(child)
        self.map_nodes[child] = child_node
        if dir == 'L':
            parent_node.left = child_node
        else:
            parent_node.right = child_node
        return


def countSumWithXUtil(root, count, x):
    print("In util with root as",root.data)
    if not root:
        return 0
    ls = countSumWithXUtil(root.left, count, x)
    rs = countSumWithXUtil(root.right, count, x)
    sum = ls + rs + root.data
    if sum == x:
        count += 1
    return sum


def countSubtreesWithSumX(root, x):
    print("In function")
    '''
    :param root: root of given tree
    :param x: value of x.
    :return: Count of such subtrees
    '''
    if not root:
        return 0
    count = 0
    ls = countSumWithXUtil(root.left, count, x)
    rs = countSumWithXUtil(root.right, count, x)
    if ls+rs+root.data == x:
        count += 1
    return count


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        n = int(input())  # number of nodes in tree
        # parent child info in list
        a = list(map(str, input().strip().split()))
        x = int(input())
        # construct the tree according to given list
        tree = Tree()
        i = 0
        while (i < len(a)):
            parent = int(a[i])
            child = int(a[i + 1])
            dir = a[i + 2]
            i += 3
            tree.Insert(parent, child, dir)  # Insert the nodes in tree.
        print(countSubtreesWithSumX(tree.root, x))
