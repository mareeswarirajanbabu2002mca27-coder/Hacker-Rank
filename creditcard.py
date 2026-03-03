import re
n = int(input())
structure_re = r"^[456]\d{3}(-?\d{4}){3}$"
consecutive_re = r"(\d)\1{3,}"
for _ in range(n):
    card = input().strip()
    if re.match(structure_re, card):
        clean_card = card.replace("-", "")
        if not re.search(consecutive_re, clean_card):
            print("Valid")
        else:
            print("Invalid")
    else:
        print("Invalid")
