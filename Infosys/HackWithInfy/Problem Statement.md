# Problem Statement
## Q1.
Given an Integer array Arr of length N representing the square of diameters of N circles Arr[i]=d[i]^2. Find the number of good circles.

The circle is considered good if there is a right-angle triangle that can be put in it and the following holds:

- The diameter of the circle is the hypotenuse.
- The base and the height of the triangle are integers

## Input Format :

The first line contains an integer, N denoting the number of elements in Arr.<br>
Each line i of the N subsequent lines (where 0 <= i < N) contains an integer describing Arri.

## Constraints :

1<=N<=1000<br>
1<=Arr[i]<=10^8