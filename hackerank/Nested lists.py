if __name__ == '__main__':
    n = int(input())
    dict = {}
    s = []
    for _ in range(n):
        name = input()
        score = float(input())
        if score in dict:
            dict[score].append(name)
        else:
            dict[score] = [name]
        if score not in s:
            s.append(score)
    
    s.sort()
    low = s[0]
    s_low = 0
    for i in range(0,len(s)):
        if(s[i]> low):
            s_low = s[i]
            break
    dict[s_low].sort()
    for i in dict[s_low]:
        print(i)
