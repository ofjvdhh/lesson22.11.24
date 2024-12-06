//Задача первая


#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    const size_t a = 1, b = 4;
    int arr[a][b];
    int n;
    cin >> n;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr[i][j] = n * 2;
            n *= 2;
            cout << arr[i][j] << " ";
        }
    }
}



// Задача вторая 

#include <iostream>
using namespace std;
int main()

{
    const int X = 2;
    const int Y = 4;
    int num[X][Y] = {};

    cout << "Enter num[t][i]::";
    cin >> num[0][0];
    for (int t = 0; t < X; t++)
    {
        for (int i = 1; i < Y; i++)
        {
            num[t][i] = (t * Y) + (i + (num[0][0] - 1)) + 1;
        }
    }
    for (int t = 0; t < X; t++)
    {
        for (int i = 0; i < Y; i++)
            printf(" %4d", num[t][i]);
        cout << endl;
    }
    system("pause");
}