# A sentence is made up of a group of words. Each word is a sequence of letters, ('a'-'z', 'A'-'Z'), that may contain one or more hyphens and may end in a punctuation mark: period (.), comma (,), question mark (?), or exclamation point (!). Words will be separated by one or more white space characters. Hyphens join two words into one and should be retained while the other punctuation marks should be stripped. Determine the number of words in a given sentence.

def howMany(sentence):
    words = sentence.split()
    ans=len(words)
    for i in words:
        for character in i:
            if character.isdigit():
                ans-=1
                break
    return ans

# s = 'How many eggs are in a half-dozen, 13?'
# s = 'he is a good programmer, he won 865 competitions, but sometimes he dont. What do you think? All test-cases should pass. Done-done?'
# print(howMany(s))