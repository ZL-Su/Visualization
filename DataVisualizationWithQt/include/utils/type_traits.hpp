#pragma once
#include <type_traits>

namespace dplab {
template<typename T> struct primitive_type {
	using type = std::decay_t<T>;
	static_assert(std::is_fundamental_v<type>, "T in primitive_type<T> must be a primitive type.");
};
template<typename T>
struct primitive_type<T*> {
	using type = typename primitive_type<T>::type;
};
template<typename T, size_t _N>
struct primitive_type<T[_N]> {
	using type = typename primitive_type<T>::type;
};
template<typename T>
using primitive_type_t = typename primitive_type<T>::type;
}