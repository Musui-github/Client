#pragma once

namespace Signatures {
	inline const char* RenderContext = "48 8B C4 48 89 58 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 ? B8 0F 29 ? A8 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 4C 8B F2 48 89 54 24 ? 4C";
	inline const char* Key = "48 ? ? 48 ? ? ? 4C 8D 05 ? ? ? ? 89";
	inline const char* Mouse = "48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? 44 ? ? BC 24 ? ? ? ?";
	inline const char* PacketSender = "48 89 5C 24 ? 57 48 81 EC ? ? ? ? 0F B6 41 08";
	inline const char* GameMode = "48 8D 05 ? ? ? ? 48 8B D9 48 89 01 48 8B 89 ? ? ? ? 48 85 C9 74 11 48 8B 01 BA ? ? ? ? 48 8B 00 FF 15 ? ? ? ? 48 8B 8B ? ? ? ? 48 85 C9 74 17";
	inline const char* Actor = "48 8D 05 ? ? ? ? 48 89 03 48 C7 83 ? ? ? ? ? ? ? ? 48 8B 8B";
	inline const char* CreatePacket = "E8 ? ? ? ? 90 48 8B 85 F0 00 00 00 48 85 C0 0F 84 ? ? ? ?";

	// Packets
	inline const char* TextPacket = "48 8D 05 ? ? ? ? 48 89 85 ? ? ? ? 48 8D 8D ? ? ? ? E8 ? ? ? ? 48 8D 8D ? ? ? ? E8 ? ? ? ? 48 8D 8D ? ? ? ? E8 ? ? ? ? 48 8D";
	inline const char* CommandRequestPacket = "48 8D 0D ? ? ? ? 0F 11 00 C7 40 ? ? ? ? ? C7 40 ? ? ? ? ? 48 8D 05 ? ? ? ? 48 89 02 33 C0 48 89 42 28 48 89 42 30 89 42 38 48 89 42 40 48 89 42 50 88 42 60 C7 42 ? ? ? ? ?";
}