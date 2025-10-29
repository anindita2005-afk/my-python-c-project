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

def minValueNode(node):
    current = node
    while current.left:
        current = current.left
    return current

def deleteNode(root, key):
    if not root:
        return root
    if key < root.val:
        root.left = deleteNode(root.left, key)
    elif key > root.val:
        root.right = deleteNode(root.right, key)
    else:
        if not root.left:
            return root.right
        elif not root.right:
            return root.left
        temp = minValueNode(root.right)
        root.val = temp.val
        root.right = deleteNode(root.right, temp.val)
    return root

def inorder(root):
    return inorder(root.left) + [root.val] + inorder(root.right) if root else []

root = None
for key in [5, 3, 8, 2, 4, 7, 9]:
    root = insertNode(root, key)

print("Inorder before deletion:", inorder(root))

# Delete node 3
root = deleteNode(root, 3)

print("Inorder after deletion:", inorder(root))
