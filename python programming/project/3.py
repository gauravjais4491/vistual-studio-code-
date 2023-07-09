name,single_character=input("enter your name and single character: ").split(",")
print(f"length of string is : {len(name.strip())}")
print(f"the no of character is: {name.strip().upper().count(single_character.strip().upper())}")
