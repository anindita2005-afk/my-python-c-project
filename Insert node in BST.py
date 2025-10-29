class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def insertNode(root, key):
    if root is None:
        return Node(key)
    if key < root.val:
        root.left = insertNode(root.left, key)
    else:
        root.right = insertNode(root.right, key)
    return root

def inorder(root):
    return inorder(root.left) + [root.val] + inorder(root.right) if root else []

root = None
root = insertNode(root, 5)
root = insertNode(root, 3)
root = insertNode(root, 8)
root = insertNode(root, 4)

print("Inorder traversal after insertions:", inorder(root))
