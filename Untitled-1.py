c = int(input())
sum = 0
for i in range(3):
    sum2 = 0
    for j in range(c):
        num = int(input())
        sum2 += num
    sum+=sum2
    print(sum2,end=' ')
print(sum)
