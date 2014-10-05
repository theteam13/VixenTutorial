#ifndef VIX_SDL2_APPLICATION_H
#define VIX_SDL2_APPLICATION_H

#include <vix_platform.h>
#include <vix_interfaces.h>
#include <vix_stringutil.h>
#include <SDL.h>

namespace Vixen {

	namespace System {

		class VIX_API SDLApplication : public IApplication
		{
		public:
			SDLApplication(const std::string& title);

			~SDLApplication();

			bool initialized() override;
			int  run()         override;

		private:
			SDL_Window*   m_window;
			SDL_GLContext m_context;
			bool          m_initialized;
			bool          m_running;
			std::string   m_title;
		};

	}

}

#endif