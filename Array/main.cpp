#include <iostream>
class Array
{
public:

    int A[10];
    int length;
    int Size;
};
void display(Array arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        std::cout << arr.A[i] << " ";
    }
}
Array* Merge(Array* arr1, Array* arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr1->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    return arr3;
}
int main()
{

    Array arr1{ {11,17,21,23,56},5,5 };
    Array arr2{ {12,16,19,20,55},5,5 };
    Array* arr3;
    arr3 = Merge(&arr1, &arr2);
    display(*arr3);
    delete[]arr3;
    return 0;
}
