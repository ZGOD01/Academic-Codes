def selection_sort(a):
    for i in range(len(a)-1):
        min_index=i
        for j in range(i+1,len(a)):
            if a[min_index] > a[j]:
                min_index=j;
                
        a[i],a[min_index]=a[min_index],a[i]
    return a;    
a= [2,44,1,54,66,45,23,32,46,7,43]

print("Unsorted Array :",a)
# sorted_arr=selection_sort(a);
# print("Sorted Array:", sorted_arr);

selection_sort(a)
print("Sorted Array : ",a)