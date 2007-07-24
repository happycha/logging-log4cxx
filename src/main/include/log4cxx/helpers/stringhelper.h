/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _LOG4CXX_HELPERS_STRING_HELPER_H
#define _LOG4CXX_HELPERS_STRING_HELPER_H

#include <log4cxx/logstring.h>
#include <vector>


namespace log4cxx
{
    namespace helpers
    {
        class Pool;
                /**
                String manipulation routines
                */
        class LOG4CXX_EXPORT StringHelper
        {
           public:
            static std::string trim(const std::string& s);
            static bool startsWith(const std::string& s, const std::string& suffix);
            static bool endsWith(const std::string& s, const std::string& suffix);
            static bool equalsIgnoreCase(const std::string& s1,
                 const char* upper, const char* lower);


            static int toInt(const std::string& s);
            static log4cxx_int64_t toInt64(const std::string& s);

            static LogString toString(int i, log4cxx::helpers::Pool& pool);
            static void toString(int i, Pool& pool, std::string& s);

            static LogString toString(log4cxx_int64_t i, log4cxx::helpers::Pool& pool);
            static void toString(log4cxx_int64_t i, Pool& pool, std::string& s);

            static LogString toString(size_t i, log4cxx::helpers::Pool& pool);
            static void toString(size_t i, Pool& pool, std::string& s);

            static LogString toString(bool val);

            static std::string toLowerCase(const std::string& s);

            static bool getline(std::string& buf, std::string& line);

            static LogString format(const LogString& pattern, const std::vector<LogString>& params);

#if LOG4CXX_HAS_WCHAR_T
            static std::wstring trim(const std::wstring& s);
            static bool startsWith(const std::wstring& s, const std::wstring& suffix);
            static bool endsWith(const std::wstring& s, const std::wstring& suffix);
            static bool equalsIgnoreCase(const std::wstring& s1,
                  const wchar_t* upper, const wchar_t* lower);
            static int toInt(const std::wstring& s);
            static log4cxx_int64_t toInt64(const std::wstring& s);
            static void toString(int i, Pool& pool, std::wstring& s);
            static void toString(log4cxx_int64_t i, Pool& pool, std::wstring& s);
            static void toString(size_t i, Pool& pool, std::wstring& s);
            static std::wstring toLowerCase(const std::wstring& s);
            static bool getline(std::wstring& buf, std::wstring& line);
#endif

        };
    }
}

#endif //_LOG4CXX_HELPERS_STRING_HELPER_H