#include<iostream>
#include<ranges>

using std::cout;
using std::ranges::ioat_view;

auto range = [](size_t begin, size_t end){ return iota_view(begin,end); };

int x[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };

int main() {

    for (auto a : range(0, 16) ) {
          for (auto b : range(0, 16)) {      
                for (auto c = a; c < b; c++) {
                       cout << x[c];
                }
          cout << "-";
          }
    cout << " " << endl;
    }
}

