//
// Created by Halaha on 16-Apr-26.
//

#ifndef TEST_C_TESTCONTEXPR_H
#define TEST_C_TESTCONTEXPR_H

namespace ConstexprTest{

    template<typename T>
    void test() {
        if  (std::is_integral_v<T>) {
            std::cout << "Integral\n";
        }
        else if (true) {
            std::cout << "Test";
        }
        else {
            std::string a = "hello"; // ❌ would be error normally
        }
    }



}

#endif //TEST_C_TESTCONTEXPR_H