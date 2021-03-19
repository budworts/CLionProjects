#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v{1, 2, 3, 4, 5, 6};
    string prefix{"0"};

    for_each(begin(v), end(v), [](int x) {
                 cout << x << endl;
             }
    );

    for_each(begin(v), end(v), [&prefix](int x) {
                 cout << prefix << x << endl;
             }
    );

//    vector<int> r;
//    for_each(begin(v), end(v), [](int x) -> vector<int> {
//                 if (x % 2) {
//                     return {1, 2};
//                 } else {
//                     return {3, 4};
//                 }
//             }
//    );
//
//    for ( auto i: r) {
//        cout << i << endl;
//    }

    return 0;
}
