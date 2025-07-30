n = int(input("Enter size of array: "))
a = []

print("Enter elements:")
for i in range(n):
    elements = int(input())
    a.append(elements)

P = 5
freq = [0] * (P + 1)


for i in range(n):
    if a[i] <= P:
        f[a[i]] += 1

for i in range(1, P + 1):
    print(f"Element: {i} Frequency: {a[i]}")
