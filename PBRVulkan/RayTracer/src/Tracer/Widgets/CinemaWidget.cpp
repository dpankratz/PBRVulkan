#include "CinemaWidget.h"

#include <imgui.h>

namespace Interface
{
	void CinemaWidget::Render(Settings& settings) {
	
		ImGui::Text("Cinema");
		ImGui::Separator();
		ImGui::Text("Capture keys:  \n     P - photo \n     V - video \n");
	}
}
