class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def height(root):
    if not root:
        return 0
    return 1 + max(height(root.left), height(root.right))

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

print("Height:", height(root))
