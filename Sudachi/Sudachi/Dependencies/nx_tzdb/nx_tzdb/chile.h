// SPDX-FileCopyrightText: 2023 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <cstdint>
#include <map>
#include <vector>

namespace NxTzdb {

// clang-format off
const static std::map<const char*, const std::vector<uint8_t>> chile = 
{
{"Continental",
{0x54, 0x5a, 0x69, 0x66, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00,
0x00, 0x06, 0x00, 0x00, 0x00, 0x14, 0xff, 0xff, 0xff, 0xff, 0x69, 0x87, 0x1d, 0xc5, 0xff, 0xff, 0xff, 0xff, 0x8f,
0x30, 0x47, 0x45, 0xff, 0xff, 0xff, 0xff, 0x9b, 0x5c, 0xe5, 0x50, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x7c, 0xe2, 0xc5,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x00, 0x71, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x5e, 0x77, 0xc5, 0xff, 0xff, 0xff,
0xff, 0xb1, 0x77, 0x3d, 0x40, 0xff, 0xff, 0xff, 0xff, 0xb2, 0x41, 0x00, 0xd0, 0xff, 0xff, 0xff, 0xff, 0xb3, 0x58,
0x70, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xb4, 0x22, 0x34, 0x50, 0xff, 0xff, 0xff, 0xff, 0xb5, 0x39, 0xa4, 0x40, 0xff,
0xff, 0xff, 0xff, 0xb6, 0x03, 0x67, 0xd0, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x1a, 0xd7, 0xc0, 0xff, 0xff, 0xff, 0xff,
0xb7, 0xe4, 0x9b, 0x50, 0xff, 0xff, 0xff, 0xff, 0xb8, 0xfd, 0x5c, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xb9, 0xc7, 0x20,
0x50, 0xff, 0xff, 0xff, 0xff, 0xcc, 0x1c, 0x6e, 0x40, 0xff, 0xff, 0xff, 0xff, 0xcc, 0x6c, 0xe7, 0xd0, 0xff, 0xff,
0xff, 0xff, 0xd3, 0xdc, 0x8f, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xd4, 0x17, 0xd5, 0x30, 0xff, 0xff, 0xff, 0xff, 0xd5,
0x33, 0x55, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x76, 0x92, 0x40, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xd1, 0x3c, 0x40,
0xff, 0xff, 0xff, 0xff, 0xfe, 0x92, 0xfa, 0xb0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcc, 0xcd, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x72, 0xdc, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x75, 0x50, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40,
0x49, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x55, 0x32, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x2b, 0xb0, 0x00,
0x00, 0x00, 0x00, 0x05, 0x3e, 0x4f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0d, 0xb0, 0x00, 0x00, 0x00, 0x00,
0x07, 0x0b, 0xbc, 0x40, 0x00, 0x00, 0x00, 0x00, 0x07, 0xdf, 0xef, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x08, 0xfe, 0x13,
0x40, 0x00, 0x00, 0x00, 0x00, 0x09, 0xbf, 0xd1, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xdd, 0xf5, 0x40, 0x00, 0x00,
0x00, 0x00, 0x0b, 0xa8, 0xee, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xbd, 0xd7, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0d,
0x88, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x9d, 0xb9, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x68, 0xb2, 0x30,
0x00, 0x00, 0x00, 0x00, 0x10, 0x86, 0xd5, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x11, 0x48, 0x94, 0x30, 0x00, 0x00, 0x00,
0x00, 0x12, 0x66, 0xb7, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x13, 0x28, 0x76, 0x30, 0x00, 0x00, 0x00, 0x00, 0x14, 0x46,
0x99, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x15, 0x11, 0x92, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x16, 0x26, 0x7b, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x16, 0xf1, 0x74, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x18, 0x06, 0x5d, 0xc0, 0x00, 0x00, 0x00, 0x00,
0x18, 0xd1, 0x56, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x19, 0xe6, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xb1, 0x38,
0xb0, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xcf, 0x5c, 0x40, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x91, 0x1a, 0xb0, 0x00, 0x00,
0x00, 0x00, 0x1d, 0xaf, 0x3e, 0x40, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x70, 0xfc, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x1f,
0x8f, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x20, 0x7f, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x21, 0x6f, 0x02, 0x40,
0x00, 0x00, 0x00, 0x00, 0x22, 0x39, 0xfb, 0x30, 0x00, 0x00, 0x00, 0x00, 0x23, 0x4e, 0xe4, 0x40, 0x00, 0x00, 0x00,
0x00, 0x24, 0x19, 0xdd, 0x30, 0x00, 0x00, 0x00, 0x00, 0x25, 0x38, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x25, 0xf9,
0xbf, 0x30, 0x00, 0x00, 0x00, 0x00, 0x26, 0xf2, 0xf8, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x27, 0xd9, 0xa1, 0x30, 0x00,
0x00, 0x00, 0x00, 0x28, 0xf7, 0xc4, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x29, 0xc2, 0xbd, 0xb0, 0x00, 0x00, 0x00, 0x00,
0x2a, 0xd7, 0xa6, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x2b, 0xa2, 0x9f, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xb7, 0x88,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x82, 0x81, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x97, 0x6a, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x2f, 0x62, 0x63, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x30, 0x80, 0x87, 0x40, 0x00, 0x00, 0x00, 0x00, 0x31,
0x42, 0x45, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x32, 0x60, 0x69, 0x40, 0x00, 0x00, 0x00, 0x00, 0x33, 0x3d, 0xd7, 0x30,
0x00, 0x00, 0x00, 0x00, 0x34, 0x40, 0x4b, 0x40, 0x00, 0x00, 0x00, 0x00, 0x35, 0x0b, 0x44, 0x30, 0x00, 0x00, 0x00,
0x00, 0x36, 0x0d, 0xb8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x37, 0x06, 0xd5, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00,
0x0f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x38, 0xcb, 0x08, 0x30, 0x00, 0x00, 0x00, 0x00, 0x39, 0xe9, 0x2b, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x3a, 0xaa, 0xea, 0x30, 0x00, 0x00, 0x00, 0x00, 0x3b, 0xc9, 0x0d, 0xc0, 0x00, 0x00, 0x00, 0x00,
0x3c, 0x8a, 0xcc, 0x30, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xa8, 0xef, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x6a, 0xae,
0x30, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x88, 0xd1, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x53, 0xca, 0xb0, 0x00, 0x00,
0x00, 0x00, 0x41, 0x68, 0xb3, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x42, 0x33, 0xac, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x43,
0x48, 0x95, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x44, 0x13, 0x8e, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x45, 0x31, 0xb2, 0x40,
0x00, 0x00, 0x00, 0x00, 0x45, 0xf3, 0x70, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x47, 0x11, 0x94, 0x40, 0x00, 0x00, 0x00,
0x00, 0x47, 0xef, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x48, 0xf1, 0x76, 0x40, 0x00, 0x00, 0x00, 0x00, 0x49, 0xbc,
0x6f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x4a, 0xd1, 0x58, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4b, 0xb8, 0x00, 0xb0, 0x00,
0x00, 0x00, 0x00, 0x4c, 0xb1, 0x3a, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4d, 0xc6, 0x07, 0x30, 0x00, 0x00, 0x00, 0x00,
0x4e, 0x50, 0x82, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x9c, 0xae, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x50, 0x42, 0xd9,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x51, 0x7c, 0x90, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x52, 0x2b, 0xf6, 0x40, 0x00, 0x00,
0x00, 0x00, 0x53, 0x5c, 0x72, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x54, 0x0b, 0xd8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x57,
0x37, 0xe6, 0x30, 0x00, 0x00, 0x00, 0x00, 0x57, 0xaf, 0xec, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x59, 0x17, 0xc8, 0x30,
0x00, 0x00, 0x00, 0x00, 0x59, 0x8f, 0xce, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x5a, 0xf7, 0xaa, 0x30, 0x00, 0x00, 0x00,
0x00, 0x5b, 0x6f, 0xb0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x5c, 0xa9, 0x67, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x74,
0x7c, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x89, 0x49, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x54, 0x5e, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x60, 0x69, 0x2b, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x61, 0x34, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00,
0x62, 0x49, 0x0d, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x63, 0x1d, 0x5d, 0x40, 0x00, 0x00, 0x00, 0x00, 0x64, 0x28, 0xef,
0xb0, 0x01, 0x02, 0x01, 0x03, 0x01, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x03, 0x02, 0x03,
0x05, 0x04, 0x02, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05,
0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03,
0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05,
0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03,
0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05,
0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0xff, 0xff,
0xbd, 0xbb, 0x00, 0x00, 0xff, 0xff, 0xbd, 0xbb, 0x00, 0x04, 0xff, 0xff, 0xb9, 0xb0, 0x00, 0x08, 0xff, 0xff, 0xc7,
0xc0, 0x00, 0x0c, 0xff, 0xff, 0xc7, 0xc0, 0x01, 0x0c, 0xff, 0xff, 0xd5, 0xd0, 0x01, 0x10, 0x4c, 0x4d, 0x54, 0x00,
0x53, 0x4d, 0x54, 0x00, 0x2d, 0x30, 0x35, 0x00, 0x2d, 0x30, 0x34, 0x00, 0x2d, 0x30, 0x33, 0x00, 0x0a, 0x3c, 0x2d,
0x30, 0x34, 0x3e, 0x34, 0x3c, 0x2d, 0x30, 0x33, 0x3e, 0x2c, 0x4d, 0x39, 0x2e, 0x31, 0x2e, 0x36, 0x2f, 0x32, 0x34,
0x2c, 0x4d, 0x34, 0x2e, 0x31, 0x2e, 0x36, 0x2f, 0x32, 0x34, 0x0a, }},
{"EasterIsland",
{0x54, 0x5a, 0x69, 0x66, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00,
0x00, 0x06, 0x00, 0x00, 0x00, 0x14, 0xff, 0xff, 0xff, 0xff, 0x69, 0x87, 0x42, 0x08, 0xff, 0xff, 0xff, 0xff, 0xb9,
0xc7, 0x40, 0x88, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xd1, 0x3c, 0x40, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x92, 0xfa, 0xb0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xcc, 0xcd, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0xdc, 0xb0, 0x00, 0x00, 0x00,
0x00, 0x01, 0x75, 0x50, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x49, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x55,
0x32, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x2b, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x05, 0x3e, 0x4f, 0x40, 0x00,
0x00, 0x00, 0x00, 0x06, 0x00, 0x0d, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0b, 0xbc, 0x40, 0x00, 0x00, 0x00, 0x00,
0x07, 0xdf, 0xef, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x08, 0xfe, 0x13, 0x40, 0x00, 0x00, 0x00, 0x00, 0x09, 0xbf, 0xd1,
0xb0, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xdd, 0xf5, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xa8, 0xee, 0x30, 0x00, 0x00,
0x00, 0x00, 0x0c, 0xbd, 0xd7, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x88, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e,
0x9d, 0xb9, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x68, 0xb2, 0x30, 0x00, 0x00, 0x00, 0x00, 0x10, 0x86, 0xd5, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x11, 0x48, 0x94, 0x30, 0x00, 0x00, 0x00, 0x00, 0x12, 0x66, 0xb7, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x13, 0x28, 0x76, 0x30, 0x00, 0x00, 0x00, 0x00, 0x14, 0x46, 0x99, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x15, 0x11,
0x92, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x16, 0x26, 0x7b, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x16, 0xf1, 0x74, 0xb0, 0x00,
0x00, 0x00, 0x00, 0x18, 0x06, 0x5d, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x18, 0xd1, 0x56, 0xb0, 0x00, 0x00, 0x00, 0x00,
0x19, 0xe6, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xb1, 0x38, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xcf, 0x5c,
0x40, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x91, 0x1a, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xaf, 0x3e, 0x40, 0x00, 0x00,
0x00, 0x00, 0x1e, 0x70, 0xfc, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x8f, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x20,
0x7f, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x21, 0x6f, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x22, 0x39, 0xfb, 0x30,
0x00, 0x00, 0x00, 0x00, 0x23, 0x4e, 0xe4, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x19, 0xdd, 0x30, 0x00, 0x00, 0x00,
0x00, 0x25, 0x38, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x25, 0xf9, 0xbf, 0x30, 0x00, 0x00, 0x00, 0x00, 0x26, 0xf2,
0xf8, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x27, 0xd9, 0xa1, 0x30, 0x00, 0x00, 0x00, 0x00, 0x28, 0xf7, 0xc4, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x29, 0xc2, 0xbd, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xd7, 0xa6, 0xc0, 0x00, 0x00, 0x00, 0x00,
0x2b, 0xa2, 0x9f, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xb7, 0x88, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x82, 0x81,
0xb0, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x97, 0x6a, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x62, 0x63, 0xb0, 0x00, 0x00,
0x00, 0x00, 0x30, 0x80, 0x87, 0x40, 0x00, 0x00, 0x00, 0x00, 0x31, 0x42, 0x45, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x32,
0x60, 0x69, 0x40, 0x00, 0x00, 0x00, 0x00, 0x33, 0x3d, 0xd7, 0x30, 0x00, 0x00, 0x00, 0x00, 0x34, 0x40, 0x4b, 0x40,
0x00, 0x00, 0x00, 0x00, 0x35, 0x0b, 0x44, 0x30, 0x00, 0x00, 0x00, 0x00, 0x36, 0x0d, 0xb8, 0x40, 0x00, 0x00, 0x00,
0x00, 0x37, 0x06, 0xd5, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x0f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x38, 0xcb,
0x08, 0x30, 0x00, 0x00, 0x00, 0x00, 0x39, 0xe9, 0x2b, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3a, 0xaa, 0xea, 0x30, 0x00,
0x00, 0x00, 0x00, 0x3b, 0xc9, 0x0d, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x8a, 0xcc, 0x30, 0x00, 0x00, 0x00, 0x00,
0x3d, 0xa8, 0xef, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x6a, 0xae, 0x30, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x88, 0xd1,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x53, 0xca, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x68, 0xb3, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x42, 0x33, 0xac, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x43, 0x48, 0x95, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x44,
0x13, 0x8e, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x45, 0x31, 0xb2, 0x40, 0x00, 0x00, 0x00, 0x00, 0x45, 0xf3, 0x70, 0xb0,
0x00, 0x00, 0x00, 0x00, 0x47, 0x11, 0x94, 0x40, 0x00, 0x00, 0x00, 0x00, 0x47, 0xef, 0x02, 0x30, 0x00, 0x00, 0x00,
0x00, 0x48, 0xf1, 0x76, 0x40, 0x00, 0x00, 0x00, 0x00, 0x49, 0xbc, 0x6f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x4a, 0xd1,
0x58, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4b, 0xb8, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x4c, 0xb1, 0x3a, 0x40, 0x00,
0x00, 0x00, 0x00, 0x4d, 0xc6, 0x07, 0x30, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x50, 0x82, 0xc0, 0x00, 0x00, 0x00, 0x00,
0x4f, 0x9c, 0xae, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x50, 0x42, 0xd9, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x51, 0x7c, 0x90,
0xb0, 0x00, 0x00, 0x00, 0x00, 0x52, 0x2b, 0xf6, 0x40, 0x00, 0x00, 0x00, 0x00, 0x53, 0x5c, 0x72, 0xb0, 0x00, 0x00,
0x00, 0x00, 0x54, 0x0b, 0xd8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x57, 0x37, 0xe6, 0x30, 0x00, 0x00, 0x00, 0x00, 0x57,
0xaf, 0xec, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x59, 0x17, 0xc8, 0x30, 0x00, 0x00, 0x00, 0x00, 0x59, 0x8f, 0xce, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x5a, 0xf7, 0xaa, 0x30, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x6f, 0xb0, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x5c, 0xa9, 0x67, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x74, 0x7c, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x89,
0x49, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x54, 0x5e, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x60, 0x69, 0x2b, 0xb0, 0x00,
0x00, 0x00, 0x00, 0x61, 0x34, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x62, 0x49, 0x0d, 0xb0, 0x00, 0x00, 0x00, 0x00,
0x63, 0x1d, 0x5d, 0x40, 0x00, 0x00, 0x00, 0x00, 0x64, 0x28, 0xef, 0xb0, 0x01, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02,
0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03,
0x02, 0x03, 0x02, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05,
0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04,
0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05,
0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04,
0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0x05, 0x04, 0xff, 0xff, 0x99, 0x78, 0x00, 0x00, 0xff, 0xff, 0x99, 0x78, 0x00,
0x04, 0xff, 0xff, 0xab, 0xa0, 0x01, 0x08, 0xff, 0xff, 0x9d, 0x90, 0x00, 0x0c, 0xff, 0xff, 0xab, 0xa0, 0x00, 0x08,
0xff, 0xff, 0xb9, 0xb0, 0x01, 0x10, 0x4c, 0x4d, 0x54, 0x00, 0x45, 0x4d, 0x54, 0x00, 0x2d, 0x30, 0x36, 0x00, 0x2d,
0x30, 0x37, 0x00, 0x2d, 0x30, 0x35, 0x00, 0x0a, 0x3c, 0x2d, 0x30, 0x36, 0x3e, 0x36, 0x3c, 0x2d, 0x30, 0x35, 0x3e,
0x2c, 0x4d, 0x39, 0x2e, 0x31, 0x2e, 0x36, 0x2f, 0x32, 0x32, 0x2c, 0x4d, 0x34, 0x2e, 0x31, 0x2e, 0x36, 0x2f, 0x32,
0x32, 0x0a, }},
};
// clang-format on

} // namespace NxTzdb