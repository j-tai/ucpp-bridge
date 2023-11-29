#ifndef UCPP_BRIDGE_H_
#define UCPP_BRIDGE_H_

// Helpers
class __empty {};

class __accept {};
template <typename T> __accept operator||(const __accept&, const T&) {
	return __accept{};
}

// uC++ keywords
#define _Accept(expr) (__accept{} || expr)
#define _At ,
#define _CatchResume catch
#define _Cormonitor class
#define _Coroutine class
#define _Disable if (true)
#define _Else else
#define _Enable if (true)
#define _Event class
#define _Finally catch (const __empty&)
#define _Monitor class
#define _Mutex
#define _Nomutex
#define _Resume throw
#define _Task class
#define _Throw throw
#define _When(condition)
#define or else
#define and else

// Fill in uC++ internals
#define __U_MAXENTRYBITS__ 128

// Include uC++ headers
#define override // Remove the override specifier to avoid some errors
#include "uCPP/source/src/kernel/uC++.h"
#include "uCPP/source/src/library/fstream.h"
#include "uCPP/source/src/library/ostream.h"
#undef override

#endif
