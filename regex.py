import re

def change_operators(text):
    text = re.sub(r"(?<= )(&&)(?= )", "and", text)
    text = re.sub(r"(?<= )(\|\|)(?= )", "or", text)
    return text
n = int(input())
for _ in range(n):
    line = input()
    print(change_operators(change_operators(line)))
