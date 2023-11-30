#pragma once

#include "ucpp-keywords.h"
#include "ucpp-polyfill.h"

// Fill in uC++ internals
#define __U_MAXENTRYBITS__ 128

// Main uC++ include
#define override // Remove the override specifier to avoid some errors
#include "uCPP/source/src/kernel/uC++.h"
#undef override
// osacquire, etc.
#include "uCPP/source/src/library/fstream.h"
#include "uCPP/source/src/library/ostream.h"
// Global prng(); also acts as a polyfill since _Task classes contain a prng
// member that C++ doesn't know about
#include "uCPP/source/src/library/uPRNG.h"
