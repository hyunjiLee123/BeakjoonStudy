n = int(input())
x = []
y = []
for i in range(n):
    xx, yy = map(int, input().split())
    x.append(xx)
    y.append(yy)

print((max(x)-min(x))*(max(y)-min(y)))