#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

class FlappyBird {

  std::shared_ptr<sf::RenderWindow> window;
  float gravity, frame, space;
  int count, score;
  sf::Texture bg, flappy, pipe;
  std::shared_ptr<sf::Sprite> background, bird, pipeBottom, pipeTop;
  std::vector<sf::Sprite> pipes;
  bool gameover, add;

  sf::Font font;
  sf::Text txt_score, txt_gameover;

  protected:
   void events();
   void draw();
   void game();
   void movePipes();
   void setAnimeBird();
   void moveBird();

  public:
   FlappyBird();
   void run();
};
