#include <iostream>
#include <list>
using namespace std;
class HashTable{
    public:
        HashTable(int c);
        void insertItem(int key, int data);
        void deleteItem(int key, int data);
        int checkPrime(int n);
        int getPrime(int n);
        int hashFunction(int key);
        void displayHash();
    private:
        int capacity;
        list<int> *table;
};
HashTable::HashTable(int c){
    // get table size using getprime() and save in capacity
    // allocate dynamic array using list
}
int HashTable::hashFunction(int key){
    return (key%capacity);
}
void HashTable::insertItem(int key, int data){
    // get table index using hash function
    // and push data into table
}
void HashTable::deleteItem(int key, int data){
    // get table index using hash function
    // search the table where the index matches and
    // deleted if the data matches.
}
int HashTable::checkPrime(int n){
    //this function is called by getprime function
    //to check function parameter is prime number.
}
int HashTable::getPrime(int n){
    //return the same or larger prime number
}
void HashTable::displayHash()
{
    for (int i = 0; i < capacity; i++)
    {
        cout << "table[" << i << "]";
        for (auto x : table[i])
            cout << " --> " << x;
        cout << endl;
    }  
}

