#pragma once

#include <cstdint>

/// @brief Yields to the scheduler.
/// @note This is a static member function of `uBaseTask`.
void yield();

/// @brief Yields to the scheduler the given number of times.
/// @param times number of times to yield
/// @note This is a static member function of `uBaseTask`.
void yield(size_t times);
