
l,c=map(int,input().split())
b = input().split()
vowel = ['a','e','i','o','u']
b.sort()


result = []
def myprint(arr):
    for i in arr:
        print(i,end='')
    print()

def check(arr):
    cntv = 0
    cntc = 0
    for i in arr:
        if i in vowel:
            cntv+=1
        else:
            cntc+=1
    if cntv>0 and cntc>1:
        return 1
    else: return 0

def combination(i,num):
    if num == l and check(result):
        myprint(result)
    else:
        for j in range(i, len(b)):
            result.append(b[j])
            combination(j+1, num+1)
            result.pop()
combination(0,0)


