stud_list=[22,11,3,2,45,64,7,8,23,43,4,98,65,42,45,67]

def linear_search(list,key):
    for i in range(len(stud_list)):
        if stud_list[i]==key:
            return i
    return -1

index=linear_search(stud_list,3)

if index ==-1:
    print("The student is not present ")
else:
    print("The student is present at position :  ",index ,"(Linear Search)")
    
    
def sentinal_search(l,key):
    last = l[-1]
    l[-1]=key 
    i=0
    while l[i] != key :
        i+=1
        
    if i != len(l) - 1:
        return i
    if last == key:
        return len(l) - 1 
    
    return -1

index=sentinal_search(stud_list,64)
    
if index ==-1:
    print("The student is not present ")
else:
    print("The student is present at position :  ",index,"(Sentinal Search)")