n = int(input())

if 80 <= n <= 100:
    nilai = "A"
elif 70 <= n < 80:
    nilai = "B"
elif 60 <= n < 70:
    nilai = "C"
elif 50 <= n < 60:
    nilai = "D"
elif 0 <= n < 50:
    nilai = "E"
else:
    nilai = "Nilai tidak valid"

print(f"{nilai}")