def fibonacci_series(n):
    a=int(input("enter first number: "))
    b=int(input("enter second number: "))
    if n==1:
        return f"fibonacci_series is: {a}"
    elif n==2:
       
        return f"fibonacci_series is: {a} {b}"
    else:
        print("fibonacci series is:",a,b,end=" ")
        for i in range(n-2):
            c=a+b
            a=b
            b=c
            print(b,end=" ")
print(fibonacci_series(int(input("enter number: "))))

