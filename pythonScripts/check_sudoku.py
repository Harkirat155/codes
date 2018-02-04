def Check_sudoku(p):
    #makingComparingList
    complist = []
    a = 0
    while a < len(p):
        complist.append(a + 1)
        a += 1
    #arranging&checkingColumns
    d = 0
    while d < len(p):
        check = []
        e = 0
        while e < len(p):
            check.append(p[e][d])
            e += 1
        xxe = []
        f = 0
        while f < len(p):
            xxe.append(check.pop(check.index(min(check))))
            f += 1
        check = xxe
        if check != complist:
            return False
        d += 1
    #arranging&CheckingRow
    for b in p:
        exe = []
        i = 0
        while i < len(b):
            exe.append(b.pop(b.index(min(b))))
        b = exe
        if b != complist:
            return False
    return True #ifEverythingIsFine
