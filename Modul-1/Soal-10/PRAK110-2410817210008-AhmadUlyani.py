import math
alas = 5
tinggi = 12
sisimiring = math.sqrt(alas * alas + tinggi * tinggi)
keliling = alas + tinggi + sisimiring
luas = (alas * tinggi) / 2

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print("")
print("Jawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {sisimiring:.0f} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")