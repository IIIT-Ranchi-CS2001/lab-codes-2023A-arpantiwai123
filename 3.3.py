# wap to find first n fabonacci numbers..
num = int(input("Enter the number :"))
a = 1
b = 1
next = a+b
print(a)
print(b)
for i in range(2,num):
    print(next)
    a = b
    b = next
    next = a+b

    # you can also use recursion..