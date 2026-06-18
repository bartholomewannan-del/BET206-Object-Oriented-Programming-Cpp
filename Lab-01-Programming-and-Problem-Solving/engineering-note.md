# Engineering Note: Stretch Activity - String Character Search

## 1. Problem Statement
Extend the base program to not just check for existence of 'a'/'A', but also:
1. Count total occurrences 
2. Record all positions/indexes where 'a'/'A' appears
3. Handle both uppercase and lowercase

## 2. Design Decisions
| Component | Choice | Reason |
| --- | --- | --- |
| Loop type | `for (int i = 0; i < text.length(); i++)` | Need index `i` to record positions. for-each loop can't give index easily |
| Data structure | `vector<int> positions` | Dynamic array to store unknown number of positions. Grows as needed |
| Case check | `ch == 'a' || ch == 'A'` | Simple and fast for just 2 cases. Alternative: `tolower(ch) == 'a'` |
| Output format | 0-based indexing | Matches C++ string indexing. Less confusing for programmers |

## 3. Algorithm Logic
1. Read full string with `getline()`
2. Initialize empty vector to store positions
3. Loop through string with index `i` from 0 to length-1
4. If `text[i]` is 'a' or 'A', push `i` into vector
5. After loop: if vector is empty → "No". Else → print count + all positions

## 4. Complexity Analysis
- **Time Complexity**: O(n) where n = length of string. We scan each character once.
- **Space Complexity**: O(k) where k = number of 'a'/'A' found. Worst case O(n) if string is all 'a's.

## 5. Edge Cases Tested
1. Empty string `""` → Output: "No"
2. No 'a' → `Hello` → Output: "No" 
3. All 'a' → `aaaa` → Output: Yes, count 4, positions 0 1 2 3
4. Mixed case → `Apple and Avocado` → Finds both A and a
5. Spaces + punctuation → `a, a. a!` → Still detects correctly

## 6. Trade-offs
**Using vector vs fixed array**: Vector is safer because we don’t know max count beforehand. Fixed array could overflow.
**break vs full scan**: Removed `break` because stretch goal needs ALL occurrences, not just first one. Slightly slower but required.

## 7. Lessons for Real Engineering
This is basically how "Find All" works in text editors/IDEs. Same logic used in:
- Search functions in VS Code
- Word count tools  
- Data validation - e.g. finding all invalid characters in input

Small program, but introduces vectors + indexing + complexity thinking.

---
**Author**: [Your Name]  
**Date**: 2026-04-18  
**Course**: BET 206 - Programming Fundamentals
