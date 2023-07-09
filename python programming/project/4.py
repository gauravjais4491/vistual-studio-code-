winning_number=int(input("enter winning_number: " ))
your_score=int(input("enter your_score: "))
if your_score > winning_number:
    print("too high")
elif your_score==winning_number:
    print("you win")
else :
    print("too low")
