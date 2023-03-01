import sys
input = sys.stdin.readline


def main():
    n, q = map(int, input().split())
    arr = list(map(int, input().split()))
    p_ql = 0
    dic = {}
    for i in range(n):
        dic[i+1] = arr[i]
    tot = sum(arr)
    for i in range(q):
        ql = list(map(int, input().split()))
        if ql[0] == 2:
            dic.clear()
            tot = ql[1]*n
            print(tot)
            p_ql = ql[1]
        else:
            if ql[1] in dic:
                tot += ql[2]-dic[ql[1]]
                dic[ql[1]] = ql[2]
            else:
                tot += ql[2] - p_ql
                dic[ql[1]] = ql[2]
            print(tot)


if __name__ == "__main__":
    main()
