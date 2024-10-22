# Finding the eucledian distance..
list1 = [int(n) for n in input().split()]
list2 = [int(n) for n in input().split()]
t1 = tuple(list1)
t2 = tuple(list2)
a = round(((t1[0]-t2[0])**2 + (t1[1]-t2[1])**2 + (t1[2]-t2[2])**2)**0.5,3)
print(f"ans is : ",a)