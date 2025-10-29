class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def insertNode(root, key):
    if not root:
        return Node(key)
    if key < root.val:
        root.left = insertNode(root.left, key)
    else:
        root.right = insertNode(root.right, key)
    return root

def isBST(root, left=float('-inf'), right=float('inf')):
    if not root:
        return True
    if not (left < root.val < right):
        return False
    return isBST(root.left, left, root.val) and isBST(root.right, root.val, right)

root = None
for key in [5, 3, 8, 2, 4]:
    root = insertNode(root, key)

print("Is BST:", isBST(root))
