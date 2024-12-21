def kaliMatriks(n, A, B):
    C = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                C[i][j] += A[i][k] * B[k][j]
    return C

def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

n = int(input())

print("Matriks A")
A = [list(map(int, input().split())) for _ in range(n)]

print("Matriks B")
B = [list(map(int, input().split())) for _ in range(n)]

C = kaliMatriks(n, A, B)

print("\nMatriks AXB:")
print_matrix(C)