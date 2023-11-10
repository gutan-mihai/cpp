#include <concepts>

/**
 * Шаблоны нужны не только когда есть разные аргументы, но и для того, чтобы понять что то о типе
*/

// Хак с SFINAE (Substitution Failure Is Not An Error; неудавшаяся подстановка — не ошибка)
template<bool, class A, class B> struct If;
template<class A, class B> struct If<true, A, B> {
    static const int value = A::value;
};
template<class A, class B> struct If<false, A, B> {
    static const int value = B::value;
};

// Хак с SFINAE (Substitution Failure Is Not An Error; неудавшаяся подстановка — не ошибка)
template<bool, class T = void> struct EnableIf;
template<class T> struct EnableIf<false, T> {};
template<class T> struct EnableIf<true, T> {
    using type = T;
};

// Концепты, с C++20
template <class T> concept Integral = std::is_integral<T>::value;
template <class T> concept SignedIntegral = Integral<T> && std::is_signed<T>::value;
template <class T> concept UnsignedIntegral = Integral<T> && !SignedIntegral<T>;
template <typename T> concept EqualityComparable = requires(T a, T b) {
    {a == b} -> bool;
}

template<EqualityComparable T> void f(T);