numbers=list(range(1,21))
def filter_odd_even(l):
    filter_even=[]
    filter_odd=[]
    for i in range(len(l)):
        if i%2==0:
            filter_even.append(i)
        else:
            filter_odd.append(i)
    return [filter_even,filter_odd]
print(filter_odd_even(numbers)) 
