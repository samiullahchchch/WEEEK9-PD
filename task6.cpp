#include <iostream>

using namespace std;
main()
{

    int a;
    cout << "Enter the size of array" << endl;
    cin >> a;

    int num[a];
    for (int x = 0; x < a; x++)
    {
        cout << "Enter the number" << endl;
        cin >> num[x];
    }

    for (int x = 0; x < a; x++)

    {
        for (int x = 0; x < a; x++)
        {
            if (num[x] % 2 == 0)
            {
                num[x] = num[x] - 2;
            }

            if (num[x] % 2 == 1)
            {
                num[x] = num[x] + 2;
            }
        }
    }

   cout<<"[";
    for (int x = 0; x < a; x++)
    {
        cout << num[x];
        cout << " ";
    }
    cout<<"]";
}