from collections import Counter
# mean median and mode calculation..
size  = int(input("Enter the size :"))
list1=[ int(i) for i in input().split()]
# mean claculation..
n = len(list1)
sum = 0
for val in list1:
    sum+=val
mean = sum/n
print(mean)  

# median calculation..
median = 0
if n%2!=0:
    median = list1[n//2]
else:
     median = (list1[n/2]+list1[(n/2)+1])/2
print(median)        

# mode calculation..
d = Counter(list1) 
e = d.most_common(1)
print(f"Mode is {e}")       