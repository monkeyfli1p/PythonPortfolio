import random

# Constant character values
DIGITS = "0123456789"
LOWERCASE_LETTERS = "abcdefghijklmnopqrstuvwxyz"
UPPERCASE_LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
PUNCTUATION = "!#$%&*+-=?@^_"


def generate_password(len_password, password):
    res_password = ''
    for i in range(len_password):
        res_password += random.choice(password)
    return res_password


chars = ''

count_password = int(input("Enter the number of passwords to be generated:"))
len_password = int(input("Specify the length of the password:"))
num_password = input("Do I include the numbers 0123456789?(y/n)")
cap_password = input("Do I include the capital letters ABCDEFGHIJKLMNOPQRSTUVWXYZ?(y/n)")
low_password = input("Do I include lower case letters abcdefghijklmnopqrstuvwxyz?(y/n")
char_password = input("Do the characters !#$%&*+-=?@^_?(y/n)")
amb_password = input("Do I exclude ambiguous characters il1Lo0O?(y/n)")

if num_password == 'y':
    chars += DIGITS
if cap_password == 'y':
    chars += UPPERCASE_LETTERS
if low_password == 'y':
    chars += LOWERCASE_LETTERS
if char_password == 'y':
    chars += PUNCTUATION
if amb_password == 'y':
    for c in 'il1Lo0O':
        chars = chars.replace(c, '')

for i in range(count_password):
    print("Password number of", i + 1, "=", generate_password(len_password, chars))
