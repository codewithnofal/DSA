#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)

{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)

{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)

{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < n * 2 - (2 * i + 1); k++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
// pattern 9 

void pattern10(int n){
    for(int i=1; i<=n*2-1; i++){

        int star = i;

        if(i > n) star = 2*n-i;
        for(int j=0; j<star; j++){
            cout << "* ";
        }
        cout<<endl;
    }
}


void pattern11(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout <<start << " ";
            start = 1-start;
        }
        cout << endl;
    }
}


void pattern12(int n){
    int space = 2 * (n-1);
    
    for(int i=1; i<=n; i++){

        // number
        for(int j=1; j<=i; j++){
            cout << j;
        }

        // space
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        
        // number

        for(int j=i; j>=1; j--){
            cout << j;
        }
        
        cout << endl;
        space -= 2;
    }

    
}

void pattern13(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num++;
        }
         cout << endl;
    }
}


void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char c = 'A'; c<= 'A' + i; c++ ){
            cout << c;
        }
        cout << endl;
    }
}


void pattern15(int n){
    for(int i=0; i<n; i++){
        for(char c = 'A'; c<= 'A' + n - i - 1; c++ ){
            cout << c << " ";
        }
        cout << endl;
    }
}

void pattern16(int n){
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++ ){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern(int n){
    int space = 2*(n-1);
        for(int i=0; i<n; i++){
            // digit
            for(int j=1; j<=i; j++){
                cout << j;
            }

            // space
            for(int j=1; j<=space; j++){
                cout << " ";
            }

            // digit
             for(int j=i; j>=1; j--){
                cout << j;
            }
            cout << endl;
            space -= 2;
        }
}





int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    pattern(n);
}