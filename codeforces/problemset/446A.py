n=input();a=map(int,raw_input().split());l,r,s=[1]*n,[1]*n,1;f=max
for i in range(1,n):
    if a[i-1]<a[i]:l[i]+=l[i-1]
for i in range(n-2,0,-1):
    if a[i+1]>a[i]:r[i]+=r[i+1]
s=f(l)
if s<n:s+=1
for i in range(1,n-1):
    if a[i-1]+1<a[i+1]:s=f(s,l[i-1]+r[i+1]+1)
print s
