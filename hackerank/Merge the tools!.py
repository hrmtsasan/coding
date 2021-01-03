def merge_the_tools(string, k):
    n = len(string)
    l=[]
    m=0
    for i in range(n//k):
        l.append(string[m:m+k])
        m= m+k

    for i in l:
        l = list(i)
        f = []
        f = list(dict.fromkeys(l).keys())
        new=""
        for e in f:
            new = new+e
        print(new)

