# Crypto Analysis: Frequency Analysis
#
# To analyze encrypted messages, to find out information about the possible 
# algorithm or even language of the clear text message, one could perform 
# frequency analysis. This process could be described as simply counting 
# the number of times a certain symbol occurs in the given text. 
# For example:
# For the text "test" the frequency of 'e' is 1, 's' is 1 and 't' is 2.
#
# The input to the function will be an encrypted body of text that only contains 
# the lowercase letters a-z. 
# As output you should return a list of the normalized frequency 
# for each of the letters a-z. 
# The normalized frequency is simply the number of occurrences, i, 
# divided by the total number of characters in the message, n.

def freq_analysis(mes):
    l = len(mes)
    wel = [['a',0],['b',0],['c',0],['d',0],['e',0],['f',0],['g',0],['h',0],
           ['i',0],['j',0],['k',0],['l',0],['m',0],['n',0],['o',0],['p',0],
           ['q',0],['r',0],['s',0],['t',0],['u',0],['v',0],['w',0],['x',0],['y',0],['z',0]]
    for e in mes:
        i = 0
        while i < len(wel):
            if wel[i][0] == e:
                wel[i][1] += 1.0
                break
            i += 1
    frl = []
    j = 0
    while j < 26:
        frl.append(wel[j][1]/l)
        j += 1
    return frl



#Tests

print freq_analysis("abcd")
#>>> [0.25, 0.25, 0.25, 0.25, 0.0, ..., 0.0]

print freq_analysis("adca")
#>>> [0.5, 0.0, 0.25, 0.25, 0.0, ..., 0.0]

print freq_analysis('bewarethebunnies')
#>>> [0.0625, 0.125, 0.0, 0.0, ..., 0.0]
