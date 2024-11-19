totaldetik= int(input())
jam = totaldetik // 3600
menit = (totaldetik % 3600) // 60
detik = totaldetik % 60

if jam >= 24:
    hari = jam // 24
    jam = jam % 24
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")

else:
    print(f"{jam:02}:{menit:02}:{detik:02}")