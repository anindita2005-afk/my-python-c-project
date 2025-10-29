class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def inorder(root):
    return inorder(root.left) + [root.val] + inorder(root.right) if root else []

def preorder(root):
    return [root.val] + preorder(root.left) + preorder(root.right) if root else []

def postorder(root):
    return postorder(root.left) + postorder(root.right) + [root.val] if root else []

root = Node(1)
root.left = Node(2)
root.right = Node(3)
print("Inorder:", inorder(root))
print("Preorder:", preorder(root))
print("Postorder:", postorder(root))
