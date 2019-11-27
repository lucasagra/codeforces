r, c = map(int, input().split())
grid = [list(input()) for i in range(r)]
count = 0

def process(i, j):
    global grid, count

    if i-1 >= 0 and grid[i-1][j] == 'W':
        grid[i][j] = '.'
        grid[i-1][j] = '.'
        count += 1
    elif i+1 < r and grid[i+1][j] == 'W':
        grid[i][j] = '.'
        grid[i+1][j] = '.'
        count += 1
    elif j-1 >= 0 and grid[i][j-1] == 'W':
        grid[i][j] = '.'
        grid[i][j-1] = '.'
        count += 1
    elif j+1 < c and grid[i][j+1] == 'W':
        grid[i][j] = '.'
        grid[i][j+1] = '.'
        count += 1

for i in range(r):
    for j in range(c):
        if grid[i][j] == 'P':
            process(i, j)

print(count)