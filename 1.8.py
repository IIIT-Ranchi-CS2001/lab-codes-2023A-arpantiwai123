# Impedance claculation..
a = int(input("Enter the first int part : "))
b = int(input("Enter the first img part : "))
z1 = complex(a,b)

c = int(input("Enter the second int part : "))
d = int(input("Enter the second img part : "))
z2 = complex(c,d)

impedance = (z1 * z2)/(z1 + z2)

print(f"Equivalent impedance is {impedance}")
print(f"Real part is {impedance.real}")
print(f"Imaginary part is {impedance.imag}")