
#Red-Black Tree
http://blog.csdn.net/v_JULY_v/article/details/6124989

https://en.wikipedia.org/wiki/Red–black_tree

##properties
1. A node is either red or black.
2. The root is black.
3. All leaves (NIL) are black.
4. If a node is red, then both its children are black.
5. Every path from a given node to any of its descendant NIL nodes contains the same number of black nodes.

##insert
1. N is the root node.
2. N's parent (P) is black.
3. N's parent (P) and uncle (U) are red.
4. N is added to right of left child of grandparent, or N is added to left of right child of grandparent (P is red and U is black).
5. N is added to left of left child of grandparent, or N is added to right of right child of grandparent (P is red and U is black)

##removal