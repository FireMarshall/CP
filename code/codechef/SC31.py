from functools import reduce
from operator import xor

def solve():
    return bin(
        reduce(
            xor, 
            map(
                lambda _: int(input(), base=2), 
                range(int(input()))
            )
        )
    )[2:].count('1')


for _ in range(int(input())):
   print(solve())
