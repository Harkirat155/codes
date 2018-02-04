def iter_fibonacci(n):
    if n < 0:
        return 'procedure can only be applied to non_negative numbers'
    else:
        a,b = 0,1
        if n == 0:
            return a
        if n == 1:
            return b
        else:
            i = 2
            while i <= n:
                if i % 2 == 0:
                    a += b
                else:
                    b += a
                i += 1
            if i % 2 != 0:
                return a
            else:
                return b
