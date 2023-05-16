#include <iostream>
#include <rxcpp/rx.hpp>

int main() {
    rxcpp::observable<>::range(1, 5)
        .as_blocking()
        .subscribe([](int value){ std::cout << value << std::endl;},
                   [](){});
    return 0;
}
