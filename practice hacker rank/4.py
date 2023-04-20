n = int(input(""))
if n==0:
    print("null")
if n==0:
    print("null")
if n>=2:
    class Rectangle:
        def __init__(self, a, b):
            self.a=n+1
            self.b=n+2
        def area_of_Rectangle(self):
            self.area_of_Rectangle=self.a * self.b
        def display(self):
            # print("area of rectangle is"+str(self.area_of_Rectangle))
            area= "{:.2f}".format(area_of_Rectangle)
            print(area)


    class Circle:
        def __init__(self,c):
            self.c=n-1
        def area_of_cicle(self):
            pie=3.14
            self.area_of_cicle=pie*self.c*self.c
        def display1(self):
            print("area of circle is"+str(self.area_of_circle))
    obj=Rectangle(n)
    obj.area_of_Rectangle()
    obj.display()

    obj1=Circle(n)
    obj1.area_of_cicle()
    obj1.display1()
    
    