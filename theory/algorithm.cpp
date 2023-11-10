#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

void foo(int a) {
    cout << "foo: " << a << endl;
}

int main() {
    /**
     * sort
    */
    vector<int> v_sort = {5, 1, 2, 9, 8, 6, 2, 3, 4, 7, 6};
    sort(v_sort.begin(), v_sort.end()); // By default is ASC
    for (int num : v_sort)
    {
        cout << "sort: " << num << endl;
    }

    sort(v_sort.begin(), v_sort.end(), [](int a, int b) {
        return a > b; // DESC sorting
    });
    for (int num : v_sort)
    {
        cout << "sort by predicate: " << num << endl;
    }

    /**
     * find, find_if
    */
    vector<int> v_find = {7, 5, 2, 6, 9, 8, 1, 4, 2, 3};
    auto result_find = find(v_find.begin(), v_find.end(), 2);
    if (result_find != v_find.end()) {
        cout << "find: " << *result_find << endl;
    }

    auto result_findif = find_if(v_find.begin(), v_find.end(), [](int num) {
        return num == 10;
    });
    if (result_findif != v_find.end()) {
        cout << "find if: " << *result_findif << endl;
    }

    /**
     * copy, copy_if
    */
    vector<int> v_copy = {4, 5, 9, 7, 1, 2, 3, 6, 4, 5};
    vector<int> v_copied;
    copy(v_copy.begin(), v_copy.end(), back_inserter(v_copied));
    for (int num : v_copied)
    {
        cout << "copy: " << num << endl;
    }
    
    vector<int> vif_copied;
    copy_if(v_copy.begin(), v_copy.end(), back_inserter(vif_copied), [](int num) {
        return num % 2 == 0;
    });
    for (int num : vif_copied)
    {
        cout << "copy if: " << num << endl;
    }

    /**
     * remove, remove_if
    */
    vector<int> v_remove = {1, 5, 4, 2, 1, 3, 7, 9, 2, 8, 1};
    auto result_rm = remove(v_remove.begin(), v_remove.end(), 2);
    v_remove.erase(result_rm, v_remove.end());
    for (int num : v_remove)
    {
        cout << "remove: " << num << endl;
    }

    auto result_rmif = remove_if(v_remove.begin(), v_remove.end(), [](int num) {
        return num == 1;
    });
    v_remove.erase(result_rmif, v_remove.end());
    for (int num : v_remove)
    {
        cout << "remove if: " << num << endl;
    }

    /**
     * max_element
    */
    vector<int> v_max = {4, 8, 2, 1, 7, 9, 3, 2, 5};
    auto result_max = max_element(v_max.begin(), v_max.end());
    cout << "max element: " << *result_max << endl;

    /**
     * min_element
    */
    const int MIN_SIZE = 6;
    int v_min[MIN_SIZE] = {9, 6, 3, 8, 4, 1};
    // auto result_min = min_element(v_min, v_min + MIN_SIZE);
    auto result_min = min_element(begin(v_min), end(v_min));
    cout << "min element: " << *result_min << endl;

    /**
     * accumulate
     * need to: #include <numeric>
    */
    vector<int> v_accumulate = {3, 4, 6, 1, 2, 8, 5};
    auto result_acc = accumulate(v_accumulate.begin(), v_accumulate.end(), 0); // 0 - initial sum
    cout << "accumulate default: " << result_acc << endl;

    auto result_acc_predicate = accumulate(v_accumulate.begin(), v_accumulate.end(), 1, [](int total, int num) {
        return total * num; // at begin, total is 1
    });
    cout << "accumulate predicate: " << result_acc_predicate << endl;

    /**
     * equal, mismatch
    */
   vector<int> v_equal1 = {4, 2, 7, 5, 6, 8, 9, 1, 2};
   vector<int> v_equal2 = {4, 2, 7, 5, 6, 8, 9, 1, 2, 5};
   bool is_equal1 = equal(v_equal1.begin(), v_equal1.end(), v_equal2.begin()); // equals
   bool is_equal2 = equal(v_equal1.begin(), v_equal1.end(), v_equal2.begin(), v_equal2.end()); // not equals
   cout << "is_equal1: " << is_equal1 << " is_equal2: " << is_equal2 << endl;

   bool is_equal3 = equal(v_equal1.begin(), v_equal1.end(), v_equal2.begin(), v_equal2.end(), [](int a, int b) {
    return a == b;
   });
   cout << "is_equal3: " << is_equal3 << endl;

   vector<int> v_mismatch1 = {3, 2, 1, 5, 9, 8, 7, 4, 6, 5, 2, 4};
   vector<int> v_mismatch2 = {3, 2, 1, 5, 9, 8, 7, 4, 6, 5, 2, 4};
   auto result = mismatch(v_mismatch1.begin(), v_mismatch1.end(), v_mismatch2.begin(), v_mismatch2.end());
   if (result.first == v_mismatch1.end() && result.second == v_mismatch2.end()) {
        cout << "mismatch" << endl;
   } else {
        cout << "not mismatch" << endl;
   }

   /**
    * for_each
   */
    vector<int> v_for_each = {8, 4, 6, 9, 2, 1, 7, 3};
    for_each(v_for_each.begin(), v_for_each.end(), foo);
    for_each(v_for_each.begin(), v_for_each.end(), [](int a) {
        cout << "a: " << a << endl;
    });

    /**
     * unique, unique_copy
    */
    vector<int> v_unique1 = {8, 5, 2, 2, 3, 1, 1, 1};
    vector<int> v_unique2;
    auto it_unique = unique(v_unique1.begin(), v_unique1.end());
    // v_unique1.erase(it_unique, v_unique1.end()); // remove sorted elements
    for_each(v_unique1.begin(), it_unique, [](int value) {
        cout << "unique: " << value << endl;
    });

    unique_copy(v_unique1.begin(), v_unique1.end(), back_inserter(v_unique2));
    for (int num : v_unique2) {
        cout << "unique_copy: " << num << endl;
    }

    /**
     * random_shuffle
     * need to: #include <ctime>
    */
   vector<int> v_random_shuffle = {6, 1, 4, 7, 3, 2, 9, 8};
   srand(time(NULL)); // get a random array every time
   random_shuffle(v_random_shuffle.begin(), v_random_shuffle.end());
   for (int num : v_random_shuffle) {
    cout << "random_shuffle: " << num << endl;
   }
}

