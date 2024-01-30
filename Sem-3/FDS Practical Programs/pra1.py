# A> List of student who play both cricket and badminton 


def intersection(l1,l2):
    res = []
    for student in l1:
        if student in  l2:
            res.append(student)
            
    return res 
            
# B> list of student who play either cricket or badminton but not both 

def union(l1,l2):
    res = l2.copy()
    for student in l1:
        if not student in  l2:
            res.append(student)
    return res

def diff(l1,l2):
    res = []
    for student in l1:
        if not student in  l2:
            res.append(student)
            
    return res

a = [1,2,3,4,5,6,7,8,9,10]
b = [2,4,6,8,10]
c = [1,3,5,7,9,11]

print(intersection(a,b))
# print(union(a,b))

u = union(a,b)
i = intersection(a,b)

print (diff(u,i))

# C> Number of students who play neither cricket nor badminton 
# C - B - A    <--------

diffcb = diff(c,b)

print (diff(diffcb,a))

# D> Number of student who play circket and football but not badminton 
# AUC - B    <--------

uac = union(a,c)

print(diff(uac,b))
