
import random
winning_number=random.randint(1,100)
guess=1
guess_number=int(input("guess a number between 1 and 100: "))
game_over=False

      
while not game_over:
    if guess_number==winning_number: 
        print(f"you win and you attempt {guess} times")
        game_over=True
    
    
    else :
    

        if guess_number>winning_number:
            print("too high")
        else :
            print("too low")
        guess+=1
        guess_number=int(input("guess again: "))
    
