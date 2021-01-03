if __name__ == '__main__':
    n = int(input())
    arr = set(map(int, input().split()))
    print(sorted(set(arr))[-2])

    