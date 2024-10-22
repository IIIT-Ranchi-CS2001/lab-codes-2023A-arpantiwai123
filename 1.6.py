# WAP TO find all the angles of a triangle with given sides..Proper code..
import math
def find_angle(a,b,c):
    cos1 = (b*b+c*c-a*a)/(2*b*c)
    cos2 = (a*a+c*c-b*b)/(2*a*c)
    cos3 = (a*a+b*b-c*c)/(2*a*b)
    
    gamma_rad = math.acos(cos3)
    beta_rad = math.acos(cos2)
    alpha_rad = math.acos(cos1)

    gamma_degree = gamma_rad*(180/3.14)
    beta_degree = beta_rad*(180/3.14)
    alpha_degree = alpha_rad*(180/3.14)

    print(f"Angles in radian are {gamma_rad},{beta_rad},{alpha_rad}")
    print(f"Angles in degree are {gamma_degree},{beta_degree},{alpha_degree}")

    return

a = int(input("Enter first side :"))
b = int(input("Enter second side :"))
c = int(input("Enter third side :"))

x = a+b
y = b+c
z = a+c

if x<=c or y<=a or z<=b:
    print("The given triangle is not possible")
# using cosine law..
else:
    find_angle(a,b,c)