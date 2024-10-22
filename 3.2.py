# find the sum of digits of a number..
num = int(input("Enter the number :"))
sum = 0
d = 0
while num>0:
    d = num%10
    sum+=d
    num//=10

print(f"sum is {sum}")    