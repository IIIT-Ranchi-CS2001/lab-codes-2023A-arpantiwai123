costumer_name = tuple([name for name in input().split()])
costumer_id = tuple([id for id in input().split()])
shopping_points = tuple([int(point) for point in input().split()])


ans1 = list(zip(costumer_name,costumer_id,shopping_points))

# using sorted function..
result = sorted(ans1)
print(result)

# without using sorted function..
# Bubble sort..
for i in range(len(ans1)-1):
    for j in range(i,len(ans1)):
        if(str(ans1[i][0])>str(ans1[j][0])):
            ans1[i],ans1[j] = ans1[j],ans1[i]

print(ans1)            