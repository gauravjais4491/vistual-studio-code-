x=list(range(1,10))
def reverse_list(l):
    reverse_list=[]
    for i in l: 
        reverse_list.append(l.pop())
    return reverse_list
print(reverse_list(x))