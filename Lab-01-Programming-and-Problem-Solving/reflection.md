# Reflection: String Character Check Program

## 1. What the program does
This C++ program checks if a user-inputted string contains the letter 'a' in either lowercase or uppercase. It reads a full line of text, loops through each character, and prints a message depending on whether 'a'/'A' was found.

## 2. Key concepts used
- **getline()**: To read full input including spaces, not just the first word.
- **for-each loop**: `for (char ch : text)` to iterate through every character without using an index.
- **Boolean flag**: `found` variable to track if the condition was met.
- **break statement**: To exit the loop immediately once 'a' is found. This improves efficiency.
- **Conditional logic**: `if (ch == 'a' || ch == 'A')` to handle both cases.

## 3. What I learned
1. Using `break` stops unnecessary checks after we already found what we need.
2. `==` works for comparing characters and strings in C++.
3. `getline()` is better than `cin >>` when the input can have spaces.
4. A flag variable like `found` makes decision-making after a loop much cleaner.

## 4. Challenges & solutions
**Challenge**: Initially I used `cin >> text` but it only read the first word.  
**Solution**: Switched to `getline(cin, text)` to capture the entire string.

**Challenge**: I wasn’t sure how to stop the loop after finding 'a'.  
**Solution**: Learned about `break` to exit loops early.

## 5. Possible improvements
1. Convert the whole string to lowercase first, then only check for 'a'. That way we need just one condition.
2. Count how many times 'a'/'A' appears instead of just checking existence.
3. Make it a reusable function: `bool containsA(string text)` so other programs can use it.

## 6. Overall takeaway
This small program taught me how loops, flags, and early exit with `break` work together to solve search problems efficiently. It’s the basic idea behind "searching" in bigger applications.
