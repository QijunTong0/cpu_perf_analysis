a=[[1 for _ in range(3000)] for _ in range(3000)]
sum=0
for i in range(3000):
    for j in range(3000):
        sum+=a[i][j]