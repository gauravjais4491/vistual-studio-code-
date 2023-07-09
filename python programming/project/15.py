print("this is \\\\ doublr backlash")
print("these are /\\/\\/\\/\\ mountains")
print("he is \t awesome")
print(" \\\"  \\n \\t \\' ")


def average(a,b,c):
    return f"average of three number is : {(a+b+c)/3}"
print(average(int(input("enter first number: ")),int(input("enter second number: ")),int(input("enter third number: "))))


def reverse(name):
    return f"reverse of your name is: {name[::-1]}"
print(reverse(input("enter your name: ")))


def length(name,single_character):
    return f"length of you string is: {len(name.strip())}" ,f"no. of single character is: {name.strip().lower().count(single_character.strip().lower())}"
    #return f"no. of single character is: {name.strip().lower().count(single_character.strip().lower())}"
print(length(input("enter your name: "),input("enter single character: ")))

import random
winning_number=random.randint(1,100)
guess=0
def gussing_game(guess_number):
    global guess
    if winning_number==guess_number:
        return f"you win and you attempt {guess} times"
    else:
        if guess_number>winning_number:
            print("too high")
        else:
            print("too low")
        guess+=1
        print(gussing_game(int(input(" guess again: "))))
print(gussing_game(int(input("enter any number: "))))


def watch_coco(name,age):
    if name[0]=='a' or name[0]=='A' and age>10:
        return "you can watch coco movie"
    return "you can't watch coco movie"
print(watch_coco(input("enter your name: "),int(input("enter you age: "))))



def sum(n):
    global sum
    sum=0
    for i in range(1,n+1):
        sum=sum+i
    return sum
print(sum(int(input("enter a number: "))))
        




