# WAP in python to find area and perimeter of triangle..
a = int(input("Enter the first side :"))
b = int(input("Enter the second side :"))
c = int(input("Enter the third side :"))
s = (a+b+c)/2
sq = (s-a)*(s-b)*(s-c)
area = pow(sq,0.5)
print("Area of triangle is : ",area)
print("Perimeter of triangle is : ",a+b+c)