#include<iostream>
using namespace std;

void findASCII(char arr[], int n)
{
    cout << "\nFinding ASCII of " << arr << endl;
    for(int i=0;i<n+1;i++)
    {
        cout << arr[i] << " -> " << (int)arr[i] <<endl;
    }
}

void useGetline()
{
    char arr[10];

    cout << "\nEnter string with space : ";
    cin >> arr;
    cout << arr;

    cout << "\nNow Enter input using getline() : ";
    cin.getline(arr, 10);
    cout << "\nSpace preserved : " << arr;

    //Lets create our own delimeter
    cout << "\nEnter now, tab is made as delimeter : ";
    cin.getline(arr, 10, '\t');
    cout << arr << endl;
}

void ToUpperCase(char arr[], int n)
{
/* Formula Formation (a:97, A:65)
   A -> a   &   a -> A
   A-A+a        a-a+A
Similarly
   D -> d   &   d -> D
   D-A+a        d-a+A
*/
    cout << "\nLower to Upper case conversion\n";
    for(int i=0;i<n;i++)
    {
        char ch = arr[i];
        if(ch>='a' && ch<='z')
        {
            ch = ch - 'a' + 'A';
            arr[i] = ch;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    char arr1[] = "Ayush";
    int n1 = 5;

    findASCII(arr1, n1);
    useGetline();
    ToUpperCase(arr1, n1);

    return 0;
}