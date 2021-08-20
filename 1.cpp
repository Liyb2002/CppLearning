#include <iostream>
using namespace std;

 void swap(int* a, int * b){
     int tempt = *a;
     *a = *b;
     *b=tempt;
 }

 void swap2(int a, int b){
     int tempt=a;
     a=b;
     b=tempt;
 }

int main(){
    cout << "hi" << endl;
  //  system("pause");
  cout << "sizeof(int*)" <<sizeof(int*)  << endl;
  cout << "sizeof(long*)" <<sizeof(long*)  << endl;
  cout << "sizeof(long)" <<sizeof(long)  << endl;
  cout << "sizeof(int)" <<sizeof(int)  << endl;
    

int a=10;
int b=100;

swap2(a, b);
cout << "a is" << a << endl;


int arr[10]={1,2,3,5};
cout << sizeof(&arr)<< endl;



return 0;

}

