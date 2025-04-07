def example():
    
    keepGoing = True
    while(keepGoing):
        userGuess = input("Enter the password: ")
        
        if len(userGuess) == 4 and sum(ord(char) for char in userGuess) == 400:
            print("Great job you figured it out")
            keepGoing = False
        elif userGuess == "q":
            keepGoing = False
        else:
            print("That was wrong. Try the right password next time")
            