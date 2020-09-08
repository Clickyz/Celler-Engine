#pragma once

#include "Base.h"

namespace Celler 
{
    class CELLER_API Application 
    {
     public:
      Application();
      virtual ~Application();
	
      void Run();
    };

 Application* CreateApplication();
}