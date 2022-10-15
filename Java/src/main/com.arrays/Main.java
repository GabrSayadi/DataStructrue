package main.com.arrays;

import java.time.DayOfWeek;

public class Main {

    void array() {
        // Normal Array;
        WorkWithArray Array = new WorkWithArray();

        System.out.println("Nomal Array:");
        Array.NormalArray();
        System.out.println("2D Array:");
        Array.TwoDArray();
        System.out.println("Array of Object:");
        Array.ArrayOfObject();
    }

    void dyArray() {
        // Dynamic Array
        WorkWithDynamicArray<Integer> dynamicArray = new WorkWithDynamicArray<Integer>();
        for (int i = 0; i < 5; i++) {
            dynamicArray.insert(i);
        }
        dynamicArray.printArray();
        System.out.println(dynamicArray.sizeOfDynamicArray());
    }

    public static void main(String[] args) {
        Main mainC = new Main();
        mainC.array();
        mainC.dyArray();
    }
}
