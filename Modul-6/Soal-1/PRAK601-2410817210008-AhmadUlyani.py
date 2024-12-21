baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))

matriks = []
index = 0
for i in range (baris):
    matriks.append(elemen[index: index + kolom])
    index += kolom

print("\nOutput:")
for baris in matriks:
    print(" ".join(map(str, baris)))