# -*- coding: utf-8 -*-
"""
Created on Tue Nov 28 09:05:10 2017

@author: Harkirat155
"""
t = [[1,2,3],
     [3,1,2],
     [2,3,1]]

def Check_sudoku(p):
    #makingComparingList
    complist = []
    a = 0
    while a < len(p):
        complist.append(a + 1)
        a += 1
    #arranging&CheckingRow
    for b in p:
        exe = []
        i = 0
        while i < len(b):
            exe.append(b.pop(b.index(min(b))))
        b = exe
        if b != complist:
            return False
    #arranging&checkingColumns
    d = 0
    while d < len(p):
        check = []
        e = 0
        while e < len(p):
            check.append(p[d][e])
            e += 1
        xxe = []
        f = 0
        while f < len(check):
            xxe.append(check.pop(check.index(min(check))))
            f += 1
        check = xxe
        if check != complist:
            return False
        d += 1
    return True #ifEverythingIsFine
