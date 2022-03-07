void sort(float array[], int size, bool isAscending)
{
    sort(array,array+size);
    if (!isAscending)
    {
        reverse(array,array+size);
    }
}
