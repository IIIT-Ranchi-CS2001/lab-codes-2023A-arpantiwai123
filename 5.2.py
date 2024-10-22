# Finding the equation
print("Enter the x1: ")
x1 = [int(i) for i in input().split()]
print("Enter the x2: ")
x2 = [int(i) for i in input().split()]
print("Enter the y1: ")
y1 = [int(i) for i in input().split()]
print("Enter the y2: ")
y2 = [int(i) for i in input().split()]

# Calculate the slope
slope = (x1[0] - x2[0]) / (y1[0] - y2[0])

# Print the equation
print(f"(x - {x1[0]}) = {slope} * (y - {y1[0]})")
