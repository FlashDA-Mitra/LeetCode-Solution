int peakIndexInMountainArray(int* arr, int arrSize) {
    int a = 0;
    int b = arrSize - 1;

    int mid, x, y;

    while (a < b)
    {
        mid = (a + b)/2;

        if(arr[mid] < arr[mid + 1])
            a = mid + 1;
        else
            b = mid;

    }

    return a;
}