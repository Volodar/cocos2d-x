/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __CCPHYSICS_CONTACT_INFO_CHIPMUNK_H__
#define __CCPHYSICS_CONTACT_INFO_CHIPMUNK_H__

#include "ccConfig.h"
#ifdef CC_USE_PHYSICS

#include "chipmunk.h"
#include "CCPlatformMacros.h"
NS_CC_BEGIN

class PhysicsContact;
class PhysicsContactInfo
{
public:
    inline PhysicsContact* getContact() const { return _contact; }
    
private:
    PhysicsContactInfo(PhysicsContact* contact);
    ~PhysicsContactInfo();
    
private:
    PhysicsContact* _contact;
    
    friend class PhysicsContact;
};

NS_CC_END

#endif // CC_USE_PHYSICS
#endif // __CCPHYSICS_CONTACT_INFO_CHIPMUNK_H__
