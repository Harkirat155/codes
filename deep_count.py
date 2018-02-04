#checks is an entity is an list or not and returns a boolean
def is_list(p):
	return isinstance(p,list)

#To calculate length of lists containing list in itself.
#deep_count([1,[],[4,[5,6]]])
#>>>7
#deep_count([[[[[[[[1,2,3]]]]]]]])
#>>>10
def deep_count(p):
    len1 =0
    for e in p:
        len1 += 1
        if is_list(e) is True:
            len1 = len1 + deep_count(e)
    return len1
