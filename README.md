## Merge sort

**Merge sort** is a popular sorting algorithm, used to sort big datasets. It is rather easy to understand.  
It is a stable sorting algorithm, with *time complexity* of `O(Nlog(N))`. It does also take some extra space  
to split the array up to 2 subarrays then sort and merge them back together.

Here is a chart below to explain the algorithm:

```mermaid
flowchart TD
     id1[1 8 3 9 4 5 7] --> id2[1 8 3 9] --> id4[1 8]

     id4[1 8] --> id7[1]
     id4[1 8] --> id8[8]

     id7[1] --> id11[1 8]
     id8[8] --> id11[1 8]

     id2[1 8 3 9] --> id5[3 9]

     id5[3 9] --> id9[3]
     id5[3 9] --> id10[9]

     id9[3] --> id12[3 9]
     id10[9] --> id12[3 9]

     id11[1 8] --> id18[1 3 8 9]
     id12[3 9] ---> id18[1 3 8 9]

     id1[1 8 3 9 4 5 7] --> id3[4 5 7]

     id3[4 5 7] --> id13[4]
     id3[4 5 7] --> id14[5]
     id3[4 5 7] --> id15[7]

     id14[5] --> id16[5 7]
     id15[7] --> id16[5 7]

     id13[4] --> id17[4 5 7]
     id16[5 7] --> id17[4 5 7]

     id18[1 3 8 9] --> id20[1 3 4 5 7 8 9]
     id17[4 5 7] --> id20[1 3 4 5 7 8 9]
```

### Some *advantages* of **merge sort** are:

#### 1. It is a stable sorting algorithm:
Meaning it makes sure the order of the same elements remain the same after sorting.

#### 2. Guranteed worst case time complexity:
**Merge sort** has worst case *time complexity* of `O(Nlog(N))`, unlike **quick sort** which has worst case   
*time complexity* of `O(N^2)`, which can lead to poor performance in large datasets.

### Some *disadvantages* of **merge sort** are:

#### 1. It is not optimal for small datasets:
For small datasets, when size of it is equal to or less than `43`, **insertion sort** performs way better.

#### 2. Space complexity:
This algorithm takes extra space to contain 2 subarrays. On limited memory resources this algorithm is not great.


**Refereces**:

1. [Merge Sort Algorithm](https://www.geeksforgeeks.org/merge-sort/)
2. [Stability in Sorting Algorithms — A Treatment of Equality](https://www.freecodecamp.org/news/stability-in-sorting-algorithms-a-treatment-of-equality-fa3140a5a539/)
