1047. Remove All Adjacent Duplicates In String
    
 Intuition

The problem requires repeatedly removing adjacent duplicate characters until no duplicates remain. A stack is well suited for this because it allows easy comparison with the most recently processed character. If the current character matches the top of the stack, both are removed; otherwise, the character is added to the stack.

 Approach
 
Create an empty stack.

Traverse the string character by character.

If the stack is not empty and the top character matches the current character, remove the top element.

Otherwise, push the current character onto the stack.

After processing all characters, construct the final string from the remaining stack elements.

Reverse the constructed string since stack elements are retrieved in reverse order.

Return the final string.

Time Complexity

O(n), where n is the length of the string.

Space Complexity

O(n), because the stack may store all characters.
