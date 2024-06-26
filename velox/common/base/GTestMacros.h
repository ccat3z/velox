/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#ifdef VELOX_DISABLE_GOOGLETEST
// VELOX_FRIEND_TEST macro is only used when testing is enabled.
// Replacing it with "nothing" is okay when testing is disabled.
#define VELOX_FRIEND_TEST(X, Y)
#else
// Same as FRIEND_TEST(X, Y) defined in gtest/gtest_prod.h
#define VELOX_FRIEND_TEST(test_case_name, test_name) \
  friend class test_case_name##_##test_name##_Test
#endif
