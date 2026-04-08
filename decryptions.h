#pragma once
// auto generated 90% of these r correct im pretty sure theres a few not correct send me a dm with ones that arent correct (not incorrect just different feature for that decrypt i need to fix dumper)

#include <cstdint>

namespace Decryptions
{
	namespace BaseNetworkable_Decryption
	{
		// decryptions::base_networkable_one
		std::uintptr_t base_networkable_one(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x49C8E325u;
		        eax = (eax << 0x05) | (eax >> 0x1B);
		        eax = eax + 0x3FF5E49Du;
		        eax = (eax << 0x0D) | (eax >> 0x13);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::base_networkable_two
		std::uintptr_t base_networkable_two(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0xCE5C4827u;
		        eax = eax + 0x693A1194u;
		        eax = (eax << 0x04) | (eax >> 0x1C);
		        eax = eax - 0x3E19D550u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace BaseNetworkable_Decryption

	namespace ActiveItem_Decryption
	{
		// decryptions::decrypt_active_item
		std::uintptr_t decrypt_active_item(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x8F9C484Bu;
		        eax = (eax << 0x17) | (eax >> 0x09);
		        eax = eax ^ 0xB8E6DFDCu;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_0x2D0
		std::uintptr_t decrypt_0x2D0(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax - ebp;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_0x2D0_2
		std::uintptr_t decrypt_0x2D0_2(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0xFF71ADB4u;
		        eax = (eax << 0x17) | (eax >> 0x09);
		        eax = eax - 0x36138BE7u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_PlayerInventory
		std::uintptr_t decrypt_PlayerInventory(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x75AA3A8Fu;
		        eax = eax ^ 0x258DCF63u;
		        eax = eax + 0xDF5A54CCu;
		        eax = (eax << 0x16) | (eax >> 0x0A);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_PlayerEyes
		std::uintptr_t decrypt_PlayerEyes(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0xD1C21866u;
		        eax = (eax << 0x1C) | (eax >> 0x04);
		        eax = eax + 0x78F57166u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_ulong
		std::uintptr_t decrypt_ulong(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax - 0x81A04D7u;
		        eax = eax ^ 0xCA121519u;
		        eax = eax + 0xF93D55D3u;
		        eax = (eax << 0x15) | (eax >> 0x0B);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_clothingWaterSpeedBonus
		std::uintptr_t decrypt_clothingWaterSpeedBonus(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x3;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0x9EECD30Du;
		        eax = (eax << 0x17) | (eax >> 0x09);
		        eax = eax + 0xB8006ECCu;
		        eax = (eax << 0x10) | (eax >> 0x10);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt
		std::uintptr_t decrypt(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax - 0x5u;
		        eax = eax + esi;
		        eax = eax + 0xFFFF2400u;
		        eax = eax + 0xFFFFFFFBu;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_2
		std::uintptr_t decrypt_2(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x1;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0xCDFF2D19u;
		        eax = (eax << 0x04) | (eax >> 0x1C);
		        eax = eax ^ 0x92884E28u;
		        eax = eax + 0x1584424Fu;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_3
		std::uintptr_t decrypt_3(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x1;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x84105D28u;
		        eax = (eax << 0x18) | (eax >> 0x08);
		        eax = eax + 0x6C6EF916u;
		        eax = (eax << 0x0B) | (eax >> 0x15);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace ActiveItem_Decryption

	namespace PlayerInventory_Decryption
	{
		// decryptions::decrypt_PlayerInventory
		std::uintptr_t decrypt_PlayerInventory(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x75AA3A8Fu;
		        eax = eax ^ 0x258DCF63u;
		        eax = eax + 0xDF5A54CCu;
		        eax = (eax << 0x16) | (eax >> 0x0A);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace PlayerInventory_Decryption

	namespace Convar_Graphics_Decryption
	{
		// decryptions::decrypt_int
		std::uintptr_t decrypt_int(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x49C8E325u;
		        eax = (eax << 0x05) | (eax >> 0x1B);
		        eax = eax + 0x3FF5E49Du;
		        eax = (eax << 0x0D) | (eax >> 0x13);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_int
		std::uintptr_t decrypt_int(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0x22043341u;
		        eax = (eax << 0x1A) | (eax >> 0x06);
		        eax = eax ^ 0xA78D1C02u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::fov
		std::uintptr_t fov(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = (eax >> 0x15) | (eax << 0x0B);
		        eax = eax + 0x208F02A4u;
		        eax = (eax << 0x14) | (eax >> 0x0C);
		        eax = eax ^ 0xB82337B3u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_bool
		uint64_t encrypt_decrypt_bool(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax + 0x4056C3DFu;
		    eax = (eax << 0x0D) | (eax >> 0x13);
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_bool(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = (eax >> 0x0D) | (eax << 0x13);
		    eax = eax - 0x4056C3DFu;
		    return eax;
		}

	} // namespace Convar_Graphics_Decryption

	namespace Convar_Admin_Decryption
	{
		// decryptions::decrypt_float
		uint64_t encrypt_decrypt_float(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = (eax >> 0x08) | (eax << 0x18);
		    eax = eax - 0x8282B778u;
		    eax = eax ^ 0x17E66254u;
		    eax = eax - 0x2DD35BA3u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_float(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax + 0x2DD35BA3u;
		    eax = eax ^ 0x17E66254u;
		    eax = eax + 0x8282B778u;
		    eax = (eax << 0x08) | (eax >> 0x18);
		    return eax;
		}

		std::uintptr_t decrypt_0x18(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0xC62DA6C2u;
		        eax = (eax << 0x15) | (eax >> 0x0B);
		        eax = eax ^ 0xD3D50BB9u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_bool
		std::uintptr_t decrypt_bool(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = (eax >> 0x19) | (eax << 0x07);
		        eax = eax + 0x427289CEu;
		        eax = eax ^ 0x7CBD4ADEu;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		uint64_t encrypt_0x70(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax + 0x2DD35BA3u;
		    eax = eax ^ 0x17E66254u;
		    eax = eax - 0x7D7D4888u;
		    eax = (eax << 0x08) | (eax >> 0x18);
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_0x70(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = (eax >> 0x08) | (eax << 0x18);
		    eax = eax + 0x7D7D4888u;
		    eax = eax ^ 0x17E66254u;
		    eax = eax - 0x2DD35BA3u;
		    return eax;
		}

		// decryptions::decrypt_float
		uint64_t encrypt_decrypt_float(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax - 0x24A53336u;
		    eax = eax ^ 0x2156CF5Bu;
		    eax = eax - 0xAC7FBCEu;
		    eax = (eax << 0x12) | (eax >> 0x0E);
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_float(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = (eax >> 0x12) | (eax << 0x0E);
		    eax = eax + 0xAC7FBCEu;
		    eax = eax ^ 0x2156CF5Bu;
		    eax = eax + 0x24A53336u;
		    return eax;
		}

		std::uintptr_t decrypt_0x378(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax - ebp;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		std::uintptr_t decrypt_0x4120(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax - 0x81A04D7u;
		        eax = eax ^ 0xCA121519u;
		        eax = eax + 0xF93D55D3u;
		        eax = (eax << 0x15) | (eax >> 0x0B);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace Convar_Admin_Decryption

	namespace Convar_Server_Decryption
	{
		// decryptions::decrypt_int
		uint64_t encrypt_decrypt_int(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax ^ 0x847198A4u;
		    eax = (eax >> 0x07) | (eax << 0x19);
		    eax = eax ^ 0xBD96704Bu;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_int(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax ^ 0xBD96704Bu;
		    eax = (eax << 0x07) | (eax >> 0x19);
		    eax = eax ^ 0x847198A4u;
		    return eax;
		}

		// decryptions::decrypt_uint
		std::uintptr_t decrypt_uint(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x75AA3A8Fu;
		        eax = eax ^ 0x258DCF63u;
		        eax = eax + 0xDF5A54CCu;
		        eax = (eax << 0x16) | (eax >> 0x0A);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_bool
		std::uintptr_t decrypt_bool(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = (eax >> 0x1D) | (eax << 0x03);
		        eax = eax + 0x44B84825u;
		        eax = (eax << 0x16) | (eax >> 0x0A);
		        eax = eax ^ 0xC8F4553u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_int
		uint64_t encrypt_decrypt_int(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax + 0x1u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_int(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax - 0x1u;
		    return eax;
		}

		// decryptions::decrypt_int
		uint64_t encrypt_decrypt_int(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax - 0x205F8572u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_int(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax + 0x205F8572u;
		    return eax;
		}

		// decryptions::decrypt_int
		uint64_t encrypt_decrypt_int(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax + 0x1u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_int(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax - 0x1u;
		    return eax;
		}

		// decryptions::decrypt_string
		uint64_t encrypt_decrypt_string(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax - 0x1584424Fu;
		    eax = eax ^ 0x92884E28u;
		    eax = (eax >> 0x04) | (eax << 0x1C);
		    eax = eax - 0xCDFF2D19u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_string(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax + 0xCDFF2D19u;
		    eax = (eax << 0x04) | (eax >> 0x1C);
		    eax = eax ^ 0x92884E28u;
		    eax = eax + 0x1584424Fu;
		    return eax;
		}

		// decryptions::decrypt_float
		uint64_t encrypt_decrypt_float(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax + 0x4056C3DFu;
		    eax = (eax << 0x0D) | (eax >> 0x13);
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_float(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = (eax >> 0x0D) | (eax << 0x13);
		    eax = eax - 0x4056C3DFu;
		    return eax;
		}

		// decryptions::decrypt_int
		uint64_t encrypt_decrypt_int(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax + 0x1u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_int(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax - 0x1u;
		    return eax;
		}

		// decryptions::decrypt_int
		uint64_t encrypt_decrypt_int(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax + 0x1u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_int(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax - 0x1u;
		    return eax;
		}

		// decryptions::decrypt_int
		uint64_t encrypt_decrypt_int(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax + 0x1u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_int(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax - 0x1u;
		    return eax;
		}

	} // namespace Convar_Server_Decryption

	namespace BaseProjectile_Decryption
	{
		// decryptions::decrypt_aimCone
		std::uintptr_t decrypt_aimCone(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x1;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0xD99763BCu;
		        eax = (eax << 0x13) | (eax >> 0x0D);
		        eax = eax + 0x302490Au;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_recoil
		uint64_t encrypt_decrypt_recoil(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax - 0x302490Au;
		    eax = (eax >> 0x13) | (eax << 0x0D);
		    eax = eax ^ 0xD99763BCu;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_recoil(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax ^ 0xD99763BCu;
		    eax = (eax << 0x13) | (eax >> 0x0D);
		    eax = eax + 0x302490Au;
		    return eax;
		}

	} // namespace BaseProjectile_Decryption

} // namespace Decryptions
