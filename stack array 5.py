class Stack:
    def __init__(self, capacity):
        self.capacity = capacity
        self.stack = [None] * capacity
        self.top = -1

    def is_empty(self):
        return self.top == -1

    def is_full(self):
        return self.top == self.capacity - 1

    def push(self, item):
        if self.is_full():
            print("Stack Overflow! Cannot push", item)
            return
        self.top += 1
        self.stack[self.top] = item
        print(f"Pushed: {item}")

    def pop(self):
        if self.is_empty():
            print("Stack Underflow! Cannot pop")
            return None
        item = self.stack[self.top]
        self.stack[self.top] = None  
        self.top -= 1
        print(f"Popped: {item}")
        return item

    def peek(self):
        if self.is_empty():
            print("Stack is empty. No top element.")
            return None
        return self.stack[self.top]

    def display(self):
        if self.is_empty():
            print("Stack is empty.")
        else:
            print("Stack elements from top to bottom:")
            for i in range(self.top, -1, -1):
                print(self.stack[i])
s = Stack(5)

s.push(10)
s.push(20)
s.push(30)

print("Top element is:", s.peek())

s.display()

s.pop()
s.pop()
s.pop()
s.pop()  

