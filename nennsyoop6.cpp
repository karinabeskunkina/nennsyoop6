
#include "overload.h"

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    print(arr, n);
    int m;
    cin >> m;
    double* orr = new double[m];
    for (int i = 0; i < m; ++i) {
        cin >> orr[i];
    }
    BubbleSort(orr, m);
    print(orr, m);

    int n1;
    cin >> n1;
    int* arr1 = new int[n1];
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
    SelectSort(arr1, n1);
    print(arr1, n1);

    int m1;
    cin >> m1;
    float* orr1 = new float[m1];
    for (int i = 0; i < m1; ++i) {
        cin >> orr1[i];
    }
    SelectSort(orr1, m1);
    print(orr1, m1);

    int n2;
    cin >> n2;
    int* arr2 = new int[n2];
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }
    InsertSort(arr2, n2);
    print(arr2, n2);


    int m2;
    cin >> m2;
    float* orr2 = new float[m2];
    for (int i = 0; i < m2; ++i) {
        cin >> orr2[i];
    }
    InsertSort(orr2, m2);
    print(orr2, m2);





    


}
