def min_reversals(expr):
    length = len(expr)

    if length % 2 != 0:
        return -1

    stack = []
    for char in expr:
        if char == '{':
            stack.append(char)
        else:  # char == '}'
            if stack and stack[-1] == '{':
                stack.pop()
            else:
                stack.append(char)

    open_count = close_count = 0
    while stack:
        if stack.pop() == '{':
            open_count += 1
        else:
            close_count += 1

    return (open_count + 1) // 2 + (close_count + 1) // 2
expr = "}{{}}{{{"
print("Minimum reversals needed:", min_reversals(expr)) 
