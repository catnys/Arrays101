# Array Deletions

Now that we know how insertion works, it's time to look at its complement—deletion!

Deletion in an Array works in a very similar manner to insertion, and has the same three different cases:
1. Deleting the last element of the Array.
2. Deleting the first element of the Array.
3. Deletion at any given index.

## Deleting From the End of an Array
Deletion at the end of an Array is similar to people standing in a line, also known as a queue. The person who most recently joined the queue (at the end) can leave at any time without disturbing the rest of the queue. Deleting from the end of an Array is the least time consuming of the three cases. Recall that insertion at the end of an Array was also the least time-consuming case for insertion.

So, how does this work in code? Before we look at this, let's quickly remind ourselves what the length of an Array means. Here is some code that creates an Array with room for 10 elements, and then adds elements into the first 6 indexes of it.

```cpp
// Declare an integer array of 10 elements.
int[] intArray = new int[10];

// The array currently contains 0 elements
int length = 0;

// Add elements at the first 6 indexes of the Array.
for(int i = 0; i < 6; i++) {
    intArray[length] = i;
    length++;
}
```


Notice the `length` variable. Essentially, this variable keeps track of the next index that is free for inserting a new element. This is always the same value as the overall length of the Array. Note that when we declare an Array of a certain size, we simply fix the maximum number of elements it could contain. Initially, the Array doesn't contain anything. Thus, when we add new elements, we also increment the `length` variable accordingly.

Anyway, here's the code for deleting the last element of an Array.

```cpp
void deleteFromEnd(int[] arr, int &length) {
    if (length > 0) {
        length--;
    }
}
```

```cpp
// Starting at index 1, we shift each element one position
// to the left.
for (int i = 1; i < length; i++) {
    // Shift each element one position to the left
    int_array[i - 1] = int_array[i];
}

// Note that it's important to reduce the length of the array by 1.
// Otherwise, we'll lose consistency of the size. This length
// variable is the only thing controlling where new elements might
// get added.
length--;
```
