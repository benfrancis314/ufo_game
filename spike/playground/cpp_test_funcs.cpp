#include <vector>
#include <unordered_map>
#include <iostream>
    
std::vector< std::vector<int> > multiplicity(std::vector<int> arr) {
    std::unordered_map<int, int> num_count;
    // for (int num : arr) {
    //     if (num_count.contains(num)) ++num_count[num];
    //     else {
    //         num_count.emplace(num, 1); // or insert
    //         }
    // }
    // return num_count;
    for (auto num : arr) {
        std::cout << num << ' ';
    }
}

void multiplicity_test(std::vector<int> arr) {
    std::unordered_map<int, int> num_count;
    // for (int num : arr) {
    //     if (num_count.contains(num)) ++num_count[num];
    //     else {
    //         num_count.emplace(num, 1); // or insert
    //         }
    // }
    // return num_count;
    for (auto num : arr) {
        std::cout << num << ' ';
    }
}