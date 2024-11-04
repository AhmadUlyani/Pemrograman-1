import math
a, b = map(float, input().split())
c = math.sqrt(b * b - a * a)
print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
keliling = a + b + c
print(f"Keliling = {keliling:.0f} cm")
luas = a * c / 2
print(f"Luas = {luas:.0f} cm^2")

print("")
a = float(input(""))
b = float(input(""))
c = math.sqrt(b * b - a * a)
print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
keliling = a + b + c
print(f"Keliling = {keliling:.0f} cm")
luas = a * c / 2
print(f"Luas = {luas:.0f} cm^2")