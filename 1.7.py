# wap to take temperature and turn it into fahrenhiet..c->f and also return upto 2 decimal places..
temp = float(input("Enter the temperature in celsius :"))
fah = ((9/5)*temp) + 32
print("Temperature in fahrenhiet is :",fah)
new = round(fah,2)
print(new)