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
    char arr[100];
    cout << "\nEnter string with space : ";
    cin >> arr;
    cout << arr;

    char brr[100];
    cout << "\nNow Enter input using getline() : ";
    cin.getline(brr, 100);
    cout << "\nSpace preserved : " << brr;

    //Lets create our own delimeter
    char crr[100];
    cout << "\nEnter now, tab is made as delimeter : ";
    cin.getline(crr, 100, '\t');
    cout << crr << endl;
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

    // findASCII(arr1, n1);
    useGetline();
    // ToUpperCase(arr1, n1);

    return 0;
}