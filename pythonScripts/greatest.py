def greatest(list_of_numbers):
    greatest = 0
    for e in list_of_numbers:
        if e > greatest:
            greatest = e
        else: continue
    return greatest
