while True:
    n = input()
    if n=='0':
        break
    m = int(len(n)/2)
    ispelin = 1;
    for i in range(0,m,1):
        if n[i]!=n[len(n)-1-i]:
            ispelin = 0
    if ispelin==1:
        print("yes")
    else:
        print("no")

