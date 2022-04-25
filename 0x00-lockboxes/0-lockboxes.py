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
    create a key chain to store keys retrieved from opened boxes
    """
    keyChain = [0, ]

    """
    got through key chain, open box if it is possible and
    append new keys if not exists
    and valids in the boxes range
    """
    for key in keyChain:
        openBox[key] = True
        for keys in boxes[key]:
            if keys not in keyChain and keys < len(boxes):
                keyChain.append(keys)

    """
    if any box is False (not open), return False
    otherwise return True
    """

    if False in openBox:
        return False
    else:
        return True
