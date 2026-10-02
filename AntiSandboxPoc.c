#include <stdio.h>
#include <windows.h>
#include <intrin.h>

int snadboxCPU()
{
	int cpu_inf[4] = { 0 };
	


	__cpuid(cpu_inf, 1);

	if ((cpu_inf[2] >> 31) & 1)
	{
		return 1;
	}

	return 0;
    
}

int LowRam()
{
	MEMORYSTATUSEX ram;
	ram.dwLength = sizeof(ram);

	GlobalMemoryStatusEx(&ram);

	unsigned long long total_ram_gb = ram.ullTotalPhys / (1024 * 1024 * 1024);

	if (total_ram_gb < 4) 
	{
		return 1;
	}
	return 0;

}

int is_low_cores() {
	SYSTEM_INFO sys_info;

	
	GetSystemInfo(&sys_info);

	
	if (sys_info.dwNumberOfProcessors < 4) {
		return 1; 
	}
	return 0; 
}

int SandBoxUserName()
{
	char sys_user[256 + 1];
	DWORD size = sizeof(sys_user);

	GetUserNameA(sys_user, &size);
	if (_stricmp(sys_user, "Sandbox") == 0 ||
		_stricmp(sys_user, "WDAGUtilityUserAccount") == 0 ||
		_stricmp(sys_user, "user") == 0 ||
		_stricmp(sys_user, "test") == 0)
	{
		return 1;
	}

	return 0;
}



int main()
{
	


	return 0;
}
