def MaxBilangan(i, j, k, l):
    if i > j and i > k and i > l:
        return(i)
    elif j > i and j > k and j > l:
        return(j)
    elif k > i and k > j and k > l:
        return(k)
    elif l > i and l > j and l > k:
        return(l)
    
a, b, c, d = map(int, input().split())
hasil = MaxBilangan(a, b, c, d)
print("%d" % (hasil))