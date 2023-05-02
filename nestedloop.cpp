 # include <iostream>
  using namespace std;
             int main()

 {
   int i,j,k;
    for(i=1; i<=5; i++)
//    {
//     for(j=5; j>=i; --j)

//         cout<<" ";
//         for(k=1; k<=i*2-1; k++)
//         cout<<"*";
//         cout<<endl;

//    }

//     return 0;

// }
// # include <iostream>
// using namespace std;
// int main()
// {   int a=5;
//     int b=6;

// increment and decrement operator

// cout<<a--;  // postfix  incre...
// cout<<a--;  // postfix  incre...
// cout<<--b;  // prefix    decre...
// a++ postfix  increment first return the same value then increment it
// ++a prefix increment increment the first value

//  #include <iostream>
//  using namespace std;
//  int main()
//  { int a;
//    cout<<" input your values ";
//    cin>>a;
//    string value =(a>10) ? "passed": "failed";
//    cout<<"you "<<value<<" exam";

//   return 0;

//  }

// #include<iostream>
// using namespace std;
// int main()
// {   char ch;
//      cout<<" input your alphabets \n ";
//      cin>>ch;
//      switch(ch)
//      {
//       case 'A': case 'a':cout<<ch<<" is an vowel"; break;
//       case 'E': case 'e':cout<<ch<<" is an vowel"; break;
//       case 'I': case 'i':cout<<ch<<" is an vowel"; break;
//       case 'O': case 'o':cout<<ch<<" is an vowel"; break;
//       case 'U': case 'u':cout<<ch<<" is an vowel"; break;
//       default:cout<<ch<<" is a consonant";

//      }

//   return 0;

// }

// #include<iostream>
// using namespace std;
// int main()
// {  char ch;
//    cout<<" enter your character ";
//    cin>>ch;
//    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' || ch=='A'||ch=='E'|| ch=='I'||ch=='O'||ch=='U')
//    cout<<" its a vowel ";
//    else
//    cout<<"consonant";

//   return 0;

// }
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i;
//      for (int i = 1; i <= 14; i++)
//   {
//       if (i == 5)
//     {
//       break;
//     }
//     cout << i;
//   }
//   return 0;
// }
// # include <iostream>
// using namespace std;
// int main()
// {
// cout<<" programe by using ternary operator ";
// for (int i = 0; i < 20; i++)

// {
//   cout<<((i%2==0)? 'x': 'o')<<'\n';
// }

// }
// #include <iostream>
// using namespace std;
// int main()
// {
// int a, b=7, c=5;
// if (b++ > 7)
// a = 8;
// else
// a = ++b - c++;
// cout <<a<<b<<c;
// return 0;
//  }

// #include <iostream>
// using namespace std;
// int main()
// {  int b=4;
//     ++b;
//     cout<<b;

//   return 0;

// }

// # include <iostream>
// using namespace std;
// int swap(float &x, float &y)

// {   float temp=x;   // temp=0.9
//      x=y;           //  x=3.4;
//      y=temp;        //  y=0.9;

// }
// int main()
// {  float x=0.9 , y=3.4;
//    swap(x,y);
//    cout<<"The value of x will be "<<x;
//    cout<<"The value of y will be "<<y;

//   return 0;

// }
// #include <iostream>
// #include <conio.h>
// using namespace std;
// main() {
// int n = 3;
// while (n <= 5)
// {
// cout << n * n << endl;
// n++;
// }
// cout << n << endl;
// getch();
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//   int scr = 2;
//   switch (scr)
//   {
//   case 1:
//     cout << "A";
//     break;
//   case 2:
//     cout << "C";
//     scr = scr - 0;
//     break;
//   case 3:
//     cout << "B";
//     scr = scr + 5;
//     break;
//   case 4:
//     cout << "D";
//     break;
//   default:
//     cout << "E";
//   }
//   cout << endl;
//   cout << " Score:" << scr;
// }
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int a=1;
   cout<<" Enter any value to print table ";
   cin>>a;
for(int i = 1;  i <= 10; i++)
cout <<a<<"x"<<i<<"="<< a*i<<endl;
getche();
return 0;
}
