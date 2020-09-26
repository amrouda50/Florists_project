# Florists_project
usage of primary algorithms in a project
//project details
Florists


There are K florists in a city, for each of them we know what type of flowers they sell today. We form groups of florists who sell exactly the same flowers (each of these groups should have the largest possible size).
Write a program that determines the following:
1. The total number of different flower types that can be bought.
2. The number of flower types for each florist.
3. The flower which most florists sell.
4. A florist who does not sell anything today.


The first line of the standard input contains the number of florists (1≤K≤1000), and the number of data pairs (1≤D≤2000). In the next D*2 lines, there is a data pair in every two lines: the identifier number of a florist (1≤Fi≤K), and a type of flower (a word with at most 15 letters of the English alphabet). Every florist sells at most 20 types of flowers and the total number of flowers does not exceed 1000. (Every type of flower sold by a particular florist is only given once in the input.)
Output

The standard output should contain a line with a single # character before the solution of each subtask. This # character line is followed by as many lines as needed for the output of a subtask. If you cannot solve a subtask, you should output only the line containing the # character. If the output format is not correct (less/more # characters are in the output), you will get “Output format error”, even if you have correct solutions for some subtasks.

Subtask 1: Print the number of different flowers that are sold.

Subtask 2: Print a line for each florist who sells at least one type of flower (in any order). Every line should contain a florist identifier and the count of flower types sold by that person.

Subtask 3: Print the flower sold by most florists. In case of multiple possible solutions, you must give the one that occurs first in the input.

Subtask 4 : Print the identifier of a florist who does not sell anything. If there are multiple possible answers, you can give any of them. If there is no such florist, then print -1.
