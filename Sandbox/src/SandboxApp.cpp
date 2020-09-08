#include <Celler.h>

class Sandbox : public Celler::Application 
{
 public:
   Sandbox() 
   {
   
   }
   
   ~Sandbox() 
   {
   
   }
};

Celler::Application* Celler::CreateApplication() 
{
 return new Sandbox();
}