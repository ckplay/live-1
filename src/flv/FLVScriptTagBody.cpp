/*
 * FLVScriptTagBody.cpp
 *
 *  Created on: 2014-12-20
 *      Author: maygolf
 */
#include <iostream>

#include "FLVScriptTagBody.h"

using namespace std;

FLVScriptTagBody::FLVScriptTagBody()
{

}
FLVScriptTagBody::~FLVScriptTagBody()
{
	cout << "~FLVScriptTagBody" <<this << endl;
}

void FLVScriptTagBody::decoderBoby(Bytes *bytes)
{
	setData(bytes);
	obj.decoder(bytes);
}
