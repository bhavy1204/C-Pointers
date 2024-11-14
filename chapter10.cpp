// MANAGING CONSOLE INPUT/OUTPUT
// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int count = 0;
//     char ch;
//     cout << "Input char : ";
//     cin.get(ch);
//     while (ch != '\n')
//     {
//             cout.put(ch);
//             count++;
//             cin.get(ch);
//     }
//     cout << "\nNo of char : " << count << endl;
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int size = 10;
//     char fruit[10];
//     cout<<"Enter fruit : ";
//     cin >> fruit;
//     cout<<"Fruit is "<<fruit<<endl;

//     cout<<"\nEnter fruit again : ";
//     cin.getline(fruit,size);
//     cout<<"Fruit is : "<<fruit<<endl;

//     cout<<"\nEnter another fruit : ";
//     cin.getline(fruit,size);
//     cout<<"Fruit is : "<<fruit<<endl;
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     system("cls");
//     char *str1="C++";
//     char *str2="programming";
//     int m = strlen(str1);
//     int n = strlen(str2);
//     for (int i = 0; i < n; i++)
//     {
//         cout.write(str2,i);
//         cout<<endl;
//     }
//     for (int i = n; i >0; i--)
//     {
//         cout.write(str2,i);
//         cout<<endl;
//     }
//     cout<<endl;
//     cout.write(str1,m).write(str2,n);
//     cout<<endl;
//     cout.write(str2,5);
//     return 0;
// }

//--------------------------------------------------------------------------;

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int code;
    cin>>code;
    cout<<code<<endl;
    cout<<code;
    return 0;
}   