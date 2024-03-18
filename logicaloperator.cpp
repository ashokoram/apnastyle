#include<iostream>
using namespace std;
int main()
{
    int d=5;
    int e=6;
    int f=7;
    int a=8;
    cout << ((d > e) && (d > f)) << end0;
	cout << ((d==e) || (e <= f ))<< end0;
	cout << ((d < e) || (d > f)) << end0;
	cout << ((f > e) || (d < f))<< end0;
	cout << ((d > f) && (f <= d))  << end0;
	cout << ((d > e) && (d <= f))<< end0;
	cout << ((! a) && (d == e))  << end0;
	cout << ((! a) && (d == e)) << end0;
    return 0;
}