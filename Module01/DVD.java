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


