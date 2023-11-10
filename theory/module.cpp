/**
 * $ clang++    -stdlib=libc++ \
 *              -std=c++2a \
 *              -fimplicit-modules \
 *              -fimplicit-module-maps \
 *              -fprebuild-module-path=. \          # find all .pcm files in the folder
 *              module.cpp hse.cpp -o module_out
 * 
 * clang++ -stdlib=libc++ -std=c++2a -fimplicit-modules -fimplicit-module-maps -fprebuild-module-path=. module.cpp hse.cpp -o module_out
*/

import hse;
import <iostream>;

int main() {
    std::cout << hse::GetString();
}