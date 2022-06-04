def closestNumbers(numbers):
# Write your code here 
    numbers.sort(); 
    minDiff=numbers [1]-numbers[0]
    for i in range(2, len(numbers)):
        minDiff = min(minDiff, abs(numbers[i-1]-numbers[i]))
    
    # for i in range(0, len (numbers)):
    #     for j in range (i+1, len (numbers)):
    #         minDiff=min (minDiff, abs(i-j))
    
    # print(minDiff)

    for i in range(1, len(numbers)):
        if numbers[i]-numbers[i-1] == minDiff:
            print(numbers[i-1], numbers[i])

    # ans=[[numbers[i], numbers [j]] for i in range(0, len (numbers)) for j in range(i+1, len (numbers)) if abs (numbers[i] -numbers [j])==minDiff]
    # print(sorted (ans))
    # for i in sorted (ans):
    #     if i[1]<i[0]:
    #         i[0], i[1] = i[1], i[0]
    #     print (i[0], i[1])
