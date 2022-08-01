from typing import List


class Solution:
    def reverseString(self, s: List[str]) -> None:
        left, right = 0, len(s) - 1
        while left < right:
            s[left], s[right] = s[right], s[left]
            left += 1
            right -= 1

    # 파이썬 다운 방식
    def reverseString2(self, s: List[str]) -> None:
        s.reverse()


solution = Solution()
s1 = ["h", "e", "l", "l", "o"]
s2 = ["H", "a", "n", "n", "a", "h"]
solution.reverseString2(s1)
solution.reverseString2(s2)
print(s1)
print(s2)
