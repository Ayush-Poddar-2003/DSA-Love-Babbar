#include<iostream>
#include<climits>   // to get max/min limits

#include<typeinfo>  // for using tyid function
#include<iomanip>   // limits the deicmal digits

using namespace std;

int main()
{

/*  INT 
    
    In PC, INT takes 4 bytes = 32 bits (leftmost bit for sign)
    Hence greatest integer it can store = 2**31 = 2147483647 */

    int a = 1000;

    cout << "\nDatatype : "             << typeid(a).name() << endl; // getting the type of a 
    cout << "Size of int in bytes : " << sizeof(a)        << endl;
    cout << "Maximum value of int : " << INT_MAX          << endl << endl;
        

    cout << "signed int size : "             << sizeof(int) << endl;
    cout << "unsigned int size : "           << sizeof(unsigned int) << endl;
    cout << "short int size : "              << sizeof(short int) << endl;
    cout << "unsigned short int size : "     << sizeof(unsigned short int) << endl;
    cout << "long int size : "               << sizeof(long int) << endl;
    cout << "unsigned long int size : "      << sizeof(unsigned long int) << endl;
    cout << "long long int size : "          << sizeof(long long int) << endl;
    cout << "unsigned long long int size : " << sizeof(unsigned long long int) << endl << endl;
    
    
	cout << "Max int                 : " << INT_MAX << endl;
	cout << "Min int                 : " << INT_MIN << endl;
	cout << "Max unsigned int        : " << UINT_MAX << endl;
	cout << "Min unsigned int        : 0 " << endl;
	cout << "Max long long           : " << LLONG_MAX << endl;
	cout << "Min long long           : " << LLONG_MIN << endl;
	cout << "Max unsigned long long  : " << ULLONG_MAX << endl;
	cout << "Min unsigned long long  : 0 " << endl;
    cout << "Max short               : " << SHRT_MAX << endl;
	cout << "Min short               : " << SHRT_MIN << endl;
    cout << "Max unsigned short      : " << USHRT_MAX << endl << endl;
	
cout << "--------------------------------------------------\n\n";

// 	WHAT IF WE EXCEED THE LIMITS FOR E.G. :
	
	int n1 = 2147483647;      // maximum range of integer

    cout << "Greatest possible integer : " << INT_MAX << endl;
	cout << "Max + 1 : " << n1 + 1 << endl; 
	cout << "Max + 2 : " << n1 + 2 << endl; 
	cout << "Max + 3 : " << n1 + 3 << endl << endl; 
	
//  CONCLUSION : In case of overflowing number starts from smallest

    int n2 = -2147483648;      // miniimum range of integer

    cout << "Smallest possible integer : " << INT_MIN << endl;
	cout << "Min - 1: " << n2 - 1 << endl; 
	cout << "Min - 2: " << n2 - 2 << endl; 
	cout << "Min - 3: " << n2 - 3 << endl; 

//  CONCLUSION : In case of underflowing number starts from greatest


cout << "\n--------------------------------------------------\n\n";

/*  Various types of integer literals

        ....     ->  decimal
        0...     ->  octal
        0x..     ->  hexadecimal
        ....     ->  signed int
        ...u     ->  unsigned int
        ...l     ->  long
        ...ul    ->  unsigned long

---------------------------------------------------------------

    FLOAT / DOUBLE

        - Both used to store point values
        - E means 10 power, eg  :  E-5 = 10^(-5)
          45E12 is equal to 45*10^12
*/

    float b = 5.75;
    cout << "Datatype : "         << typeid(b).name() << endl;
    cout << "Size of float : "    << sizeof(float) << endl;
    
    
    double c = 19.9954513;
    cout << "Datatype : "         << typeid(c).name() << endl ;
    cout << "Size of double : "   << sizeof(double) << endl;


/*  FLOAT  VS  DOUBLE

    The precision of float is only 6 - 7 decimal digits, 
    while double variables have a precision of about 15 digits. 
    Therefore it is safer to use double for most calculations.

    - We can show decimal digits accordingly using setlimts().*/

    float d = 3.2545895;
    double e = 8.41549154;

    cout << setprecision(3) << d << '\n';
    cout << fixed << setprecision(3) << d << '\n';
    cout << setprecision(11) << e << '\n';
    cout << fixed << setprecision(9) << e << '\n';

return 0;
}