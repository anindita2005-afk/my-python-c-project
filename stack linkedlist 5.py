
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
class Stack:
    def __init__(self):
        self.top = None 

    def is_empty(self):
        return self.top is None

    def push(self, item):
        new_node = Node(item)
        new_node.next = self.top
        self.top = new_node
        print(f"Pushed: {item}")

    def pop(self):
        if self.is_empty():
            print("Stack Underflow! Cannot pop.")
            return None
        popped_data = self.top.data
        self.top = self.top.next
        print(f"Popped: {popped_data}")
        return popped_data

    def peek(self):
        if self.is_empty():
            print("Stack is empty. No top element.")
            return None
        return self.top.data

    def display(self):
        if self.is_empty():
            print("Stack is empty.")
            return
        current = self.top
        print("Stack elements from top to bottom:")
        while current:
            print(current.data)
            current = current.next
s = Stack()

s.push(100)
s.push(200)
s.push(300)

print("Top element is:", s.peek())

s.display()

s.pop()
s.pop()
s.pop()
s.pop() 
