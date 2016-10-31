#Recursion
http://stackoverflow.com/questions/9304469/how-to-perform-a-recursive-search/9314805#9314805

Result M(Problem prob){

if (problem can be solved easily)

return easy solution;

// The problem cannot be solved easily.

Problem smaller1 = reduce problem to smaller problem

Result result1 = M(smaller1);

Problem smaller2 = reduce problem to smaller problem

Result result2 = M(smaller2);

...

Result finalResult = combine all results of smaller problem to solve large problem

return finalResult;

}

##104
If it is the last node, assign it to 0. If it is not, find the depth and add 1 one by one(return max(left\_depth, right\_depth)+1). 