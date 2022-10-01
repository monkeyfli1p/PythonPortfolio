import random


answers = ["Undoubtedly", "I think so", "It's not clear yet, try again", "Don't even think",
           "Predetermined", "Most likely", "Ask later", "My answer is no",
           "No doubts", "Good prospects", "Best not to tell", "Not according to me",
           "You can be sure of that", "Yes", "Concentrate and ask again", "Very doubtful"]


def say_hello():
    return input("What is your name?")


def game():
    while True:
        print("What is your question?")
        question = input()
        print(random.choice(answers), end='\n\n')
        q = input("Do you want to ask another question?(y/n)")
        if q != 'y':
            print("Come back if you have any questions!")
            break


print("Hello World, I'm a magic orb and I know the answer to any question you have.\n")
print("Hello,", say_hello())
