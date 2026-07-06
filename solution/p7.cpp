#include <iostream>
#include <string>
using namespace std;

void getThreeNums(double& a, double& b, double& c){
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
}


double findMax(double a, double b, double c){
    if (a>=b){
        if (a>=c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if (b>=c){
            return b;
        }
        else{
            return c;
        }
    }
}

double findMin(double a, double b, double c){
    if (a<=b){
        if (a<=c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if (b<=c){
            return b;
        }
        else{
            return c;
        }
    }
}

double ave(double a, double b, double c){
    return (a+b+c)/3;
}

double ave(double a, double b){
    return (a+b)/3;
}

void palindrome(string words){
    string wordArr[50] = {};
    int pos = 0;
    bool space = true;
    for (char ch:words){
        if (ch == ' '&&space){
            pos++;
        }
        else if (ch != ' '){
            wordArr[pos] += ch;
        }
    }
    for (string word:wordArr){
        if(!word.empty()){
            bool palin = true;
            for (int i = 0; i < word.length()/2;i++){
                if (word.at(i) != word.at(word.length()-1-i)){
                    palin = false;
                    break;
                }
            }
            cout<<word<<": "<<palin<<endl;
        }
    }
}

void transpose(int arr[][4]){
    int prev = 0;
    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 4; j++){
            prev = arr[i][j];
            arr [i][j] = arr [j][i];
            arr [j][i] = prev;
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void reverse(int rows,int columbs){
    int arr[rows][columbs];
    for (int i =0; i<rows;i++){
        for (int j =0; j<columbs;j++){
            cout<<"enter x: "<<j<<" y: "<<i<<endl;
            cin>>arr[i][j];
        }
    }
    int prev = 0;
    for (int i = 0; i < rows; i++){
        for (int j = i+1; j < columbs; j++){
            prev = arr[rows-1 - i][columbs-1 - j];
            arr [rows-1 - i][columbs-1 - j] = arr [i][j];
            arr [i][j] = prev;
        }
    }
    for (int i =0; i<rows;i++){
        for (int j =0; j<columbs;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // double a =0;
    // double b =0;
    // double c =0;
    // getThreeNums(a,b,c);
    // cout<<"max: "<<findMax(a,b,c);
    // cout<<" min: "<<findMin(a,b,c);
    // cout<<" ave: "<<ave(a,b,c);
    // cout<<"enter word: ";
    // string words;
    // getline(cin,words);
    // palindrome(words);
    // int matrix[4][4] = { {1,2,3,4},
    //                      {5,6,7,8}, 
    //                      {9,10,11,12}, 
    //                      {13,14,15,16} };
    // transpose(matrix);
    reverse(3,4);
}