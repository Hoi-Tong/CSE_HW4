4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. We shall trim!
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

This works because I used a while loop to keep looping the string array until it reaches the 
last character that is not a space and give me the index of it. If there is only space 
characters, then I will get index -1. Then, I used a if else statement that if the index I 
got is -1, then I will make the first character in the array into null. Else, I will make the 
array index number that I got (that is not -1) and add +1 into the index number and make it 
into null, so it will cut off all white space after the index.


2. Checking if a string is a palindrome.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

I used the two pointer method to check if the string is palindrome or not. I used an int variable 
right as a right pointer pointing at the right index where it is a character before NULL. Then, 
I have my left pointer pointing at index 0. Then, I have two while loop that check if 
left < right and see if the character is alphanumeric using the isalnum() function. If the 
character is not alphanumeric, then it will keep looping to either increase the left pointer 
index or decrease the right pointer index until the condition is true or left >= right. Then, 
there is a if statement to check if the lowercase of the character is equal to each other or 
not using the tolower() function. If the character don't equal to each other, then it will 
return false. The whole function will keep looping until the left pointer index is no longer 
less than the right pointer index. Then, it will return true.



3. Filtering and sorting zoo records
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

This works because I used the strchr for the has_b() function. I also did 3 nested if statements 
for the should_keep() function to compare all the conditions and variables. For the 
compare_animals() function, I used the species, age, and name of the struct of the animal 
to compare the conditions. I did trial and error to see which operator I need to use (for 
example, I wasn't sure should I use -> or . the get the variables name, age, species in the 
Animal struct). Then, I first write down the sudo code for bubble sort because I wasn't 
familiar with using it. Then, I started to write down the code and plug in the variables. I 
had two nested for loop, a if statement, and two varibales (one to help me swap the values, 
another help me see when to stop the outter for loop).

