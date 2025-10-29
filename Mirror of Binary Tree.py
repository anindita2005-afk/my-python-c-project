class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def mirror(root):
    if root:
        root.left, root.right = mirror(root.right), mirror(root.left)
    return root

def inorder_print(root):
    if root:
        inorder_print(root.left)
        print(root.val, end=' ')
        inorder_print(root.right)

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

print("Inorder before mirror:")
inorder_print(root)
print()

mirror(root)

print("Inorder after mirror:")
inorder_print(root)
print()
