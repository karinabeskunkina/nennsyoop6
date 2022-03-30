
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





    int a, b;
    string s, choice;

    choice = "Yes";
    while (choice == "Yes" or choice == "YES" or choice == "yes") {
        cout << "a, s, b: " << endl;
        cin >> a >> s >> b;
        Calculator(a, b, s);
        cout << "Do you want to continue working?" << endl;
        string print;
        cout << "print: " << endl;
        cin >> print;
        choice = print;
    }

    double a1, b1;
    string s1, choice1;

    choice1 = "yes";
    while (choice1 == "Yes" or choice1 == "YES" or choice1 == "yes") {
        cout << "a1, s1, b1: " << endl;
        cin >> a1 >> s1 >> b1;
        Calculator(a1, b1, s1);
        cout << "Do you want to continue working?" << endl;
        string print1;
        cout << "print1: " << endl;
        cin >> print1;
        choice1 = print1;
    }


    float a2, b2;
    string s2, choice2;

    choice2 = "yes";
    while (choice2 == "Yes" or choice2 == "YES" or choice2 == "yes") {
        cout << "a2, s2, b2: " << endl;
        cin >> a2 >> s2 >> b2;
        Calculator(a2, b2, s2);
        cout << "Do you want to continue working?" << endl;
        string print2;
        cout << "print2: " << endl;
        cin >> print2;
        choice2 = print2;
    }



    
    return 0;

}
