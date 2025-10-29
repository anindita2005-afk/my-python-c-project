def evaluate_postfix(expression):
    stack = []

    for token in expression:
        if token.isdigit():  # Operand
            stack.append(int(token))
        elif token in '+-*/^':
            if len(stack) < 2:
                raise ValueError("Invalid postfix expression: insufficient operands.")
            b = stack.pop()
            a = stack.pop()

            if token == '+':
                result = a + b
            elif token == '-':
                result = a - b
            elif token == '*':
                result = a * b
            elif token == '/':
                result = a / b 
            elif token == '^':
                result = a ** b

            stack.append(result)
        else:
            raise ValueError(f"Invalid character in expression: {token}")

    if len(stack) != 1:
        raise ValueError("Invalid postfix expression: too many operands.")
    return stack.pop()
postfix_exprs = [
    "23*54*+9-", 
    "52+",        
    "82/",        
    "34+5*",    
    "82^"]    

for expr in postfix_exprs:
    print(f"Postfix: {expr} → Result: {evaluate_postfix(expr)}")
