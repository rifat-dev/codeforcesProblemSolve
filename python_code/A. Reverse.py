from tkinter import N


def main():
    for _ in range(int(input())):
        n = int(input())
        li = [int(i) for i in input().split()]

        for i in range(n):
            mv = 0
            if i+1 != li[i]:
                mv = li.index(i+1)
                # li = li[i:mv+1][::-1]
                li = reversed(li[i:mv+1])
                print(li)
                break


if __name__ == "__main__":
    main()
