word = input()
count_lower, count_upper = 0, 0
n = len(word)

for letter in word:
    if count_lower > n // 2 or count_upper > n // 2:
        break
    if letter.islower():
        count_lower += 1
    else:
        count_upper += 1
if count_lower > n // 2:
    print(word.lower())
elif count_upper > n // 2:
    print(word.upper())
elif count_lower >= count_upper:
    print(word.lower())
else:
    print(word.upper())