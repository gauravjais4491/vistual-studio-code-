number=list(range(12,41))
number1=list(range(2,21))
def common_element(x,y):
    common_element=[]
    for i in x:
        if i in y:
            common_element.append(i)
    return common_element
print(common_element(number,number1))
