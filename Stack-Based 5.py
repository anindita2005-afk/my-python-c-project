def find_celebrity(M, n):
    stack = [i for i in range(n)]  

    while len(stack) > 1:
        A = stack.pop()
        B = stack.pop()

        if M[A][B] == 1:
            stack.append(B)
        else:
            stack.append(A)

    if not stack:
        return -1  

    candidate = stack.pop()

    for i in range(n):
        if i != candidate:
            if M[candidate][i] == 1 or M[i][candidate] == 0:
                return -1  
    return candidate
M = [
    [0, 1, 1],
    [0, 0, 1],
    [0, 0, 0]
]
n = 3

print("Celebrity Index:", find_celebrity(M, n)) 
