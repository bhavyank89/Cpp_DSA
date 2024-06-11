#include<bits/stdc++.h>
using namespace std;

void pairsCpp(){

    cout<<"Pairs in Cpp :"<<endl;
    //Pairs is used to store multiple values in a single variable

    //creating pair
    pair<int,int> p1 = {1,2};
    cout<<p1.first<<" "<<p1.second<<endl;

    //nested pair
    pair<int,pair<char,int>> p2 = {1,{'A',97}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    
    //Array Pair
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    for(int i =0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}
void vectorsCpp(){

    cout<<"Vectors in Cpp : "<<endl;
    //vectors are similar to array but they have dynamic size

    vector<int> v1 = {1,2,3,4,5,6};
    cout<<v1[3]<<endl;
    cout<<v1.at(3)<<endl;

    vector<pair<int,int>> v2;
    //both push_back and emplace_back have syntex difference.
    //while emplace_back is faster than push_back
    v2.push_back({2,3});
    v2.emplace_back(1,10);
    cout<<v2[1].second<<endl;

    vector<int> v3(5,100);  //declares v3 = {100,100,100,100,100}
    vector<int> v4(5);  //declares v4 = {0,0,0,0,0}

    //copying one vector to another
    vector<int> v5(v1);
    cout<<v5[2]<<endl;

    //Accessing elements using itterator
    //v1 = {1,2,3,4,5,6}
    vector<int>::iterator it1 = v1.begin();
    cout<<&v1[0]<<endl;
    cout<<&it1<<endl;    //prints address of it1
    cout<<*it1<<endl;    //prints value of the address it1 is pointing i.e, v1[0]
    cout<<*(it1+2)<<endl;//prints v1[2]

    vector<int>::iterator it2 = v1.begin();             //point to the first element
    vector<int>::iterator it3 = v1.end();               //point to the last element + 1 memory
    vector<int>::reverse_iterator it4 = v1.rbegin();    //point to the last element
    vector<int>::reverse_iterator it5 = v1.rend();      //point to the first element -1 memory

    //looping on vector
    for(auto it : v1)
        cout<<it<<" ";
    cout<<endl;
    
    for(vector<int>::iterator it = v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
        cout<<endl;
    
    for(auto it = v1.begin();it!=v1.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    //inserting into vector
    vector<int> v6(2,10);
    vector<int> v7(2,30);
    v6.insert(v6.begin(),300);
    v6.insert(v6.begin()+2,12);
    v6.insert(v6.begin()+3,v7.begin(),v7.end());
    v6.push_back(13);
    for(auto it : v6){
        cout<<it<<" ";
    }cout<<endl;

    //swaping vectors
    vector <int> v8;
    v8.swap(v7);
    cout<<v6.size()<<endl;
    cout<<v8.empty()<<endl;
    v8.clear();
    cout<<v8.empty()<<endl;
}

void listCpp(){
    list<int> l1;
    /*
        Everting is same as vector
    */
}

void dequeCpp(){
    deque<int> dq1;
    /*
        similar to that of list and vector
    */
}

void stackCpp(){
    //Works on LIFO operation (last in first out)
    //Indexing not possible
    //Every Operation take O(n) time complexicity
}
void mapCpp(){
    //map is a container which stores everthing as a key value pair
    //map stores everything in the sorted order of keys

    //Declaration and Initialisation
    map<int,int> map1;
    map1[2]=10;
    map1.emplace(1,3);
    map1.insert({3,15});
    cout<<map1[2]<<endl;

    map<int,pair<int,int>> map2;
    map2[1]={12,2};
    map2[2]={10,9};
    map2[3]={13,12};


    //Iterrating map
    for(auto it : map1){
        cout<<it.first<<" ";//prints key
        cout<<it.second<<" ";//prints value
        cout<<endl;
    }
    for(auto it : map2){
        cout<<it.first<<" ";//prints key
        cout<<it.second.first<<" "<<it.second.second;//prints value
        cout<<endl;
    }
}
int main(){
    // pairsCpp();
    // vectorsCpp();
    mapCpp();
    return 0;
}