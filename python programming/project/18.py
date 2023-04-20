fruits=["grapes","mango","orange"]
def reverse_of_each_element(l):
    reverse_of_each_element=[]
    for sublist in l:
        reverse_of_each_element.append(sublist[::-1])
    return reverse_of_each_element
print(reverse_of_each_element(fruits)) 
