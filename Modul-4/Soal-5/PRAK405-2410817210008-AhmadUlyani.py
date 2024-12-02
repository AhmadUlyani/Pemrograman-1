n, k = map(int, input().split())

total = 0

for i in range(1, n + 1):
    line_sum = sum(j * k for j in range(i, 0, -1))
    total += line_sum
    terms = ' + '.join(f'({j} * {k})' for j in range(i, 0, -1))
    print(f"{terms} = {line_sum}")

print(total)