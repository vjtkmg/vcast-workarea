#include <sstream>
using namespace std;
void hello ( char *prompt )
{
   std::ostringstream theStream;
   theStream << "Hello World";
   theStream << prompt;
}
