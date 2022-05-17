void insertionSort(vector<int>& array) {
    for (int i = 0 ; i < array.size() ; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 and array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
