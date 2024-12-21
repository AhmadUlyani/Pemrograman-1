def biodata(tahunlahir, nama, asal):
    tahunsekarang = 2020
    umur = tahunsekarang - tahunlahir
    print("")
    print(f"Perkenalkan Nama Saya : {nama}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahunsekarang}")
    print(f"Asal Saya Dari : {asal}")

def main():
    tahunlahir = int(input())
    nama = input()
    asal = input()

    biodata(tahunlahir, nama, asal)

if __name__ == "__main__":
    main()