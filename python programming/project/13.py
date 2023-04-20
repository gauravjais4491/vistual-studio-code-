#def greatest_smallest(a,b):
#  return a>b
#print(greatest_smallest(int(input("enter first number: ")),int(input("enter second number: "))))



#def greatest(a,b,c):
#   if a>b>c:
#       return f"biggest number is: {a}" 
#   elif b>c>a:
#       return f"biggest number is: {b} "  
#   else:
#       return f"biggest number is: {c} " 
#print(greatest(int(input("enter first number: ")),int(input("enter second number: ")),int(input("enter third number: "))))


def greatest(a,b,c):
    return f"greatest number is: {greatest(greatest(a,b),c)}"
print(greatest(int(input("enter first number: ")),int(input("enter second number: ")),int(input("enter third number: "))))