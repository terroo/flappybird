#include "flappy.hpp"

int main(){
  std::srand( std::time(0));
  auto flappy = std::make_shared<FlappyBird>();
  flappy->run();
  return 0;
}

