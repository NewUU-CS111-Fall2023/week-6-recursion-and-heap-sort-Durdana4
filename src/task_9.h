#include <iostream>
#include <vector>
using namespace std;
class Heap {
private:
    vector<int> heap;

    // Helper function to swap two elements in the heap
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Heapify a subtree rooted at index i
    void maxHeapify(int size, int index) {
        int largest = index;  // Initialize the largest as the root
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        // If left child is larger than root
        if (left < size && heap[left] > heap[largest])
            largest = left;

        // If right child is larger than largest so far
        if (right < size && heap[right] > heap[largest])
            largest = right;

        // If largest is not the root, swap elements and recursively heapify the affected subtree
        if (largest != index) {
            swap(heap[index], heap[largest]);
            maxHeapify(size, largest);
        }
    }

public:
    // Build a max heap from an input array
    void buildMaxHeap(vector<int>& array) {
        heap = array;
        int size = heap.size();

        // Heapify each internal node starting from the last one up to the root
        for (int i = size / 2 - 1; i >= 0; i--)
            maxHeapify(size, i);
    }

    // Perform heap sort on the heap
    void heapsort() {
        int size = heap.size();

        // Build a max heap
        buildMaxHeap(heap);

        // Extract elements one by one from the heap
        for (int i = size - 1; i > 0; i--) {
            // Move current root to the end
            swap(heap[0], heap[i]);
            size--;

            // Heapify the reduced heap
            maxHeapify(size, 0);
        }
    }

    // Print the heap
    void printHeap() {
        for (int i = 0; i < heap.size(); i++)
            cout << heap[i] << " ";
        cout << endl;
    }
};

int main() {
    vector<int> array = { 12, 11, 13, 5, 6, 7 };
    Heap heap;
    heap.buildMaxHeap(array);

    cout << "Max Heap: ";
    heap.printHeap();

    heap.heapsort();

    cout << "Sorted Array: ";
    heap.printHeap();

    return 0;
}
