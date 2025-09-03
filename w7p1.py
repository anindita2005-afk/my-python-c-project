def printn(n):
    if n == 0:
        return
    print(n)
    printn(n - 1)

a = int(input("Enter a number: "))
printn(a)
