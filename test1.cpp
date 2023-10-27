#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

class HashTable {
private:
    vector<list<pair<string, int>>> table;
    int size;

    int hash(string key) {
        int hash = 0;
        for (char c : key) {
            hash += c;
        }
        return hash % size;
    }

public:
    HashTable(int size) {
        this->size = size;
        table.resize(size);
    }

    void insert(string key, int value) {
        int index = hash(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[index].push_back(make_pair(key, value));
    }

    int get(string key) {
        int index = hash(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return -1;
    }

    void remove(string key) {
        int index = hash(key);
        for (auto it = table[index].begin(); it != table[index].end(); it++) {
            if (it->first == key) {
                table[index].erase(it);
                return;
            }
        }
    }
};

int main() {
    HashTable table(10);
    table.insert("apple", 5);
    table.insert("banana", 7);
    table.insert("orange", 3);
    table.insert("grape", 2);
    table.insert("kiwi", 4);

    cout << "apple: " << table.get("apple") << endl;
    cout << "banana: " << table.get("banana") << endl;
    cout << "orange: " << table.get("orange") << endl;
    cout << "grape: " << table.get("grape") << endl;
    cout << "kiwi: " << table.get("kiwi") << endl;

    table.remove("orange");

    cout << "orange: " << table.get("orange") << endl;

    return 0;
}
