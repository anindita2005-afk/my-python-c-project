n = int(input("Enter size of array: "))
a = []

print("Enter elements:")
for i in range(n):
    elements = int(input())
    a.append(elements)


l = a[-1]
for i in range(n-1, 0, -1):
    a[i] = a[i-1]
a[0] = l
print("After rotating:", a)
