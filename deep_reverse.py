# Question 9: Deep Reverse
# Define a procedure, deep_reverse, that takes as input a list, 
# and returns a new list that is the deep reverse of the input list.  
# This means it reverses all the elements in the list, and if any 
# of those elements are lists themselves, reverses all the elements 
# in the inner list, all the way down. 

# Note: The procedure must not change the input list.

# The procedure is_list below is from Homework 6. It returns True if 
# p is a list and False if it is not.

def is_list(p):
    return isinstance(p, list)

#deep_reverse1 and deep_reverse2 do the same thing

def deep_reverse1(lis):
    rev = []
    for e in lis:
        if is_list(e) is False:
            rev.insert(0, e)
        else:
            rev.insert(0, deep_reverse(e))
    return rev

def deep_reverse2(p):
    if is_list(p):
        result = []
        for i in range( len(p) - 1, -1, -1):
            result.append(deep_reverse(p(i)))
        return result
    else:
        return p

#For example,

#p = [1, [2, 3, [4, [5, 6]]]]
#print deep_reverse(p)
#>>> [[[[6, 5], 4], 3, 2], 1]
#print p
#>>> [1, [2, 3, [4, [5, 6]]]]

#q =  [1, [2,3], 4, [5,6]]
#print deep_reverse(q)
#>>> [ [6,5], 4, [3, 2], 1]
#print q
#>>> [1, [2,3], 4, [5,6]]
