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
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<= 'A' + n-i-1; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


void pattern17(int n) {
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        // alphabate
        char ch = 'A';
        int breakPoint = (2*i+1) / 2;
        for(int j=1; j<=2*i+1; j++){
            cout << ch;
            if(j<=breakPoint) ch++;
            else ch--;
        }


        // space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
            
        }
        cout << endl;
    }
}
void pattern18(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'E' - i; ch<='E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern19(int n){
    int space = 0;
    for(int i=0; i<n; i++){
        // star
        for(int j=0; j<=n-i-1; j++){
            cout << "*";
        }

        // space

        for(int j=0; j<space; j++ ){
            cout << " ";
        }

         // star
        for(int j=0; j<=n-i-1; j++){
            cout << "*";
        }
        cout << endl;
        space += 2;

    }
    space = 2 * (n-1);
    for(int i=0; i<n; i++){
        // print
        for(int j=0; j<=i; j++){
            cout << "*";
        }


        // space
        for(int j=0; j<space; j++){
            cout << " ";
        }


        // print
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }
}

void pattern20(int n){
    int space = 2 * n-2;
    for(int i=1; i<=2*n-1; i++){
        int star = i;
        if(i>n) star = 2*n-i;
        // star
        for(int j=1; j<=star; j++){
            cout << "*";
        }

        // space
        for(int j=1; j<=space; j++){
            cout << " ";
        }


        // star
        for(int j=1; j<=star; j++){
            cout << "*";
        }
        cout << endl;
        if(i<n) space -=2;
        else space += 2;
    }
}

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i== n-1 || j== n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            // calculate distance
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            // take the min from all the distance
            int minDist = min(min(top,bottom), min(left, right));

            cout << (n-minDist) << " ";
        }
        cout << endl;
    }
}

void pattern23(int n){

    int space = 0;
    for(int i=0;i<n; i++){
        // star
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }

        // space
        for(int j=1; j<=space; j++){
            cout << " ";
        }


         // star
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        cout << endl;
        space += 2;

    }

    space = 2 * n - 2;
    for(int i=1; i<=n; i++){

        // stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }

        // space
        for(int j=1; j<=space; j++){
            cout << " ";
        }


         // stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
        space -= 2;

    }
}

void pattern24(int n){
    int space = 0;
    for(int i=1; i<=n; i++){
        // star
        for(int j=1; j<=n; j++){
            if(i==1 || j==5 || j == n-1){
                cout << "*";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}


int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    pattern24(n);
}