ru_abc = [chr(i) for i in range(1040, 1104)]
en_abc = [chr(i) for i in range(65, 91)] + [chr(j) for j in range(97, 123)]


def cryp_func(text):
    if text[0] in en_abc:
        alp = en_abc
        ROT = 26
    else:
        alp = ru_abc
        ROT = 32
    for i in range(len(text)):
        if text[i].isalpha():
            if text[i].isupper():
                print(alp[(alp.index(text[i]) + k) % ROT], end='')
            else:
                print(alp[(alp.index(text[i]) + k) % ROT + ROT], end='')
        else:
            print(text[i], end='')


print("Caesar's Text Encryption/Decryption Software")

k = int(input("Enter shift step for encryption ( >0 ) or decryption ( <0 ): "))

cryp_func(input('Enter text: '))
