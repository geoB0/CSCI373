#include "CircularArrayList.h"
#include "ArrayListTester.h"

int main() {
    ArrayListTester<CircularArrayList<int>> tester;

    std::cout << "Starting Test Run" << std::endl;
    tester.run();
    std::cout << "Finishing Test Run" << std::endl;
    tester.summary();

    return 0;
}
