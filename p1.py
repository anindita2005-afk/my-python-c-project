n = int(input("Enter size of array: "))
a = []

print("Enter elements:")
for i in range(n):
    elements = int(input())
    a.append(elements)
print("insert element:")
element= int(input())
a.append(element)

print("Array entered:", a)
