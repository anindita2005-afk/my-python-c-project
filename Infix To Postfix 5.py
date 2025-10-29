def infix_to_postfix(expression):
    precedence = {'^': 3, '*': 2, '/': 2, '%': 2, '+': 1, '-': 1}
    associativity = {'^': 'right', '*': 'left', '/': 'left', '%': 'left', '+': 'left', '-': 'left'}
    stack = []
    output = []

    tokens = list(expression.replace(" ", ""))

    for token in tokens:
        if token.isalnum():  # Operand (letters or digits)
            output.append(token)
        elif token == '(':
            stack.append(token)
        elif token == ')':
            # Pop until matching '('
            while stack and stack[-1] != '(':
                output.append(stack.pop())
            stack.pop()  # Remove '('
        else:
            # Operator
            while (stack and stack[-1] != '(' and
                   (precedence[stack[-1]] > precedence[token] or
                    (precedence[stack[-1]] == precedence[token] and associativity[token] == 'left'))):
                output.append(stack.pop())
            stack.append(token)

    # Pop remaining operators
    while stack:
        output.append(stack.pop())

    return ''.join(output)
expressions = [
    "A+B",
    "A+B*C",
    "(A+B)*C",
    "A^B^C",
    "A*(B+C)/D",
    "A+B*C-D/E"
]

for expr in expressions:
    print(f"Infix: {expr} → Postfix: {infix_to_postfix(expr)}")
