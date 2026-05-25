import random

pilihan = {
    1: "batu",
    2: "gunting",
    3: "kertas"
}

player = int(input("1. Batu\n2. Gunting\n3. Kertas\nPilih: "))

computer = random.randint(1, 3)

print("Komputer memilih:", pilihan[computer])

if pilihan[player] == pilihan[computer]:
    print("Seri!")
    
elif pilihan[player] == "batu" and pilihan[computer] == "gunting":
    print("Pemain menang!")
    
elif pilihan[player] == "gunting" and pilihan[computer] == "kertas":
    print("Pemain menang!")
    
elif pilihan[player] == "kertas" and pilihan[computer] == "batu":
    print("Pemain menang!")
    
else:
    print("Komputer menang!")