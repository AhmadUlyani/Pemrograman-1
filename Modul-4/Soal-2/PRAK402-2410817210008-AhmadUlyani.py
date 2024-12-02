def hitung_ganjil_genap(n):
    ganjil = [i for i in range(1, n + 1) if i % 2 != 0]
    genap = [i for i in range(n, 1, -1) if i % 2 == 0]

    print(" ".join(map(str, ganjil)))
    print(" ".join(map(str, genap)))

n = int(input())
hitung_ganjil_genap(n)