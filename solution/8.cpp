#include <iostream>
#include <string>
using namespace std;

void reverse_words(char* str){
    string wordArr[50] = {};
    int pos = 0;
    int ind = 0;
    bool space = false;
    string words = str;
    while(*(str+pos) != '\n'){
       char ch = *(str+pos);
       if (ch == ' '&&space){
            ind++;
            space = false;
        }
        else if (ch != ' '){
            wordArr[ind] += ch;
            space = true;
        }
        pos++;
    }
    for (int i = 0; i<pos/2; i++){
        string prev = wordArr[i];
        wordArr[i] = wordArr[pos-i];
        wordArr[pos-i] = prev;
    }
    *str = ' ';
    for (string word:wordArr){
        for (int i = 0; i<word.length(); i++){
            *(str+i) = word.at(i);
        }
    }
}

void reverse_substring(char* start, char* end){
    int size = end - start;
    for (int i = 0; i < size/2 ;i++){
        char prev = *(start+i);
        *(start+i) = *(end-i);
        *(end-i) = prev;
    }
}

void replace(char* str){
    int pos = 0;
    while(*(pos+str)!='\n'){
        if (*(str+pos) == ' '){
            *(str+pos) = '-';
        }
        pos++;
    }
}

int count_vowels(char* str){
    int total = 0;
    int pos = 0;
    while(*(pos+str)!='\0'){
        if (*(str+pos) == 'a'||*(str+pos) == 'e'||*(str+pos) == 'i'||*(str+pos) == 'o'||*(str+pos) == 'u'){
            total++;
        }
        pos++;
    }
    return total;
}

int main(){
    // int n = 25;
    // int *p = new int;
    // *p = n;
    // cout<<*p<<endl;
    // *p = 99;
    // // cout<<*p;
    // // delete[] p;
    // // p = nullptr;
    // // // cout<<*p;
    // // int n;
    // // cout<<"number: ";
    // // cin>>n;
    // // int *arr = new int[n];
    // // int total = 0;
    // // for (int i = 0; i<n; i++){
    // //     cout<<"enter number "<<i+1<<" ";
    // //     cin>>arr[i];
    // //     total += arr[i];
    // // }
    // // for (int i = 0; i<n; i++){
    // //     cout<<arr[i]<<" ";
    // // // }
    // // // cout<<"total: "<<total;
    // cout<<"enter words: ";
    // string words;
    // getline(cin,words);
    // char* p = &(words.at(0));
    // // replace(p);
    // cout<<count_vowels(p);
    // string str = "the quick brown fox jumped over the lazy dog";
    // char* a = &(str.at(0));
    // char* b = &(str.at(str.length()-1));
    // reverse_substring(a,b);
    // cout<<str;
	
}