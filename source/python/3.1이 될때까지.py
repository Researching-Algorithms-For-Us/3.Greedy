def fun():
    N = 25
    K = 3
    
    count = 0

    while True:
        if N%K == 0:
            N = N//K
        else:
            N = N - 1

        count += 1
        if N == 1:
            break
    
    out = count
    return out