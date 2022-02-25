def main():
    for _ in range(int(input())):
        n = int(input())
        if (n % 7) == 0:
            print(n)
        else:
            ans = -1
            for j in range(10):
                if (n - n % 10 + j) % 7 == 0:
                    ans = n - n % 10 + j
            print(ans)


if __name__ == "__main__":
    main()
