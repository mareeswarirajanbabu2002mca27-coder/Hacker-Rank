from itertools import groupby
s = input()
results = [(len(list(group)), int(char)) for char, group in groupby(s)]
print(*(results))
