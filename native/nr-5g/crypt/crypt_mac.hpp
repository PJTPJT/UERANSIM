//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <cstdint>
#include <cstdlib>

namespace crypt
{

void HmacSha256(uint8_t out[32], const uint8_t *data, size_t dataLen, const uint8_t *key, size_t keyLen);

}