#include <iostream>
#include <bitset>

int main()
{
    using namespace std;
    
    int x = 5;
    int arr[] =  {3,4,5,6};
    /*cout << &x << endl;
   	cout << &array[0] << endl;
   	cout << &array[1] << endl;
   	
    cout << bitset<4*sizeof(int*)>(reinterpret_cast<int>(0x6ffdf0)) << endl;//
    cout << bitset<4*sizeof(int*)>(reinterpret_cast<int>(0x6ffdd4)) << endl;//
        cout << bitset<4*sizeof(int*)>(reinterpret_cast<int>(0x6ffdf0) + 1) << endl;//
        cout << reinterpret_cast<int>(0x6ffdf0) << endl;
        cout << reinterpret_cast<int>(0x6ffdd4) << endl;
               // cout << reinterpret_cast<int>(0x6ffdf0) + 1 << endl; */
    cout << &arr[0] << endl;
    cout << &arr[1]  << endl;
    cout << arr << endl;
    cout << arr+1 << endl;


}
