n, kelipatan = map(int, input().split())

total = 0

for i in range(1, n + 1):
    jumlah = 0

    for j in range(i, 0, -1):
        if j != i:
            print(" + ", end="")

        print(f"({j} * {kelipatan})", end="")
        jumlah = jumlah + (j * kelipatan)

    print(" =", jumlah)
    total = total + jumlah

print(total)