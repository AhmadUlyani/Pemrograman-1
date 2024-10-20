A = 400000
B = 350000

print("Harga sepatu A adalah", A)
print("Harga sepatu B adalah", B)

diskonA = 0.13*A
hargasetelahdiskonA = A - diskonA
diskonB = 0.21*B
hargasetelahdiskonB = B - diskonB

print(f"Sepatu A mendapatkan diskon 13% sehingga harganya menjadi {hargasetelahdiskonA:.0f}")
print(f"Sepatu B mendapatkan diskon 21% sehingga harganya menjadi {hargasetelahdiskonB:.0f}")