class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def leftView(root):
    result = []
    def left_view_util(node, level):
        if not node:
            return
        if level == len(result):
            result.append(node.val)
        left_view_util(node.left, level + 1)
        left_view_util(node.right, level + 1)
    left_view_util(root, 0)
    return result

# Build a sample tree
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
root.right.right = Node(6)

print("Left view:", leftView(root))
