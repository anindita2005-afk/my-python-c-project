n = int(input("Enter size of array: "))
a = []

print("Enter elements:")
for i in range(n):
    elements = int(input())
    a.append(elements)

c = 0
for i in range(n):
    if a[i] != 0:
        a[c], a[i] = a[i], a[c]
        c += 1
print("After moving zeros:", a)
