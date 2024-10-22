course_code = ["CS1001","MA2001","PH3002","HS1002"]
course_name = ["Computer science","Engineering mathematics","Engineering physics","Professional communication"]
c = dict(zip(course_code,course_name))   
d = []
for (i,j) in c.items():
    c = i+":"+j
    d.append(c)
print(d)     