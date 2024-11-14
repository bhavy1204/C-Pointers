// POINTERS AND POLYMORPHISM
// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int a,*ptr1,**ptr2;
//     ptr1 = &a;
//     ptr2 = &ptr1;
//     cout<<"Address of a &a = "<<ptr1<<endl;
//     cout<<"Address of ptr1 &ptr1 = "<<ptr2<<endl;
//     cout<<"\n"<<endl;
//     ptr1 +=10;
//     cout<<"Address of a after incrementing : "<<ptr1<<endl;
//     ptr2 +=10;
//     cout<<"Address of ptr after incrementing : "<<ptr2<<endl;
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int a=10;
//     int *ptr,**ptr2;
//     ptr = &a;
//     ptr2 = &ptr;
//     cout<<"Value of a : "<<*ptr<<endl;
//     cout<<"address of a : "<<&a<<endl;
//     cout<<"Value of ptr2 : "<<*ptr2<<endl;
//     *ptr=*ptr * *ptr;
//     cout<<"Value of a after manipulation : "<<*ptr<<endl;
//     cout<<"Value at ptr2 : "<<**ptr2<<endl;
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int num[]={10,20,30,40,50};
//     int *ptr;
//     int i;
//     cout<<"The values in array are:- "<<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<num[i]<<endl;
//     }
//     // Allocating base address of array to pointer
//     ptr = num;
//     cout<<"Value of ptr : "<<*ptr<<endl;
//     ptr++;
//     cout<<"Value of ptr++ : "<<*ptr<<endl;
//     ptr--;
//     cout<<"Value of ptr-- : "<<*ptr<<endl;
//     ptr = ptr+2;
//     cout<<"Value of ptr+2 : "<<*ptr<<endl;
//     ptr = ptr-1;
//     cout<<"Value of ptr-1 : "<<*ptr<<endl;
//     ptr +=3;
//     cout<<"Value of ptr+=3 : "<<*ptr<<endl;
//     ptr -=2;
//     cout<<"Value of ptr-=2 : "<<*ptr<<endl;
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int num[]={10,20,30,40,50,60,70,80,90,100};
//     int key,*ptr;
//     ptr=num;
//     cout<<"Enter key : ";
//     cin>>key;
//     for (int i = 0; i < 10; i++)
//     {
//         if (*ptr==key)
//         {
//             cout<<"Key found !!"<<endl;
//             break;
//         }
//         else if(i==9){
//             cout<<"Not found "<<endl;
//         }
//         ptr++;
//     }
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     system("cls");
//     char *ptr[10] = {"Computer", "electrical", "mechancical", "printing"};
//     char str[30];
//     cout << "Enter your desired branch : ";
//     cin >> str;
//     bool found =false;
//     for (int i = 0; i < 4; i++)
//     {
//         if (!strcmp(str, ptr[i]))
//         {
//             cout << "Branch is available " << endl;
//             found = true;
//             break;
//         }
//     }
//     if (!found)
//     {
//         cout<<"Sorry seats are full"<<endl;
//     }
//     return 0;
// }

//--------------------------------------------------------------------------;

// REVIEW LATER
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     system("cls");
//     bool found = false;
//     int i,j;
//     char str[]= " Rasode me kon tha ";
//     int len = strlen(str);
//     char *substr= new char[len];
//     cout<<"Main line : "<<str<<endl;
//     cout<<"Enter substring to search : ";
//     cin>>substr;
//     int len2 = strlen(substr),k;
//     for (i = 0; i < len; i++)
//     {
//         k=i;
//         for (j= 0; j < len; j++)
//         {
//             if (str[k] == substr[j])
//             {
//                 if (j == len2-1)
//                 {
//                     cout<<"word is available"<<endl;
//                     found=true;
//                     break;
//                 }
//                 k++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
//     if (!found)
//     {
//         cout<<"Nhi hai "<<endl;
//     }
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// typedef void (*pointerfuncn)(int , int);
// void add(int a, int b){
//     cout<<"sum : "<<a+b<<endl;
// }
// int main()
// {
//     system("cls");
//     pointerfuncn ptr;
//     ptr = &add;
//     ptr(1,2);
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// class item{
//     int code;
//     float price;
//     public:
//     void getinfo(int c,float p){
//         code = c;
//         price = p;
//     }
//     void showinfo(){
//         cout<<" Code : " << code<<endl;
//         cout<<" Price : " << price<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     int size;
//     cout<<"Enter size of objects : ";
//     cin>>size;
//     cout<<"------------------------------------------------------------------"<<endl;
//     item *p = new item[size];
//     item *d = p;
//     for (int i = 0; i < size; i++)
//     {
//         int code;
//         float price;
//         cout<<"Enter code : ";
//         cin >> code;
//         cout<<"Enter price : ";
//         cin>>price;
//         p->getinfo(code,price);
//         p++;
//     }
//     cout<<"------------------------------------------------------------------"<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"info of item "<<i+1 <<" :- " <<endl;
//         d->showinfo();
//         d++;
//     }
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// #include <cstring>
// using namespace std;
// class color
// {
// protected:
//     char *name;
//     int len;
// public:
//     color(){
//         len = 0;
//         name = new char[len + 1];
//     }
//     void getcolor(){
//         char *s;
//         s= new char[20];
//         cout<<"Enter color : ";
//         cin>>s;
//         len = strlen(s);
//         name= new char[len+1];
//         strcpy(name,s);
//     }
//     void show(){
//         cout<<name<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     color *cptr[10];
//     int n=0;
//     int choice;
//     do
//     {
//         cptr[n]=new color;
//         cptr[n]->getcolor();
//         n++;
//         cout<<"Enter 1 to continue or 0 to exit : ";
//         cin>>choice;
//     } while (choice);
//     cout<<"------------------------------------------------------------------"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cptr[i]->show();
//     }
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// #include <cstring>
// using namespace std;
// class student
// {
//     char name[20];
//     int attendence;
// public:
//     student(char *s, int a){
//         strcpy(name, s);
//         attendence = a;
//     }
//     student&  greater(student & s){
//         if (s.attendence > attendence)
//         {
//             return s;
//         }
//         else{
//             cout<<"This returned :-"<<endl;
//             return *this;
//         }
//     }
//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Attendence : "<<attendence<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     student 
//     s1("Binod",33),
//     s2("vinod",76),
//     s3("prashant",87);
//     student temp=s3.greater(s2);
//     cout<<"greater attendence is of :- "<<endl;
//     temp.display();
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// class base{
//     public:
//     int b;
//     void show(){
//         cout<<"B in base : "<<b<<endl;
//     }
// };
// class derived :public base{
//     public:
//     int d;
//     void show(){
//         cout<<"B in derived : "<<b<<endl;
//         cout<<"D : "<<d<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     base *bptr;
//     base b1;
//     bptr = &b1;
//     bptr->b=10;
//     cout<<"bptr points to base object :- "<<endl;
//     bptr->show();
//     derived d1;
//     bptr = &d1;
//     bptr->b =20;
//     cout<<"bptr points to derived object :- "<<endl;
//     bptr->show();

//     derived *dptr;
//     dptr = &d1;
//     dptr->d=30;
//     cout<<"dptr points to derived object :- "<<endl;
//     dptr->show();

//     cout<<"Now using ((derived *)bptr) :-"<<endl;
//     ((derived *)bptr)->d=80;
//     ((derived *)bptr)->show();
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// class base{
//     public:
//     void display(){
//         cout<<"Base display"<<endl;
//     }
//     virtual void show(){
//         cout<<"Base show"<<endl;
//     }
// };
// class derived : public base{
//     public:
//     void display(){
//         cout<<"Derived display"<<endl;
//     }
//     void show(){
//         cout<<"Derived show"<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     base b;
//     derived d;
//     base *bptr;
//     cout<<"bptr points to base obj :-"<<endl;
//     bptr = &b;
//     bptr->display();
//     bptr->show();
//     cout<<"Now bptr points to derived obj :-"<<endl;
//     bptr = &d;
//     bptr->display();
//     bptr->show();
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// #include <cstring>
// using namespace std;
// class media
// {
// protected:
//     char title[30];
//     int price;
// public:
//     media(char *s, int p)
//     {
//         strcpy(title, s);
//         price = p;
//     }
//     virtual void display(){};
// };
// class book : public media
// {
//     int pages;
// public:
//     book(char *s,int pag, int pri) : media(s, pri)
//     {
//         pages = pag;
//     }
//     void display()
//     {
//         cout<<"--------------------------------------------------------------"<<endl;
//         cout << "Title : " << title << endl;
//         cout << "Pages : " << pages << endl;
//         cout << "Price : " << price << endl;
//     };
// };
// class tape:public media{
//     int time;
//     public:
//     tape(char *s, int t, int p):media(s,p){
//         time = t;
//     }
//     void display(){
//         cout<<"--------------------------------------------------------------"<<endl;
//         cout << "Title : " << title << endl;
//         cout << "Time : " << time << endl;
//         cout << "Price : " << price << endl;
//     }
// };
// int main()
// {
//     system("cls");
//     char *title = new char[30];
//     int price,time,pages;
//     cout<<"Enter book details :-"<<endl;
//     cout<<"Title : "; cin >> title;
//     cout<<"Pages : "; cin >> pages;
//     cout<<"Price : "; cin >> price;
//     cout<<"\n------------------------------------------------------------------"<<endl;
//     book b1(title,pages,price);
//     cout<<"\nEnter tape details :-"<<endl;
//     cout<<"Title : "; cin >> title;
//     cout<<"playing time : "; cin >>time;
//     cout<<"Price : "; cin >> price;
//     cout<<"\n------------------------------------------------------------------"<<endl;
//     tape t1(title,time,price);

//     media *list[2];
//     list[0]=&b1;
//     list[1]=&t1;
//     cout<<"DETAILS"<<endl;  
//     list[0]->display();  
//     list[1]->display();
//     return 0;
// }

//--------------------------------------------------------------------------;

// #include <iostream>
// using namespace std;
// class author{
//     public:
//     virtual void book()=0;
// };
// class book1:public author{
//     public:
//     void book(){
//         cout<<"book 1 of author "<<endl;
//     }
// };
// class book2:public author{
//     public:
//     void book(){
//         cout<<"book 2 of author "<<endl;
//     }
// };
// int main()
// {
//     system("cls");
//     author *arr[2];
//     book1 b1;
//     book2 b2;
//     arr[0]=&b1;
//     arr[1]=&b2;
//     arr[0]->book();
//     arr[1]->book();
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int a(1);
//     int b(2);
//     int *ptr1,*ptr2;
//     ptr1=&a;
//     ptr2=&b;
//     *ptr1=*ptr2;
//     *ptr2=10;
//     cout<<*ptr1<< "  "<< b <<"  " << a << endl;
//     return 0;
// }
//--------------------------------------------------------------------------;
// #include <iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int *ptr = new int;
//     int *ptr2= new int[10];
//     cin>>*ptr;
//     cout<<'\n'<<*ptr<<'\n';
//     for (int i = 0; i < 10; i++)
//     {
//         ptr2[i]=i+1;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<ptr2[i]<<'\t';
//     }
//     cout<<'\n'<<*ptr<<endl;
//     cout<<'\n'<<*ptr2<<endl;
//     delete ptr;
//     delete[] ptr2;
//     cout<<'\n'<<*ptr<<endl;
//     cout<<'\n'<<*ptr2<<endl;
//     return 0;
// }
//--------------------------------------------------------------------------;