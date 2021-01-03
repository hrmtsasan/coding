# Complete the alternatingCharacters function below.
def alternatingCharacters(s):
    c=0
    for i in range(len(s)-1,0,-1):
        if s[i] == s[i-1]:
            c=c+1
    return c