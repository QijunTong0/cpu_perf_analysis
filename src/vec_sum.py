N=10**6
a=[[i+300 for i in range(3)] for _ in range(N)]

sum=[0]*N
for i in range(N):
    sum[i]+=a[i][0]+a[i][1]+a[i][2]