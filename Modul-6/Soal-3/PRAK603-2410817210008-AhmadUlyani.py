def hitung(n1, n2):
    if n1 != n2:
        print("Jumlah tidak sama")
        return

    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
    
    print("\nOutput")
    hasil = [baris1[i] * baris2[i] for i in range (n1)]
    print(" ".join(map(str, hasil)))

n1, n2 = map(int, input().split())
hitung(n1, n2)