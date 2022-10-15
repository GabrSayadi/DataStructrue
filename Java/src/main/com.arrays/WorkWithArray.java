package main.com.arrays;

public class WorkWithArray {

    void NormalArray() {
        // work with normal array
        // == new String[5];
        String[] bigTech = { "Microsoft", "Google", "Meta", "Amazon", "Apple" };

        for (int i = 0; i < bigTech.length; i++) {
            System.out.println(bigTech[i]);
        }
    }

    void TwoDArray() {
        // work with 2D array
        // == new int[3][3]
        int[][] TwoD = {
                { 0, 1, 2 },
                { 10, 20, 30 },
                { 100, 200, 300 }
        };

        for (int i = 0; i < TwoD[0].length; i++) {
            for (int j = 0; j < TwoD[1].length; j++) {
                System.out.print(TwoD[i][j] + "\t");
            }
            System.out.println();
        }
    }

    void ArrayOfObject() {

        // Array of Object
        Person[] people = new Person[2];

        people[0] = new Person("Sam", "Haln", 23);
        people[1] = new Person("Jack", "Haln", 23);

        for (Person person : people) {
            System.out.println(
                    "First Name: " + person.firstName +
                            ", Last Name:" + person.LastName +
                            ", Age:" + person.age);
        }
    }
}