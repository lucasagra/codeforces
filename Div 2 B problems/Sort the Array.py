size = int(input())
arr = list(map(int, input().split()))


bg = arr[0]
bg_pos = 0
end = arr[0]
end_pos = 0

flag = False

for x in range(size-1):
    if arr[x] > arr[x+1] and flag == False:
        bg = arr[x]
        bg_pos = x
        end = arr[x+1]
        end_pos = x+1
        flag = True

    elif arr[x] > arr[x+1] and flag == True:
        end = arr[x+1]
        end_pos = x+1

    elif arr[x] < arr[x+1] and flag == True:
        end = arr[x]
        end_pos = x
        break

def reverse(arr, bg_pos, end_pos):
    aux = arr[bg_pos:end_pos+1]
    aux.reverse()
    new_arr = []
    new_arr.extend(arr[:bg_pos])
    new_arr.extend(aux)
    new_arr.extend(arr[end_pos+1:])

    return new_arr


def checkorder(arr):

    for x in range(size - 1):
        if arr[x] > arr[x + 1]:
            return False

    return True


arr = reverse(arr, bg_pos, end_pos)

if(checkorder(arr)):
    print("yes")
    print(bg_pos+1, end_pos+1)
else:
    print("no")
