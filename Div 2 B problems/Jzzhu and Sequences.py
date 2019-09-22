f1, f2 = map(int, input().split())
n = int(input())

resp = []

fn1 = f1
fn2 = f2
fn = fn2 - fn1
resp.append(fn%1000000007)

aux = 0
while aux < 5:
    fn1 = fn2
    fn2 = fn
    fn = fn2 - fn1
    resp.append(fn%1000000007)
    aux += 1

n -= 3
print(resp[n%6])
