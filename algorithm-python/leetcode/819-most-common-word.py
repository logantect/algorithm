import collections
import re
from typing import List


class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        only_words = re.sub(r'\W', ' ', paragraph).lower().split()

        counts = collections.defaultdict(int)
        for word in only_words:
            if word not in banned:
                counts[word] += 1

        return max(counts, key=counts.get)


class Solution2:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        words = [word for word in re.sub(r'\W', ' ', paragraph).lower().split() if word not in banned]
        counts = collections.Counter(words)
        return counts.most_common(1)[0][0]


solution = Solution()
print(solution.mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.", ["hit"]))
print(solution.mostCommonWord("a.", []))

solution = Solution2()
print(solution.mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.", ["hit"]))
print(solution.mostCommonWord("a.", []))
