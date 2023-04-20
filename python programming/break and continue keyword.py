name=input("enter your name: ")
i=0
x=""
for i in range(len(name)):
    if i==1:
           continue
    if name[i] not in x:
        x+=name[i]
        print(f"{name[i]}:{name.count(name[i])}")
    i+=1