n = int(input())
first_tree = int(input())

cur_height = first_tree
steps = first_tree+1
c = 0

while c < n-1:
    next_tree = int(input())
    steps += 2 # jump and eat

    # go up
    if cur_height < next_tree:
        steps += (next_tree-cur_height)
    # go down
    elif cur_height > next_tree:
        steps += (cur_height-next_tree)

    cur_height = next_tree
    c+=1


print(steps)