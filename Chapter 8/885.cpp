#include <iostream>
using namespace std;
template <typename T>
T max5(T in_array[])
{
    T max = in_array[0];
    for (size_t i = 0; i < 5; i++)
    {
        if (max < in_array[i])
        {
            max = in_array[i];
        }
    }
    return max;
}
int main()
{
    int int_array[5] = {22, 33, 66, 44, 55};
    double double_array[5] = { 32.2, 33.1, 66.3, 23.4, 73.5 };
 
    int int_array_max = max5(int_array);
    double double_array_max = max5(double_array);
 
    cout << "max of int array: " << int_array_max << endl;
    cout << "max of double array: " << double_array_max << endl;
}
