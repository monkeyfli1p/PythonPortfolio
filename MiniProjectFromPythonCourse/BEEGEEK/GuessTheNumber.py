import random


#  Protection from a bad user
def is_valid(var):
    if var.isdigit() and 1 <= int(var) <= 100:
        return True
    else:
        return False


#  Another protection against a bad user
def is_valid_play_again(var):
    if var == "y":
        return True
    else:
        return False


#  Function to start the game all over again
def play_again():
    print("Would you like to play again? (y/n)")
    return is_valid_play_again(input())


#  Generating a number for the game
def create_random_num():
    print("Specify a number boundary (1 to n):")
    return random.randint(1, int(input()))


#  The main function of the game
def game(r_num):
    count = 0  # Number of attempts
    while True:
        n = input()
        if is_valid(n):
            n = int(n)
            if n < r_num:
                print("Your number is lower than the one you guessed, try again")
                count += 1
            elif n > r_num:
                print("Your number is higher than the number you guessed, try again")
                count += 1
            else:
                print("You guessed it, congratulations! Number of attempts =", count)
                if play_again():
                    r_num = create_random_num()
                else:
                    print("Thank you for playing the numerical guessing game. See you again...")
                    break
        else:
            print("How about entering an integer between 1 and 100?")
            continue


print("Welcome to the numerical guessing game\n")

game(create_random_num())
