def is_pelindrome(name):
    if name[::-1]==name:
        return "the string is pelindrome"
    return "the string is not pelindrome"
print(is_pelindrome(input("enter your name: ")))