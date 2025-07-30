n = int(input("Enter size of array: "))
a = []

print("Enter elements:")
for i in range(n):
    elements = int(input())
    a.append(elements)

f = s = -1
for num in a:
    if num > f:
        s = f
        f = num
    elif num > s and num != f:
        s = num
print("Second largest:", s)
