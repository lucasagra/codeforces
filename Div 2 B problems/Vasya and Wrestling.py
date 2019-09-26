n = int(input())
import queue as queue

points1 = 0
points2 = 0
lexical = True
lexical_winning = -1
q1 = queue.Queue()
q2 = queue.Queue()
winner = -1
last = -1

for i in range(n):
    num = int(input())
    last = num

    if num > 0:
        points1 += num

        if lexical:
            if q1.qsize() > 0:
                dequeued = q1.get()

                if num > dequeued:
                    lexical = False
                    lexical_winning = 1
                elif num < dequeued:
                    lexical = False
                    lexical_winning = 2
            else:
                q2.put(num)

    else:
        num = abs(num)
        points2 += num

        if lexical:
            if q2.qsize() > 0:
                dequeued = q2.get()

                if num > dequeued:
                    lexical = False
                    lexical_winning = 2
                elif num < dequeued:
                    lexical = False
                    lexical_winning = 1
            else:
                q1.put(num)


if points1 > points2:
    winner = 1
elif points2 > points1:
    winner = 2
elif lexical:
    if q1.qsize() < q2.qsize():
        winner = 1
    elif q2.qsize() < q1.qsize():
        winner = 2
    else:
        if last > 0:
            winner = 1
        else:
            winner = 2
else:
    winner = lexical_winning

if winner == 1:
    print("first")
else:
    print("second")