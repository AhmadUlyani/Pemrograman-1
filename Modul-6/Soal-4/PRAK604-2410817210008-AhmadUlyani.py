def cek_pesan(kode, pesan):
    if len(kode) != len(pesan):
        return "Panjang kalimat berbeda, pesan palsu"
    
    hasil = ""
    bintang = 0
    pagar = 0
    
    for k, p in zip(kode, pesan):
        if k == " " and p == " ":
            hasil += " "
        elif k == p:
            hasil += "*"
            bintang += 1
        else:
            hasil += "#"
            pagar += 1

    print(hasil)
    print(f"* = {bintang}")
    print(f"# = {pagar}")
    
    if bintang >= pagar:
        return "Pesan Asli"
    else:
        return "Pesan Palsu"

kode = input()
pesan = input()
print(cek_pesan(kode, pesan))