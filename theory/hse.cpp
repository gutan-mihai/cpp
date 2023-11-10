/**
 * $ clang++    -stdlib=libc++ \                    # use libcxx
 *              -std=c++2a \                        # c++20
 *              -fimplicit-modules \                # assume modules
 *              -fimplicit-module-maps \            # dump all from hse to be exported
 *              -c hse.cpp -Xclang \                #
 *              -emit-module-interface -o hse.pcm   # precomplied module
 * 
 * clang++ -stdlib=libc++ -std=c++2a -fimplicit-modules -fimplicit-module-maps -c hse.cpp -Xclang -emit-module-interface -o hse.pcm
*/

export module hse;
import <string>;

namespace hse {
    std::string GetStringPrivate() { return "Deadline is extended"; }
    export auto GetString() { return GetStringPrivate(); }
}