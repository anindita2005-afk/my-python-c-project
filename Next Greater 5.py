def next_greater_element(arr):
    n = len(arr)
    result = [-1] * n
    stack = []

    for i in range(n):
        while stack and arr[i] > arr[stack[-1]]:
            index = stack.pop()
            result[index] = arr[i]
        stack.append(i)

    return result
arr = [4, 5, 2, 25]
print("Array:", arr)
print("Next Greater Elements:", next_greater_element(arr))
