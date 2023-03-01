hashMap = {'I': 1,
               'IV': 4,
               "IX": 9,
               'V': 5,
               'X': 1,
               'XL': 40,
               'XC': 90,
               'L': 50,
               'C': 100,
               'CD': 400,
               'CM': 900,
               'D': 500,
               'M': 1000
               }
    ans = 0
    i = 0
    while i < n:
        temp = s[i]
        if i < n-1 and temp+s[i+1] in hashMap:
            ans += hashMap[temp+s[i+1]]
            i += 2
            continue
        ans += hashMap[temp]
        i += 1