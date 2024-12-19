# counting each character of string using dict concept..
from collections import Counter
str1 = input("Enter the string : ")
ans = dict(Counter(str1))
print(ans)