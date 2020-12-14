#pragma once

#include <iostream>
#include <string>

namespace Tracer
{
	enum class RecordAction
	{
		NONE,
		PHOTO,
		VIDEO
	};

	class Cinema
	{
	public:
		Cinema(std::string folder);
		~Cinema() = default;

		void OnKeyChanged(int key, int scanCode, int action, int mod);
		void Record();

		std::string cap_folder;//Capture folder
		RecordAction cap_action;
	};
}
