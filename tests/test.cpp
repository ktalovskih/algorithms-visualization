#include <gtest/gtest.h>
#include "BubbleSort.h" // Include your implementation

//Я не писал эти тесты, нейросеть писала, вроде норм..

// Test: Sorting an already sorted array
TEST(BubbleSortTest, AlreadySorted) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    BubbleSort<int> sorter(input);

    while (!sorter.isComplecte()) {
        sorter.sort();
    }

    EXPECT_EQ(sorter.getArray(), input); // The array should remain unchanged
}

// Test: Sorting a reverse-sorted array
TEST(BubbleSortTest, ReverseSorted) {
    std::vector<int> input = {5, 4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    BubbleSort<int> sorter(input);

    while (!sorter.isComplecte()) {
        sorter.sort();
    }

    EXPECT_EQ(sorter.getArray(), expected); // The array should be sorted
}

// Test: Sorting a random unsorted array
TEST(BubbleSortTest, UnsortedArray) {
    std::vector<int> input = {3, 1, 4, 1, 5};
    std::vector<int> expected = {1, 1, 3, 4, 5};
    BubbleSort<int> sorter(input);

    while (!sorter.isComplecte()) {
        sorter.sort();
    }

    EXPECT_EQ(sorter.getArray(), expected);
}

// Test: Sorting an empty array
TEST(BubbleSortTest, EmptyArray) {
    std::vector<int> input = {};
    BubbleSort<int> sorter(input);

    while (!sorter.isComplecte()) {
        sorter.sort();
    }

    EXPECT_TRUE(sorter.getArray().empty()); // Array should remain empty
}

// Test: Sorting an array with duplicates
TEST(BubbleSortTest, ArrayWithDuplicates) {
    std::vector<int> input = {4, 2, 2, 3, 1};
    std::vector<int> expected = {1, 2, 2, 3, 4};
    BubbleSort<int> sorter(input);

    while (!sorter.isComplecte()) {
        sorter.sort();
    }

    EXPECT_EQ(sorter.getArray(), expected);
}

// Test: Reusing sorter with clearIndices
TEST(BubbleSortTest, ReuseSorter) {
    std::vector<int> input1 = {3, 2, 1};
    std::vector<int> expected1 = {1, 2, 3};
    BubbleSort<int> sorter(input1);

    while (!sorter.isComplecte()) {
        sorter.sort();
    }

    EXPECT_EQ(sorter.getArray(), expected1);

    sorter.clearIndices(); 

    std::vector<int> input2 = {9, 7, 8};
    std::vector<int> expected2 = {7, 8, 9};
    sorter = BubbleSort<int>(input2); 

    while (!sorter.isComplecte()) {
        sorter.sort();
    }

    EXPECT_EQ(sorter.getArray(), expected2);
    
}
