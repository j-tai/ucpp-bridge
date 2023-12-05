#pragma once

namespace {
/// @brief Pretends to create an instance of any type.
/// @tparam T The type to create an instance of.
/// @param ... ignored
/// @return An object of type T, supposedly.
template <typename T> T __convert(...) { throw 0; }

/// @brief An empty class.
class __empty {};
} // namespace
