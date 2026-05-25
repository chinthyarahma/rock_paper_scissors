import random

computer = random.randint(1, 100)

low = 1
high = 100

main = True

while main:

    player = int(input(f"Pilih angka dari {low}-{high}: "))

    if player > computer:
        print("Terlalu besar")
        high = player

    elif player < computer:
        print("Terlalu kecil")
        low = player

    else:
        print("BOOM! Tebakan benar")
        main = False
