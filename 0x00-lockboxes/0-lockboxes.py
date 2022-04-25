#!/usr/bin/python3
""" lockboxes """


def canUnlockAll(boxes):
    """ can unlock all boxes function """
    """
    create array and populate with Booleans setted to false
    to determine wich boxes are open
    """
    openBox = [False for i in range(len(boxes))]

    """
    if any box is False (not open), return False
    otherwise return True
    """

    if False in openBox:
        return False
        return True
