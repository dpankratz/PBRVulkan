#include "Cinema.h"

#include <GLFW/glfw3.h>

namespace Tracer
{
	Cinema::Cinema(std::string folder) 
		: cap_folder(folder)
	{
		cap_folder = folder;
		cap_action = RecordAction::NONE;
	}

	void Cinema::OnKeyChanged(int key, int scanCode, int action, int mod)
	{
		switch (key)
		{
		case GLFW_KEY_P:
			std::cout << "You press p" << std::endl;
			cap_action = RecordAction::PHOTO;

			break;
		case GLFW_KEY_V:
			std::cout << "You press v" << std::endl;
			cap_action = RecordAction::VIDEO;
			break;
		default:
			break;
		}
	}

	void Cinema::Record()
	{
		switch (cap_action)
		{
		case RecordAction::PHOTO:
			break;
		case RecordAction::VIDEO:
			break;
		default:
			break;
		}
	}
}

