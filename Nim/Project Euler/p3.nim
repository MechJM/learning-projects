proc isPrime(num: int64): bool =
    for i in 2..<num:
        if num mod i == 0: return false
    return true

for i in countdown(600851475143,2):
    #echo i
    if 600851475143 mod i == 0 and isPrime(i):
        echo i
        break