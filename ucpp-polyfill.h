#pragma once

#include <cstdint>

// Include these first, so that we don't mess up the delivery() functions inside
#include "uCPP/source/src/library/uActor.h"
#include "uCPP/source/src/library/uFuture.h"

/// Utilities
namespace {
template <typename T> T __convert(...) { throw 0; }
} // namespace

/// @brief Yields to the scheduler.
/// @note This is a static member function of `uBaseTask`.
void yield();

/// @brief Yields to the scheduler the given number of times.
/// @param times number of times to yield
/// @note This is a static member function of `uBaseTask`.
void yield(size_t times);

#define delivery(...) delivery(__convert<uBaseEvent*>(__VA_ARGS__))
