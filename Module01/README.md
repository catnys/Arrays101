# `Introduction`

# Array - A DVD box?

Imagine you have a collection of DVDs that you wish to organize systematically. How would you go about doing this? One approach could be to use a sturdy cardboard box large enough to accommodate all your DVDs in an organized manner, correct? While this seems straightforward, there might arise situations where you need to add a new DVD to the collection or remove one from the lineup. It's essential to ensure that this storage solution is dedicated solely to DVDs, excluding items like clothing or any other personal belongings. Essentially, this box serves as a container for multiple identical items—DVDs—in this context. Each DVD would be protected by a plastic cover, ensuring they remain in good condition. These covers would display essential information such as the movie title, cast list, and additional details. Importantly, every cover would match in size and design, each housing a single DVD. Although we may not assign a specific name to the box itself, it becomes identifiable by its purpose, such as the "DVD box," making it easy for someone else, like your sister, to locate it based on its designated use. Translating this real-life scenario into the realm of computing, we can draw parallels to how data is structured and managed in programming.

Let's say you're tasked with creating a software application to manage a collection of DVDs, essentially serving as a digital inventory system. This scenario mirrors our earlier discussion but applies it to a broader context. Picture the DVD box from before as an extensive virtual library filled with DVDs, each having unique attributes related to the movies themselves. 

Moreover, you're informed about the capacity constraints of this virtual library, specifying a limit on the total number of DVDs it can hold. Given the nature of the content, it wouldn't make sense to stockpile outdated films from decades ago unless they happen to be classics, right? Imagine the requirement dictates maintaining a maximum of 100 DVDs in the inventory. This limitation is crucial as it guides the selection of the appropriate storage solution, akin to finding a box that precisely fits the DVDs without excess space.
However, unlike searching for a physical box, we're dealing with a digital solution. The concept that comes to mind here is an Array, a programming construct designed for storing and organizing data elements efficiently.

---

## What Is an Array ? 

Arrays are essentially groups of elements that can include various types such as characters, numbers, text, DVDs, games, books, etc. These elements are placed in **adjacent** (contiguous) memory spaces, making it simple to go through all items in the array.

To draw a parallel with physical DVDs, imagine not scattering your DVD collection throughout your home but instead keeping them neatly organized in one large container or on a shelf. This method allows for efficient searching of any DVD without the hassle of moving around.

Java treats arrays of primitive types differently by initializing them with default values:

- **Integer (`int`) arrays** are filled with `0`.
- **Floating-point (`float` and `double`) arrays** are initialized with `0.0`.
- **Boolean (`boolean`) arrays** contain `false`.


```java
// A simple definition for a DVD.
public class DVD {
    public String name;
    public int releaseYear;
    public String director;

    public DVD(String name, int releaseYear, String director) {
        this.name = name;
        this.releaseYear = releaseYear;
        this.director = director;
    }

    public String toString() {
        return this.name + ", directed by " + this.director + ", released in " + this.releaseYear;
    }

    public static void main(String[] args) {
        // Create an array to hold DVDs
        DVD[] dvdCollection = new DVD[15];

        // Instantiate DVD objects and add them to the array
        dvdCollection[0] = new DVD("The Shawshank Redemption", 1994, "Frank Darabont");
        dvdCollection[1] = new DVD("The Godfather", 1972, "Francis Ford Coppola");
        dvdCollection[2] = new DVD("Inception", 2010, "Christopher Nolan");

        // Example of accessing and printing a DVD from the array
        System.out.println(dvdCollection[0].toString());
    }
}
```

Before we start adding DVDs to our Array, you might wonder why we would limit ourselves to creating an Array that can only hold 15 items. Why not create a much larger Array, capable of storing 1,000,000 DVDs, to ensure we never run out of space?

The rationale behind choosing a smaller size is similar to deciding on the size of a physical storage box for DVDs. Imagine needing a box large enough to hold 1,000,000 DVDs when your collection consists of just 15 DVDs, with no plans to exceed 100 DVDs. Would it make sense to acquire a box capable of holding 100 DVDs now, especially if you plan to add only a few new DVDs each year? Such a box would unnecessarily occupy valuable space in your home.

Similarly, when we allocate space for an Array in computing, we're essentially reserving memory. Creating an Array with 1,000,000 slots means the computer sets aside enough memory for that many DVDs, even if we only use space for 15. This reserved memory is unavailable for other uses, much like how a gigantic DVD box would monopolize physical space in your home.



---

# Accessing Elements in Arrays

> The two most primitive Array operations are writing elements into them, and reading elements from them. All other Array operations are built on top of these two primitive operations.

## Writing Items into an Array

To put a DVD into the Array, we need to decide which of the `15` places we'd like it to go in. Each of the places is identified using a number in the range of 0 to `N - 1`. The 1st place is `0`, the 2nd place is `1`, the 3rd place is `2...` all the way up to the 15th place, which is `14`. We call these numbers that identify each place indexes.

```java
// Firstly, we need to actually create a DVD object for The Avengers.
DVD avengersDVD = new DVD("The Avengers", 2012, "Joss Whedon");

// Next, we'll put it into the 8th place of the Array. Remember, because we
// started numbering from 0, the index we want is 7.
dvdCollection[7] = avengersDVD;

DVD incrediblesDVD = new DVD("The Incredibles", 2004, "Brad Bird");
DVD findingDoryDVD = new DVD("Finding Dory", 2016, "Andrew Stanton");
DVD lionKingDVD = new DVD("The Lion King", 2019, "Jon Favreau");

// Put "The Incredibles" into the 4th place: index 3.
dvdCollection[3] = incrediblesDVD;

// Put "Finding Dory" into the 10th place: index 9.
dvdCollection[9] = findingDoryDVD;

// Put "The Lion King" into the 3rd place: index 2.
dvdCollection[2] = lionKingDVD;

DVD starWarsDVD = new DVD("Star Wars", 1977, "George Lucas");
dvdCollection[3] = starWarsDVD;
```

Because we just put Star Wars into the Array at index `3`, The Incredibles is no longer in the Array. It has been **overwritten**! If we still have the `incrediblesDVD` variable in scope, then the DVD still exists in the computer's memory. If not though, it's totally gone!



## Reading Items from an Array

We commonly use a loop to put lots of values into an Array. To illustrate this, let's go to another example. This time, we're going to create an Array of ints and put the first 10 square numbers into it.

```java
int[] squareNumbers = new int[10];

// Go through each of the Array indexes, from 0 to 9.
for (int i = 0; i < 10; i++) {
    // We need to be careful with the 0-indexing. The next square number
    // is given by (i + 1) * (i + 1).
    // Calculate it and insert it into the Array at index i.
    int square = (i + 1) * (i + 1);
    squareNumbers[i] = square;
}

```


## Writing Items into an Array with a Loop


Observe that since we haven't assigned any value to index `10`, its content is displayed as null. In contrast, certain programming languages like C might show arbitrary data for uninitialized array elements. However, Java ensures that unused slots in an object array are automatically set to null, whereas arrays of primitive types are initialized with default values: int arrays with `0`, `float` arrays with `0.0f`, and boolean arrays with false.

```java
// Print out what's in indexes 7, 10, and 3.
System.out.println(dvdCollection[7]);
System.out.println(dvdCollection[10]);
System.out.println(dvdCollection[3]);

// Will print:

// The Avengers, directed by Joss Whedon, released in 2012
// null
// Star Wars, directed by George Lucas, released in 1977
```


## Reading Items from an Array with a Loop


Additionally, iterating through and displaying all elements within an Array can be efficiently achieved using a loop. It's important to note that there exists a more refined approach for printing the contents of an Array, which involves utilizing a specific type of loop known as the "for each" loop.

```java
// For each VALUE in the Array.
for (int square : squareNumbers) {
    // Print the current value of square.
    System.out.println(square);
}
// Prints exactly the same as the previous example.
```

---


# Array Capacity VS Length


> When someone inquiries about the size of a DVD array, there are two potential responses, each conveying distinct information:

1. **Capacity**: Refers to the maximum number of DVDs the array can accommodate if it were fully utilized.
2. **Length**: Indicates the current count of DVDs stored within the array.

Both interpretations are accurate but serve different purposes. Understanding the distinction between these terms is crucial for precise communication.

## Array Capacity

Consider an array designed to store DVDs, initialized as follows:

```java
DVD[] array = new DVD[6];
```


Attempting to add elements beyond `array[5]` (the last index considering zero-based indexing) is invalid. The array's capacity is set to 6 DVDs upon creation, limiting insertion to indices 0 through 5. Accessing any other index, such as -3, 6, or 100, would result in an `ArrayIndexOutOfBoundsException`.

The capacity of an array is predetermined at its creation and remains constant. Modifying the capacity post-creation is analogous to enlarging a pre-made cardboard box, which is impractical and parallels the limitations of arrays in computing.

To manage more than six DVDs, a new, larger array must be instantiated, and all existing DVDs transferred to it, similar to acquiring a bigger box for additional DVDs.

The capacity of an array in Java can be determined by accessing its `length` property, as demonstrated:

```java
int capacity = array.length; System.out.println("The Array has a capacity of " + capacity);
```

This snippet outputs: "The Array has a capacity of 6", highlighting the unconventional method (.length) to retrieve an array's capacity across various programming languages.

---

# Array Length

The other definition of length is the number of DVDs, or other items, currently in the Array. This is something you'll need to keep track of yourself, and you won't get any errors if you overwrite an existing DVD, or if you leave a gap in the Array.

You might have noticed that we've been using a length variable in our previous examples, to keep track of the next empty index.

```java
// Create a new array with a capacity of 6.
int[] array = new int[6];

// Current length is 0, because it has 0 elements.
int length = 0;

// Add 3 items into it.
for (int i = 0; i < 3; i++) {
    array[i] = i * i;
    // Each time we add an element, the length goes up by one.
    length++;
}

System.out.println("The Array has a capacity of " + array.length);
System.out.println("The Array has a length of " + length);
```


---

# Handling Array Parameters

Most Array questions on LeetCode have an Array passed in as a parameter, with no "length" or "capacity" parameter explicitly mentioned. Let's explore what this means with an example.

## Example Problem Description

**Problem:** Given a binary array, find the maximum number of consecutive 1s in this array.

**Code Template Provided:**

```java
class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        
    }
}
```

The only parameter is `nums`; an Array. At first glance, it seems impossible to solve this question without knowing how long `nums` is. However, it's actually quite straightforward.

## Assumption When No Length/Capacity Parameter Is Given

When an Array is given as a parameter, without any additional information, you can safely assume that `length == capacity`. That is, the Array is exactly the right size to hold all of its data. Therefore, you can use `.length` to determine the size of the Array.

## Important Note

Arrays are 0-indexed. The capacity/length represents the number of items, not the highest index. The highest index is `.length - 1`. To iterate over all items in the Array, you can do the following:



```java
class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        // Hint: Initialise and declare a variable here to 
        // keep track of how many 1's you've seen in a row.
        for (int i = 0; i < nums.length; i++) {
            // Do something with element nums[i].
        }
    }
}
```


# References

1. [Arrays101](https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/) on the official website of Leetcode
