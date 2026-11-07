a, b = map(int, input().split())

if a < b:
    for i in range(a, b + 1):
        if i != a:
            print("-", end=" ")
        print(i, a + b - i, end=" ")

else:
    for i in range(a, b - 1, -1):
        if i != a:
            print("-", end=" ")
        print(i, a + b - i, end=" ")
