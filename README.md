# DSA-Practice
# 🚀 DSA Practice Repository    This repository contains my solutions to Data Structures &amp; Algorithms problems from **Striver’s TUF Plus course** and the **NeetCode 150 / LeetCode set**.   I’m solving problems topic-wise and maintaining structured folders for easy navigation.    --- 

---

## 📝 Solution Format  

Each file contains:  
1. **Problem Title & Link** (LeetCode / TUF sheet)  
2. **Approach** (brief explanation of logic / data structure used)  
3. **Complexity Analysis** (Time & Space)  
4. **Code Implementation**  

**Example:**  

```python
# Problem: Two Sum (LeetCode #1)
# Link: https://leetcode.com/problems/two-sum/
# Approach: Hashmap to store complements
# Time: O(n), Space: O(n)

def twoSum(nums, target):
    seen = {}
    for i, val in enumerate(nums):
        if target - val in seen:
            return [seen[target-val], i]
        seen[val] = i

