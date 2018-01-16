// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <vector>
#include "common/common_types.h"
#include "core/hle/service/nvdrv/devices/nvdevice.h"

namespace Service {
namespace Nvidia {
namespace Devices {

class nvhost_ctrl_gpu final : public nvdevice {
public:
    nvhost_ctrl_gpu() = default;
    ~nvhost_ctrl_gpu() override = default;

    u32 ioctl(u32 command, const std::vector<u8>& input, std::vector<u8>& output) override;
};

} // namespace Devices
} // namespace Nvidia
} // namespace Service
