def bilangan(a, b):
    hasil = []
    
    if a < b:  # Kasus a lebih kecil dari b
        start, end = a, b
        while start <= b and end >= a:
            hasil.append(f"{start} {end}")
            start += 1
            end -= 1
    else:  # Kasus a lebih besar dari b
        start, end = a, b
        while start >= b and end <= a:
            hasil.append(f"{start} {end}")
            start -= 1
            end += 1

    return " - ".join(hasil)

a, b = map(int, input().split())
print(bilangan(a, b))