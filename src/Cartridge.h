#pragma once

#include "MemoryBus.h"
#include <vector>

class Cartridge : IMemoryBusDevice
{
public:
	void Init(MemoryBus& memoryBus);
	void LoadRom(const char* file);

private:
	uint8_t Read(uint16_t address) const override;
	void Write(uint16_t address, uint8_t value) override;

private:
	std::vector<uint8_t> m_data;
};
