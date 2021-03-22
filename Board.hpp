#include <string>
#include <vector>
#include "Direction.hpp"
using namespace std;

namespace ariel {
    class Board {
      
    public:
        Board() {
            
        }
        ~Board() { }
        void post(int row, int column, Direction direction, std::string message);
        std::string read(int row, int column, Direction direction, int length);
        void show();
        
    };
}