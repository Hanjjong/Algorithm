array = list((map(int,input().split(","))))

sum = 0
for i in range(len(array)):
    sum += array[i]
print(sum)