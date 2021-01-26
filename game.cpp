#include<iostream>

#include<SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(640,480), "frog-FunGame");
    //frog arrangment
    sf::RectangleShape frog(sf::Vector2f(80.0f,80.0f));
    sf::Rect<float> frogsize = frog.getGlobalBounds();
    frog.setOrigin(sf::Vector2f(frogsize.width/2,frogsize.height/2));
    //frog.setFillColor(sf::Color::Green);
    frog.setPosition(sf::Vector2f(window.getSize().x/2,window.getSize().y-frogsize.height/2));
    
    sf::Texture frogshekl;
    frogshekl.loadFromFile("res/img/frog1.png");
    frog.setTexture(&frogshekl);

    //truck1 arrange
    sf::RectangleShape truck1(sf::Vector2f(120.0f, 60.0f));
    truck1.setPosition(sf::Vector2f(truck1.getPosition().x, window.getSize().y/2-truck1.getSize().y + 80.0f));
    sf::Texture truck1tex;
    truck1tex.loadFromFile("res/img/police-car.png");
    truck1.setTexture(&truck1tex);

    

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


        }
            // game update occurs every frame
            truck1.move(0.2,0);
            if(truck1.getPosition().x > window.getSize().x)
            {
                truck1.setPosition(sf::Vector2f(-2 * truck1.getSize().x, window.getSize().y/2-truck1.getSize().y + 80.0f));
            }
            if(frog.getGlobalBounds().intersects(truck1.getGlobalBounds()))
            {
                window.close();
            }



        
            window.clear();

            // object drawing
            window.draw(frog);
            window.draw(truck1);

            window.display();

         

            
    }

    return EXIT_SUCCESS;

}