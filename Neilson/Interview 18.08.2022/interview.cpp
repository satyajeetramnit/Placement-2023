// Q1. Introduce yourself



// Q2. Explain and solve the questions of the coding round.

// Approach Q1
// 1. Create a hashmap with key as element and value as count of that element.
// 2. Check if all the elements in the hashmap have count 2.
// 3. If yes, return true.
// 4. Else return false.

// Approach Q2
// 1. Create a vector dif with all the possible values of the dice that can be subtracted from the sum of the dice in A.
// 2. Sort the vector in descending order.
// 3. Iterate over the vector and subtract the values from the difference.
// 4. If the difference becomes zero or less, return the count.
// 5. Else return -1.

// Approach Q3
// 1. We can use two pointers to find the fair index.
// 2. At first, we will find the fair index in the left part of the array.
// 3. Then, we will find the fair index in the right part of the array.
// 4. If the sum of the left part and the right part is equal, then the index is fair.
// 5. then we will increment the fair index.
// 6. We will return the fair index.



// Q3. Diffence between inner join and outer join
// 1. Inner join is used to find the common elements in two tables.
// 2. Outer join is used to find the common elements in two tables and also the elements that are not common in two tables.

// i.e. The biggest difference between an INNER JOIN and an OUTER JOIN is that the inner join will keep only the information 
// from both tables that's related to each other (in the resulting table). An Outer Join, on the other hand, 
// will also keep information that is not related to the other table in the resulting table.





// Q4. what is foreign key, primary key and composite key
// 1. Foreign key is a reference to the primary key of another table.
// 2. Primary key is the primary key of the table.
// 3. Composite key is a combination of primary keys of two or more tables.



// Q5. In binary search tree what are the diferent traversal methods
// Traversing a tree means visiting and outputting the value of each node in a particular order.
// The major importance of tree traversal is that there are multiple ways of carrying out traversal operations 
// unlike linear data structures like arrays, bitmaps, matrices where traversal is done in a linear order.

// Each of these methods of traversing a tree have a particular order they follow:

// For Inorder, you traverse from the left subtree to the root then to the right subtree.
// For Preorder, you traverse from the root to the left subtree then to the right subtree.
// For Post order, you traverse from the left subtree to the right subtree then to the root.

// Here is another way of representing the information above:
// Inorder => Left, Root, Right.
// Preorder => Root, Left, Right.
// Post order => Left, Right, Root.