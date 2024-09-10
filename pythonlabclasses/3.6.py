# fing the frequency of particular character in string..
str = input("Enter the string :")
target = input("Enter the character :")
for i in str:
    if target==i:
        print("Yes it is present")
        break
else:
     print("It is not present")   