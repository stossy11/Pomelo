// SPDX-FileCopyrightText: 2023 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <cstdint>
#include <map>
#include <vector>

namespace NxTzdb {

// clang-format off
const static std::map<const char*, const std::vector<uint8_t>> arctic = 
{
{"Longyearbyen",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00,
0x00, 0x04, 0x00, 0x00, 0x00, 0x12, 0xff, 0xff, 0xff, 0xff, 0x6f, 0xa2, 0x61, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x9b,
0x0c, 0x17, 0x60, 0xff, 0xff, 0xff, 0xff, 0x9b, 0xd5, 0xda, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x9c, 0xd9, 0xae, 0x90,
0xff, 0xff, 0xff, 0xff, 0x9d, 0xa4, 0xb5, 0x90, 0xff, 0xff, 0xff, 0xff, 0x9e, 0xb9, 0x90, 0x90, 0xff, 0xff, 0xff,
0xff, 0x9f, 0x84, 0x97, 0x90, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x09, 0x71, 0x90, 0xff, 0xff, 0xff, 0xff, 0xcc, 0xe7,
0x4b, 0x10, 0xff, 0xff, 0xff, 0xff, 0xcd, 0xa9, 0x17, 0x90, 0xff, 0xff, 0xff, 0xff, 0xce, 0xa2, 0x43, 0x10, 0xff,
0xff, 0xff, 0xff, 0xcf, 0x92, 0x34, 0x10, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x82, 0x25, 0x10, 0xff, 0xff, 0xff, 0xff,
0xd1, 0x72, 0x16, 0x10, 0xff, 0xff, 0xff, 0xff, 0xd1, 0xb6, 0x96, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x58, 0xbe,
0x80, 0xff, 0xff, 0xff, 0xff, 0xd2, 0xa1, 0x4f, 0x10, 0xff, 0xff, 0xff, 0xff, 0xd3, 0x63, 0x1b, 0x90, 0xff, 0xff,
0xff, 0xff, 0xd4, 0x4b, 0x23, 0x90, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x39, 0xd1, 0x20, 0xff, 0xff, 0xff, 0xff, 0xd5,
0x67, 0xe7, 0x90, 0xff, 0xff, 0xff, 0xff, 0xd5, 0xa8, 0x73, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd6, 0x29, 0xb4, 0x10,
0xff, 0xff, 0xff, 0xff, 0xd7, 0x2c, 0x1a, 0x10, 0xff, 0xff, 0xff, 0xff, 0xd8, 0x09, 0x96, 0x10, 0xff, 0xff, 0xff,
0xff, 0xd9, 0x02, 0xc1, 0x90, 0xff, 0xff, 0xff, 0xff, 0xd9, 0xe9, 0x78, 0x10, 0x00, 0x00, 0x00, 0x00, 0x13, 0x4d,
0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x14, 0x33, 0xfa, 0x90, 0x00, 0x00, 0x00, 0x00, 0x15, 0x23, 0xeb, 0x90, 0x00,
0x00, 0x00, 0x00, 0x16, 0x13, 0xdc, 0x90, 0x00, 0x00, 0x00, 0x00, 0x17, 0x03, 0xcd, 0x90, 0x00, 0x00, 0x00, 0x00,
0x17, 0xf3, 0xbe, 0x90, 0x00, 0x00, 0x00, 0x00, 0x18, 0xe3, 0xaf, 0x90, 0x00, 0x00, 0x00, 0x00, 0x19, 0xd3, 0xa0,
0x90, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xc3, 0x91, 0x90, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xbc, 0xbd, 0x10, 0x00, 0x00,
0x00, 0x00, 0x1c, 0xac, 0xae, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1d, 0x9c, 0x9f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1e,
0x8c, 0x90, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x7c, 0x81, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x6c, 0x72, 0x10,
0x00, 0x00, 0x00, 0x00, 0x21, 0x5c, 0x63, 0x10, 0x00, 0x00, 0x00, 0x00, 0x22, 0x4c, 0x54, 0x10, 0x00, 0x00, 0x00,
0x00, 0x23, 0x3c, 0x45, 0x10, 0x00, 0x00, 0x00, 0x00, 0x24, 0x2c, 0x36, 0x10, 0x00, 0x00, 0x00, 0x00, 0x25, 0x1c,
0x27, 0x10, 0x00, 0x00, 0x00, 0x00, 0x26, 0x0c, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x27, 0x05, 0x43, 0x90, 0x00,
0x00, 0x00, 0x00, 0x27, 0xf5, 0x34, 0x90, 0x00, 0x00, 0x00, 0x00, 0x28, 0xe5, 0x25, 0x90, 0x00, 0x00, 0x00, 0x00,
0x29, 0xd5, 0x16, 0x90, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xc5, 0x07, 0x90, 0x00, 0x00, 0x00, 0x00, 0x2b, 0xb4, 0xf8,
0x90, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xa4, 0xe9, 0x90, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x94, 0xda, 0x90, 0x00, 0x00,
0x00, 0x00, 0x2e, 0x84, 0xcb, 0x90, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x74, 0xbc, 0x90, 0x00, 0x00, 0x00, 0x00, 0x30,
0x64, 0xad, 0x90, 0x00, 0x00, 0x00, 0x00, 0x31, 0x5d, 0xd9, 0x10, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x00, 0x00, 0x0c, 0x88, 0x00,
0x00, 0x00, 0x00, 0x1c, 0x20, 0x01, 0x04, 0x00, 0x00, 0x0e, 0x10, 0x00, 0x09, 0x00, 0x00, 0x2a, 0x30, 0x01, 0x0d,
0x4c, 0x4d, 0x54, 0x00, 0x43, 0x45, 0x53, 0x54, 0x00, 0x43, 0x45, 0x54, 0x00, 0x43, 0x45, 0x4d, 0x54, 0x00, 0x0a,
0x43, 0x45, 0x54, 0x2d, 0x31, 0x43, 0x45, 0x53, 0x54, 0x2c, 0x4d, 0x33, 0x2e, 0x35, 0x2e, 0x30, 0x2c, 0x4d, 0x31,
0x30, 0x2e, 0x35, 0x2e, 0x30, 0x2f, 0x33, 0x0a, }},
};
// clang-format on

} // namespace NxTzdb
