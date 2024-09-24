set1 = {i for i in input("enter all the singers :").split()}#singer
set2 = {i for i in input("enter all the dancers :").split()}#dancer
c = set1.union(set2)
d = set1.intersection(set2)
e = set1 - set2
f = set2 - set1
g = e.union(f)

print(c)
print(d)
print(e)
print(f)
print(g)