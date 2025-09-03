a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))

while b != 0:
    t = b
    b = a % b
    a = t

print("GCD =", a)
