x = int(input())
if x == 0:
    print("Nol")
elif 0 < x < 10:
    print("Satuan")
elif 10 < x < 20:
    print("Belasan")
elif 10 <= x < 100:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")