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

def lca(root, n1, n2):
    while root:
        if root.val > n1 and root.val > n2:
            root = root.left
        elif root.val < n1 and root.val < n2:
            root = root.right
        else:
            return root
    return None

# Create BST
root = None
for key in [5, 6, 8, 2, 4, 7, 9]:
    root = insertNode(root, key)

# Find LCA
ancestor = lca(root, 2, 4)
print("LCA:", ancestor.val if ancestor else None)
