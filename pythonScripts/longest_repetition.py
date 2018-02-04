# Question 8: Longest Repetition

# Define a procedure, longest_repetition, that takes as input a 
# list, and returns the element in the list that has the most 
# consecutive repetitions. If there are multiple elements that 
# have the same number of longest repetitions, the result should 
# be the one that appears first. If the input list is empty, 
# it should return None.

def longest_repetition(lis):
    #best_ele,length,current_ele,current_len
    b_ele = None
    le = 0
    c_ele = None
    c_le = 0
    for e in lis:
        if c_ele != e:
            c_ele = e
            c_le = 1
        else:
            c_le += 1
        if c_le > le:
            b_ele = c_ele
            le = c_le
    return b_ele

#For example,

print longest_repetition([1, 2, 2, 3, 3, 3, 2, 2, 1])
# 3

print longest_repetition(['a', 'b', 'b', 'b', 'c', 'd', 'd', 'd'])
# b

print longest_repetition([1,2,3,4,5])
# 1

print longest_repetition([])
# None

