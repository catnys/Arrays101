# Basic Array Operations

> In the last chapter, we have seen at how to write elements to an array. There is a lot more to inserting elements though, as we're about to see!

Now that we have a solid understanding of what an array is and how it is stored in the computer's physical memory, the next step is to explore the operations that arrays support. An array is a data structure, meaning it organizes data in a specific format and allows for certain operations on this data.

Consider the DVD inventory management software from the introduction. Here are some operations you might want to perform using this software:

1. Insert a new DVD into the collection at a specific location.
2. Delete a DVD from the collection if it is no longer needed in the inventory.
3. Search for a particular DVD in the collection. This is a frequently performed operation, as the software would be used numerous times daily to find specific DVDs requested by users.

In this section, we will examine the three fundamental operations supported by almost every data structure: insertion, deletion, and search.

--- 


# Array Insertions

In the previous chapter, we learned how to write elements to an array. However, inserting elements involves more than just writing to the array, as we will see in this section!

## Inserting a New Element into an Array

There are several ways to insert a new element into an array:

1. **At the end of the array:** Append the new element after the last element.
2. **At the beginning of the array:** Insert the new element before the first element, shifting all other elements one position to the right.
3. **At a specific index:** Insert the new element at a specified position, shifting subsequent elements one position to the right.

## Inserting at the End of an Array

To insert an element at the end of an array, we simply assign the new element to the index following the current last element. This process is straightforward and similar to what we've covered before.

Here's an example of creating a new array with a capacity of 6 items and adding elements to the first three indexes. Let's also define a `printArray` function to visualize the array:

```java
public void printArray(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
        System.out.println("Index " + i + " contains " + arr[i]);
    }
}

int[] arr = new int[6];
arr[0] = 0;
arr[1] = 1;
arr[2] = 2;
printArray(arr);
```

Output:
```
Index 0 contains 0.
Index 1 contains 1.
Index 2 contains 2.
Index 3 contains 0.
Index 4 contains 0.
Index 5 contains 0.
```

Notice that indexes 3, 4, and 5 contain 0. This is because Java fills unused array slots with 0s by default. 

Now, let's add a fourth element, 10, to the array:

```java
arr[3] = 10;
printArray(arr);
```

Output:
```
Index 0 contains 0.
Index 1 contains 1.
Index 2 contains 2.
Index 3 contains 10.
Index 4 contains 0.
Index 5 contains 0.
```

It's important to increment the length variable when adding a new element to avoid overwriting the recently added element.

## Inserting at the Start of an Array

To insert an element at the beginning of the array, all existing elements must be shifted one position to the right to make space for the new element. This operation is costly because it requires shifting every element, making it a linear time complexity operation, O(N), where N is the length of the array.

Example:

```java
for (int i = arr.length - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
}
arr[0] = 20;
printArray(arr);
```

Output:
```
Index 0 contains 20.
Index 1 contains 0.
Index 2 contains 1.
Index 3 contains 2.
Index 4 contains 10.
Index 5 contains 0.
```

## Inserting at a Specific Index

Inserting an element at a specific index involves shifting elements from that index onwards one position to the right. This operation is also costly because it can require shifting almost all elements in the array.

Example:

```java
for (int i = arr.length - 1; i > 2; i--) {
    arr[i] = arr[i - 1];
}
arr[2] = 30;
printArray(arr);
```

Output:
```
Index 0 contains 20.
Index 1 contains 0.
Index 2 contains 30.
Index 3 contains 1.
Index 4 contains 2.
Index 5 contains 10.
```

---


