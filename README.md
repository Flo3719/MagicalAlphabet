# MagicalAlphabet
My solution for a hackerearth challenge

I wrote the code and own the rights on it. The challenge is owned by hackerearth.com

The challenge can be found here:
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/description/

The application takes three kinds of console inputs.

The first input is an int between 1 and 100 which is the number of words to be converted.

After this the second and third input are asked for every single word.

The second input if the lenght of the words string. (1-500)

The third input is a string. (1-500)

Every input string creates an output string.

The algorithm convertes every ASCII letter in the input string to a one which has an prime numerial ASCII code.
It either prints the original character if it's ASCII code is already prime and a real letter or it finds the closest ASCII prime 
code which is a real letter. If there are two equidistant possible letters it will choose the one with the lower ASCII code.

Example input:

1
6
AFREEN

Output:

CGSCCO

