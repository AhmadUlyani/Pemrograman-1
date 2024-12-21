def hitung(nilai1, nilai2):
    return abs(nilai1 - nilai2)

def main():
    x1, y1, x2, y2 = map(int, input().split())
    hasil = hitung(x1, x2) + hitung(y1, y2)
    print(f"{hasil}")

if __name__ == "__main__":
    main()