for _ in range(int(input())):
    li = []
    x = False
    y = False
    n, m, r, c = map(int, input().split())
    for i in range(n):
        li.append(list(input()))
        if 'B' in li[i]:
            x = True
        if 'B' in li[i][c - 1]:
            y = True

    if not x:
        print(-1)
    elif li[r - 1][c - 1] == 'B':
        print(0)
    elif 'B' in li[r - 1] or not y:
        print(1)
    else:
        print(2)
