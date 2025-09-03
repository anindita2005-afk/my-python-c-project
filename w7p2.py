def sum(n):
    if n == 0:
        return 0
    return n % 10 + sum(n // 10)

a = int(input("Enter a number: "))
print("Sum of the digits:", sum(a))
