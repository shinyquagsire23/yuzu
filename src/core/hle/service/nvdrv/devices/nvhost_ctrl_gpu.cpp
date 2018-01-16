// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "common/assert.h"
#include "common/logging/log.h"
#include "core/hle/service/nvdrv/devices/nvhost_ctrl_gpu.h"

namespace Service {
namespace Nvidia {
namespace Devices {

u32 nvhost_ctrl_gpu::ioctl(u32 command, const std::vector<u8>& input, std::vector<u8>& output) {
    UNIMPLEMENTED();
    return 0;
}

} // namespace Devices
} // namespace Nvidia
} // namespace Service
