#include<iostream>

#include<SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(640,480), "frog-FunGame");
    //forog arrangment
    sf::RectangleShape frog(sf::Vector2f(80.0f,80.0f));
    sf::Rect<float> frogsize = frog.getGlobalBounds();
    frog.setOrigin(sf::Vector2f(frogsize.width/2,frogsize.height/2));
    //frog.setFillColor(sf::Color::Green);
    frog.setPosition(sf::Vector2f(320,480-frogsize.height/2));
    
    sf::Texture frogshekl;
    frogshekl.loadFromFile("res/img/frog1.png");
    frog.setTexture(&frogshekl);
    

    while (window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent( event ))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                     window.close();

                    break;
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
            {
                frog.move(sf::Vector2f(-80.0f,0.0f));
                frog.setRotation(-90);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
            {
                frog.move(sf::Vector2f(80.0f,0.0f));
                frog.setRotation(90);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
            {
                frog.move(sf::Vector2f(0.0f,-80.0f));
                frog.setRotation(0);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
            {
                frog.move(sf::Vector2f(0.0f,80.f));
                frog.setRotation(180);

            }
            // game update
            window.clear();

            // object drawing
            window.draw(frog);

            window.display();

         }

            
    }

    return EXIT_SUCCESS;

}