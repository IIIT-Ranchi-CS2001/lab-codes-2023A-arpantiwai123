# find if a target is present in string or not..
str = input("Enter the string :")
target = input("Enter the character :")
for i in str:
    if target==i:
        print("Yes it is present")
        break
else:
     print("It is not present")   