package main.com.arrays;

import java.util.Arrays;

public class WorkWithDynamicArray<T> {
    Object[] info;
    int size;

    public WorkWithDynamicArray() {
        size = 0;
        info = new Object[1];
    }

    public T get(int element) {
        return (T) info[element];
    }

    public void checkLengthOfArray(int minlen) {
        int currentLen = info.length;
        if (minlen > currentLen) {
            int newLen = currentLen * 2;
            if (newLen < minlen)
                newLen = minlen;
            info = Arrays.copyOf(info, newLen);
        }
    }

    public void insert(T element) {
        checkLengthOfArray(size + 1);
        info[size++] = element;
    }

    public int sizeOfDynamicArray() {
        return info.length;
    }

    public void printArray() {
        for (int i = 0; i < info.length; i++) {
            System.out.println(info[i]);
        }
    }
}
