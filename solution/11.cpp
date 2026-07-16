#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;

pair<int,int> findMinMax(vector<int> nums){
    int max = 0;
    int min = nums.at(0);
    for (int n:nums){
        if (n>max){
            max = n;
        }
        if (n<min){
            min = n;
        }
    }
    pair<int,int> fin;
    fin.first = min;
    fin.second = max;
    return fin;
}

class InventoryItem{
    public:
        string name;
        int quantity;
        InventoryItem(string name,int quantity){
            this->name = name;
            this->quantity = quantity;
        }
};

int totalQuantity(const vector<InventoryItem>& items){
    int total = 0;
    for (InventoryItem i:items){
        total += i.quantity;
    }
    return total;
}

int findItem(const vector<InventoryItem>& items, string targetName){
    for(int i = 0; i< items.size(); i++){
        if (items[i].name == targetName){
            return items[i].quantity;
        }
    }
    throw invalid_argument("item not found");
}

void acount(map<int,int> record,int acountNo){
    if(record.find(acountNo) != record.end()){
        record[acountNo] = record[acountNo] + 50;
        
    }
    else{
        cout<<"account not found"<<endl;
    }
}

set<int> clean(int nums[],int size){
    set<int> cleaned;
    for (int i = 0; i< size; i++){
        cleaned.insert(nums[i]);
    }
    return cleaned;
}

int main(){
    // vector<string> strs;
    // strs.push_back("a");
    // strs.push_back("b");
    // strs.push_back("c");
    // strs.push_back("d");
    // strs.push_back("e");
    // cout<<strs.size()<<endl;
    // // for (string str:strs){
    // //     cout<<str<<endl;
    // // }
    // cout<<strs.front()<<endl;
    // // strs.pop_back();
    // // cout<<strs.back()<<endl;
    // map<string,int> nums;
    // nums["cat"] = 3;
    // nums["hourse"] = 6;
    // // nums["square"] = 6;
    // // nums["shear"] = 5;
    // // for(const auto& e:nums){
    // //     cout<<e.first<<": "<<e.second<<endl;
    // // }
    // // cout<<nums.size()<<endl;
    // set<string> names;
    // names.insert("a");
    // names.insert("b");
    // names.insert("c");
    // names.insert("d");
    // names.insert("c");
    // names.insert("a");
    // cout<<names.size()<<endl;
    // for (string name:names){
    //     cout<<name<<endl;
    // }
    // vector<int> nums = {56,2,3,4,5,35,21,67,643,2,35};
    // pair<int,int> fin = findMinMax(nums);
    // cout<<fin.first<<endl;
    // // cout<<fin.second<<endl;
    // vector<InventoryItem> items;
    // items.push_back(InventoryItem("a",2));
    // items.push_back(InventoryItem("b",5));
    // items.push_back(InventoryItem("c",24));
    // items.push_back(InventoryItem("d",45));
    // cout<<totalQuantity(items)<<endl;
    // try{
    // cout<<findItem(items,"c")<<endl;
    // cout<<findItem(items,"e")<<endl;
    // }catch(exception& e){
    //     cout<<e.what()<<endl;
    // }
    // try{
    //     map<int,int> bank;
    //     bank[1] = 100;
    //     bank[2] = 120;
    //     bank[3] = 400;
    //     bank[4] = 630;
    //     bank[5] = 245;
    //     bank[6] = 723;
    //     acount(bank,1);
    //     acount(bank,1);
    //     acount(bank,3);
    //     acount(bank,5);
    //     acount(bank,8);
    //     acount(bank,2);
    //     for(const auto& e:bank){
    //         cout<<e.first<<": "<<e.second<<endl;
    //     }
    // }catch(exception& e){
    //     cout<<e.what()<<endl;
    // }
    // int rawData[] = {5, 2, 8, 2, 5, 1, 9};
    // set<int> cleaned = clean(rawData,7);
    // cout<<cleaned.size()<<endl;
    // int total = 0;
    // for (int i:cleaned){
    //     cout<<i<<endl;
    //     if (i%2 == 1){
    //         total += i;
    //     } 
    // }
    // cout<<total;
    vector<string> names;
    names.push_back("a");
    names.push_back("b");
    names.push_back("c");
    names.push_back("d");
    names.push_back("e");
    for (string s:names){
        cout<<s<<endl;
    }
    cout<<distance(names.begin(),find(names.begin(),names.end(),"c"))<<endl;
    cout<<distance(names.begin(),find(names.begin(),names.end(),"f"));
    for (string s:names){
        cout<<s<<endl;
    }
}