//
// SerialConfig.cpp
//
// $Id: //poco/Main/IO/src/IOChannelConfig.cpp#1 $
//
// Library: Foundation
// Package: IO
// Module:  IOChannelConfig
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/IOChannelConfig.h"
#include "Poco/Exception.h"


namespace Poco {


IOChannelConfig::IOChannelConfig(const std::string& name, ChannelType type, int timeoutMS):
	_name(name),
	_type(type),
	_timeoutMS(timeoutMS)
{
}


IOChannelConfig::~IOChannelConfig()
{
}



void IOChannelConfig::setTimeout(int timeoutMS)
{
	if (timeoutMS < 0 && INFINITE_TIMEOUT != timeoutMS)
		throw InvalidArgumentException("Invalid timeout value");

	_timeoutMS = timeoutMS;
}


} // namespace Poco::IO
