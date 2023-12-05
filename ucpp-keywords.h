#pragma once

#include "ucpp-helpers.h"

#define _Accept(expr) if (__convert<bool>())
#define _Actor class
#define _At ,
#define _CatchResume catch
// _Cormonitor defined by uC++.h
#define _Coroutine class
#define _Disable while (__convert<bool>())
#define _Else else
#define _Enable while (__convert<bool>())
#define _Event class
#define _Finally catch (const __empty&)
// _Monitor defined by uC++.h
#define _Mutex
#define _Nomutex
#define _Resume throw
#define _Select(expr) if (__convert<bool>())
#define _Task class
#define _Throw throw
#define _When(condition)
#define and else
#define or else
