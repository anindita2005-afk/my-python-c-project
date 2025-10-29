def is_balanced(expression):
    stack = []
    matching_pairs = {')': '(', '}': '{', ']': '['}

    for char in expression:
        if char in '({[':
            stack.append(char)
        elif char in ')}]':
            if not stack or stack[-1] != matching_pairs[char]:
                return False
            stack.pop()

    return len(stack) == 0
expressions = [
    "()",        
    "([])",     
    "{[()]}",   
    "{[(])}",     
    "((())",             
    "[(])",       
]

for expr in expressions:
    result = "Balanced" if is_balanced(expr) else "Not Balanced"
    print(f"{expr}: {result}")
