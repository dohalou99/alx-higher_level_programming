#!/usr/bin/python3
"""a script for finding peak in list of ints, interview prep
"""
def find_peak(list_of_integers):
    """ have a function that returns the peak of the list
    """
    if (len(list_of_integers) == 0):
        return None

    else:
        peak = list_of_integers[0]
        for j in range(len(list_of_integers)):
            if list_of_integers[j] > peak:
                peak = list_of_integers[j]
        return peak

