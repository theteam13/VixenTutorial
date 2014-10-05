#ifndef VIX_INTERFACES_H
#define VIX_INTERFACES_H

#include <vix_platform.h>

namespace Vixen {

	namespace System {
	
		class VIX_API IApplication
		{
		public:
			virtual ~IApplication() { }

			virtual bool initialized() = 0;
			virtual int  run() = 0;
		};

	}
}

#endif