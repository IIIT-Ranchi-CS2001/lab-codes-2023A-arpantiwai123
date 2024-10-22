costumer_name = tuple([name for name in input().split()])
costumer_id = tuple([id for id in input().split()])
shopping_points = tuple([int(point) for point in input().split()])

# using zip()
ans1 = list(zip(costumer_name,costumer_id,shopping_points))
print(type(ans1))
print(ans1)

# withount using zip()..
ans2 = [costumer_name,costumer_id,shopping_points]
print(type(ans2))
print(ans2)