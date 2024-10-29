#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Aug 26 15:31:48 2024

@author: sameer
"""

#Program for converting a number entered as word into integer
#Another option is to use word2number library

def words_to_number(words):
    num_words = {
        "zero": 0, "one": 1, "two": 2, "three": 3, "four": 4,
        "five": 5, "six": 6, "seven": 7, "eight": 8, "nine": 9,
        "ten": 10, "eleven": 11, "twelve": 12, "thirteen": 13,
        "fourteen": 14, "fifteen": 15, "sixteen": 16, "seventeen": 17,
        "eighteen": 18, "nineteen": 19, "twenty": 20, "thirty": 30,
        "forty": 40, "fifty": 50, "sixty": 60, "seventy": 70,
        "eighty": 80, "ninety": 90, "hundred": 100, "thousand": 1000
    }

    words = words.lower().split()
    total = 0
    current = 0

    for word in words:
        if word in num_words:
            scale = num_words[word]
            if scale == 100:
                current *= scale
            elif scale == 1000:
                current *= scale
                total += current
                current = 0
            else:
                current += scale
        else:
            raise ValueError(f"Word '{word}' is not a valid number")

    return total + current

# Example usage
while words_to_number.words:
    user = input("guess a number: ")

    print(words_to_number(user))