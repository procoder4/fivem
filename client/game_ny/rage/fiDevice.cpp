#include "StdInc.h"
#include "fiDevice.h"
#include "CrossLibraryInterfaces.h"

namespace rage
{
void fiDevice::SetInitialMountHook(void(*callback)(void*))
{
	g_hooksDLL->SetHookCallback(StringHash("initMount"), callback);
}

WRAPPER fiDevice* fiDevice::GetDevice(const char* path, bool allowRoot) { EAXJMP(0x5ABC80); }

rage::fiDevice::~fiDevice() {}
}