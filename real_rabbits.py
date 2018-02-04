def rabbits(n):
    if n <= 0:
        return 'the procedure works only for natural numbers'
    if n == 1:
        return 1
    elif n == 2:
        return 1
    elif n >= 3 and n <= 5:
        return rabbits(n - 1) + rabbits(n - 2)
    else:
        return rabbits(n - 1) + rabbits(n - 2) - rabbits(n - 5)
