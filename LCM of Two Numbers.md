## 01. LCM of Two Numbers

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/lcm-of-two-numbers/1)

### Problem Description

**Task:** Given two positive integers a and b, find the Least Common Multiple (LCM) of the two numbers.Examples:Input: a = 12, b = 18Output: 36Explanation: LCM of 12 and 18 is 36Input: a = 5, b = 11Output: 55Explanation: LCM of 5 and 11 is 55

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log(min(a,b))
- **Expected Auxiliary Space Complexity:** O(log(min(a,b))

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-07 19:29:33
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int lcm(int a, int b) {

        int lcm = max(a, b);

        while(true) {
            if(lcm % a == 0 && lcm % b == 0)
                break;

                lcm++;
            }

                return lcm;
            }
        };
```

*Generated on: 7/11/2026, 7:30:04 pm*