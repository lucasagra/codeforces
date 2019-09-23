s = list(input())

counter = [0 for x in range(26)]

for letter in s:
    counter[ord(letter)-97] += 1

count_odds = 0
for num in counter:
    if num%2 != 0:
        count_odds += 1

if count_odds == 0 or count_odds == 1:
    print("First")
else:
    moves = count_odds-1

    if moves%2 == 0:
        print("First")
    else:
        print("Second")
