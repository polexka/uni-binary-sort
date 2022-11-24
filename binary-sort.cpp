void sorting (int* arr, int num){
    int x, left, right, middle;

    for (int i = 1; i < num; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            x = arr[i];
            left = 0;
            right = i - 1;

            do {
                middle = (left + right) / 2;
                if (arr[middle] < x) left = middle + 1;
                else right = middle - 1;
            } while (left <= right);

            for (int j = i - 1; j >= left; j--)
                arr[j + 1] = arr[j];
            arr[left] = x;
        }
    }
}
