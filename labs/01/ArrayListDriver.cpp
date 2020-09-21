#include "ArrayList.h"
#include "ArrayListTester.h"

int main() {
    ArrayListTester<ArrayList<int>> tester;

    std::cout << "Starting Test Run" << std::endl;
    tester.run();
    std::cout << "Finishing Test Run" << std::endl;
    tester.summary();

    return 0;
}
