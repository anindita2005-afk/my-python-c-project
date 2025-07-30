n = int(input("Enter size of array: "))
a = []

print("Enter elements:")
for i in range(n):
    elements = int(input())
    a.append(elements)

m = a[0]
for i in a:
    if i > m:
        m = i
print("Largest element:", m)
