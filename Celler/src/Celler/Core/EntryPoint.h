#pragma once

#ifdef CR_PLATFORM_WINDOWS

extern Celler::Application* Celler::CreateApplication();

   int main(int argc, char** argv)
   {
    auto App = Celler::CreateApplication();
    App->Run();
   	delete App;
   }

#endif