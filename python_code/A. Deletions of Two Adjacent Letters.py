def main():
    for _ in range(int(input())):
        s = input()
        c = input()
        length = len(s)
        global flag
        flag = False
        for i in range(length):
            if s[i] == c and (i % 2 == 0) and (length-1-i) % 2 == 0:
                flag = True
                break
        print("YES" if flag else "NO")


if __name__ == "__main__":
    main()
