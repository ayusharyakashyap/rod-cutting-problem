# rod-cutting-problem

Problem Statement:

Given a rod of length ’n’ and lengths ’a’, ’b’, and ’c’ of pieces that can be cut from it, the goal is to maximize the number of pieces obtained after cutting.
We can solve this problem using Dynamic Programming. Subproblem OPT[i]:
The algorithm defines a subproblem OPT[i].
OPT[i]=maximum number of pieces that can be obtained from a rod of length ’i’.
OPT[i-a]+1 = Maximum number of pieces obtained if piece of length ’a’ is cut from the rod.
OPT[i-b]+1 = Maximum number of pieces obtained if piece of length ’b’ is cut from the rod.
OPT[i-c]+1 = Maximum number of pieces obtained if piece of length ’c’ is cut from the rod.

Recurrence Relation:

OPT[i]=max(OPT[i],OPT[i-a]+1,OPT[i-b]+1,OPT[i-c]+1)
For each rod length ’i’, calculate OPT[i] by considering all possible cuts of lengths ’a’, ’b’, and ’c’, and choosing the one that maximizes the number of pieces obtained.
Once all rod lengths are considered, we return OPT[n].
OPT[n] = Maximum number of pieces obtained from a rod of length ’n’. And this is the required solution.
The algorithm utilizes dynamic programming to efficiently solve this problem, maximizing the number of pieces obtained by iteratively calculating the optimal solution for each rod length based on smaller subproblems.

Time Complexity:

The time complexity of the algorithm is O(n).
Where ’n’ is the length of the rod. This is because we iterate through rod lengths from 1 to ’n’ and calculate the solution for each length once.

Space Complexity:

The space complexity is O(n).
This is because we use an array to store the solutions for each rod length.
