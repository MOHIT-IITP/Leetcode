#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> removeDuplicate(const std::vector<int>& lst) {
    std::vector<int> new_lst;
    for (int i = 0; i < lst.size(); ++i) {
        if (std::find(new_lst.begin(), new_lst.end(), lst[i]) == new_lst.end()) {
            new_lst.push_back(lst[i]);
        } else {
            new_lst.push_back(-1); // Assuming you want to replace duplicates with -1
        }
    }
    return new_lst;
}

int main() {
    std::vector<int> lst = {1, 1, 2,1,4, 4, 5};
    std::vector<int> result = removeDuplicate(lst);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
