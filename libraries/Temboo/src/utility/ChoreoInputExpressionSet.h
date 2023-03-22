/*
###############################################################################
#
# Temboo Arduino library
#
# Copyright 2017, Temboo Inc.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
# http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
# either express or implied. See the License for the specific
# language governing permissions and limitations under the License.
#
###############################################################################
*/

#ifndef CHOREOINPUTEXPRESSIONSET_H_
#define CHOREOINPUTEXPRESSIONSET_H_

#include <stddef.h>
#include "TembooGlobal.h"
#include "ChoreoInputExpression.h"

class ChoreoInputExpressionSet {

    public:
        ChoreoInputExpressionSet();
        ~ChoreoInputExpressionSet();
        void put(const char* name, const char* value);
        const char* get(const char* name) const;
        bool isEmpty() const                     {return m_first == NULL;}
        const ChoreoInputExpression* getFirstInput() const {return m_first;}

    protected:
        ChoreoInputExpression* m_first;
};

#endif //CHOREOINPUTEXPRESSIONSET_H_