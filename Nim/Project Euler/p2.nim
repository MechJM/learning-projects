var
    num1 = 1
    num2 = 2
    sum = 0
while num2 <= 4000000:
    if num2 mod 2 == 0:
        inc(sum,num2)
    let temp = num2
    num2 = num2 + num1
    num1 = temp
echo sum 