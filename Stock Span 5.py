def calculate_stock_span(prices):
    n = len(prices)
    span = [0] * n
    stack = []

    for i in range(n):

        while stack and prices[i] >= prices[stack[-1]]:
            stack.pop()
        if not stack:
            span[i] = i + 1
        else:
            span[i] = i - stack[-1]

        stack.append(i)

    return span
prices = [100, 80, 60, 70, 60, 75, 85]
spans = calculate_stock_span(prices)
print("Prices:", prices)
print("Spans: ", spans)
