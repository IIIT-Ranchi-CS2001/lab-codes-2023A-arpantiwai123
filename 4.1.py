# Number of palindrome words ..
str = input("Enter the sentence : ")
list1 = str.split()
count = 0
for i in list1:
    c = i[::-1]
    if i==c:
        count+=1
print(list1)
print(f"Number of palindrome words are : {count}")        