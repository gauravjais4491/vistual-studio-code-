name=input("enter your name: ")
i=0
x=""
while i< len(name):
    if name[i] not in x:
        x+=name[i]
        print(f"{name[i]} : {name.count(name[i])}") 
    i+=1

    