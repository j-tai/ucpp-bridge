#pragma once

class __empty {};

#define _Accept(expr) if (true)
#define _Actor class
#define _At ,
#define _CatchResume catch
// _Cormonitor defined by uC++.h
#define _Coroutine class
#define _Disable if (true)
#define _Else else
#define _Enable if (true)
#define _Event class
#define _Finally catch (const __empty&)
// _Monitor defined by uC++.h
#define _Mutex
#define _Nomutex
#define _Resume throw
#define _Select(expr) if (true)
#define _Task class
#define _Throw throw
#define _When(condition)
#define and else
#define or else
