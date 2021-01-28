# cook your dish here
t=int(input())
def fact(n):
    if(n==1):
        return 1
    return n*fact(n-1)
for i in range(t):
    n=int(input())
    print(fact(n))