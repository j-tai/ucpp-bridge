#ifndef UCPP_BRIDGE_H_
#define UCPP_BRIDGE_H_

// Helpers
class __ucpp_bridge_empty_class {};

// uC++ keywords
#define _Accept if
#define _At +
#define _CatchResume catch
#define _Cormonitor class
#define _Coroutine class
#define _Disable if (true)
#define _Else else
#define _Enable if (true)
#define _Event class
#define _Finally catch (__ucpp_bridge_empty_class&)
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
#include "uCPP/source/src/kernel/uC++.h"
#include "uCPP/source/src/library/fstream.h"
#include "uCPP/source/src/library/ostream.h"

#endif
