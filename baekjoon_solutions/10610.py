arr = list(input())
total = 0
isten = 0
wherezero = 0

for i in range(len(arr)):
    arr[i] = int(arr[i])
    total += arr[i]
    if arr[i] == 0:
        isten = 1
        wherezero = i

if total%3==0 and isten==1:
    arr[wherezero],arr[len(arr)-1]=arr[len(arr)-1],arr[wherezero]
    arr.sort()
    for i in range(len(arr)-1,-1,-1):
        print(arr[i], end='')
else:
    print(-1)
