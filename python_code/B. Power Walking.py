def main():
    for _ in range(int(input())):
        n = int(input())
        s = set({})
        s = set(map(int, input().split()))
        dt = len(s)

        for i in range(1, n+1):
            print(max(dt, i), end=' ')


if __name__ == "__main__":
    main()
