def main():
    for _ in range(int(input())):
        s = input()
        zero = 0
        one = 0
        for c in s:
            if c == '1':
                one = one + 1
            else:
                zero = zero + 1
        if zero == one:
            print(one-1)
        elif one > zero:
            print(zero)
        else:
            print(one)

if __name__ == "__main__":
    main()
