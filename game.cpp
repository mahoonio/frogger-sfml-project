#include<iostream>

#include<SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(840,640), "frog-FunGame");
    //frog arrangment
    sf::RectangleShape frog(sf::Vector2f(40.0f,40.0f));
    sf::Rect<float> frogsize = frog.getGlobalBounds();
    frog.setOrigin(sf::Vector2f(frogsize.width/2,frogsize.height/2));
    //frog.setFillColor(sf::Color::Green);
    frog.setPosition(sf::Vector2f(window.getSize().x/2,window.getSize().y-frogsize.height/2));
    
    sf::Texture frogshekl;
    frogshekl.loadFromFile("res/img/frog1.png");
    frog.setTexture(&frogshekl);

    //truck1 arrange
    sf::RectangleShape truck1(sf::Vector2f(60.0f, 30.0f));
    truck1.setPosition(sf::Vector2f(truck1.getPosition().x, window.getSize().y/2-truck1.getSize().y + 80.0f));
    sf::Texture truck1tex;
    truck1tex.loadFromFile("res/img/police-car.png");
    truck1.setTexture(&truck1tex);
    //car1 arrange
    sf::RectangleShape car1(sf::Vector2f(60.0f, 30.0f));
    car1.setPosition(sf::Vector2f(window.getSize().x-car1.getSize().x, window.getSize().y/2-car1.getSize().y+120.0f));
    car1.setTexture(&truck1tex);
    //truck2 arrange
    sf::RectangleShape truck2(sf::Vector2f(60.0f, 30.0f));
    truck2.setPosition(sf::Vector2f(truck2.getPosition().x, window.getSize().y/2-truck2.getSize().y + 160.0f));
    //sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck2.setTexture(&truck1tex);
    //car2 arrange
    sf::RectangleShape car2(sf::Vector2f(60.0f, 30.0f));
    car2.setPosition(sf::Vector2f(window.getSize().x-car2.getSize().x, window.getSize().y/2-car2.getSize().y+200.0f));
    car2.setTexture(&truck1tex);
    //truck3 arrange
    sf::RectangleShape truck3(sf::Vector2f(60.0f, 30.0f));
    truck3.setPosition(sf::Vector2f(truck3.getPosition().x, window.getSize().y/2-truck3.getSize().y + 240.0f));
    //sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck3.setTexture(&truck1tex);

    
    sf::RectangleShape truck11(sf::Vector2f(60.0f, 30.0f));
    truck11.setPosition(sf::Vector2f(truck11.getPosition().x-160.0f, window.getSize().y/2-truck11.getSize().y + 80.0f));
    //sf::Texture truck1tex;
    ///truck1tex.loadFromFile("res/img/police-car.png");
    truck11.setTexture(&truck1tex);
    //car1 arrange
    sf::RectangleShape car11(sf::Vector2f(60.0f, 30.0f));
    car11.setPosition(sf::Vector2f(window.getSize().x-car11.getSize().x+160.0f, window.getSize().y/2-car11.getSize().y+120.0f));
    car11.setTexture(&truck1tex);
    //truck2 arrange
    sf::RectangleShape truck21(sf::Vector2f(60.0f, 30.0f));
    truck21.setPosition(sf::Vector2f(truck21.getPosition().x-160, window.getSize().y/2-truck21.getSize().y + 160.0f));
    //sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck2.setTexture(&truck1tex);
    //car2 arrange
    sf::RectangleShape car21(sf::Vector2f(60.0f, 30.0f));
    car21.setPosition(sf::Vector2f(window.getSize().x-car21.getSize().x+160, window.getSize().y/2-car21.getSize().y+200.0f));
    car21.setTexture(&truck1tex);
    //truck3 arrange
    sf::RectangleShape truck31(sf::Vector2f(60.0f, 30.0f));
    truck31.setPosition(sf::Vector2f(truck31.getPosition().x-160, window.getSize().y/2-truck31.getSize().y + 240.0f));
    //sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck31.setTexture(&truck1tex);
    
    
    sf::RectangleShape truck12(sf::Vector2f(60.0f, 30.0f));
    truck12.setPosition(sf::Vector2f(truck12.getPosition().x-320.0f, window.getSize().y/2-truck12.getSize().y + 80.0f));
    //sf::Texture truck1tex;
    ///truck1tex.loadFromFile("res/img/police-car.png");
    truck12.setTexture(&truck1tex);
    //car1 arrange
    sf::RectangleShape car12(sf::Vector2f(60.0f, 30.0f));
    car12.setPosition(sf::Vector2f(window.getSize().x-car12.getSize().x+320.0f, window.getSize().y/2-car12.getSize().y+120.0f));
    car12.setTexture(&truck1tex);
    //truck2 arrange
    sf::RectangleShape truck22(sf::Vector2f(60.0f, 30.0f));
    truck22.setPosition(sf::Vector2f(truck22.getPosition().x-320, window.getSize().y/2-truck22.getSize().y + 160.0f));
    //sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck22.setTexture(&truck1tex);
    //car2 arrange
    sf::RectangleShape car22(sf::Vector2f(60.0f, 30.0f));
    car22.setPosition(sf::Vector2f(window.getSize().x-car22.getSize().x+320, window.getSize().y/2-car22.getSize().y+200.0f));
    car22.setTexture(&truck1tex);
    //truck3 arrange
    sf::RectangleShape truck32(sf::Vector2f(60.0f, 30.0f));
    truck32.setPosition(sf::Vector2f(truck32.getPosition().x-320, window.getSize().y/2-truck32.getSize().y + 240.0f));
    // sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck32.setTexture(&truck1tex);
 
 


    sf::RectangleShape truck13(sf::Vector2f(60.0f, 30.0f));
    truck13.setPosition(sf::Vector2f(truck13.getPosition().x-480, window.getSize().y/2-truck13.getSize().y + 80.0f));
    //sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck13.setTexture(&truck1tex);
    //car1 arrange
    sf::RectangleShape car13(sf::Vector2f(60.0f, 30.0f));
    car13.setPosition(sf::Vector2f(window.getSize().x-car13.getSize().x+480, window.getSize().y/2-car13.getSize().y+120.0f));
    car13.setTexture(&truck1tex);
    //truck2 arrange
    sf::RectangleShape truck23(sf::Vector2f(60.0f, 30.0f));
    truck23.setPosition(sf::Vector2f(truck23.getPosition().x-480, window.getSize().y/2-truck23.getSize().y + 160.0f));
    //sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck23.setTexture(&truck1tex);
    //car2 arrange
    sf::RectangleShape car23(sf::Vector2f(60.0f, 30.0f));
    car23.setPosition(sf::Vector2f(window.getSize().x-car23.getSize().x+480, window.getSize().y/2-car23.getSize().y+200.0f));
    car23.setTexture(&truck1tex);
    //truck3 arrange
    sf::RectangleShape truck33(sf::Vector2f(60.0f, 30.0f));
    truck33.setPosition(sf::Vector2f(truck33.getPosition().x-480, window.getSize().y/2-truck33.getSize().y + 240.0f));
    //sf::Texture truck1tex;
    //truck1tex.loadFromFile("res/img/police-car.png");
    truck33.setTexture(&truck1tex);

    


    
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
                frog.move(sf::Vector2f(-40.0f,0.0f));
                frog.setRotation(-90);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
            {
                frog.move(sf::Vector2f(40.0f,0.0f));
                frog.setRotation(90);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
            {
                frog.move(sf::Vector2f(0.0f,-40.0f));
                frog.setRotation(0);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
            {
                frog.move(sf::Vector2f(0.0f,40.f));
                frog.setRotation(180);

            }


        }
            // game update occurs every frame
            truck1.move(0.15,0);
            if(truck1.getPosition().x > window.getSize().x)
            {
                truck1.setPosition(sf::Vector2f(-1 * truck1.getSize().x, window.getSize().y/2-truck1.getSize().y + 80.0f));
            }
            if(frog.getGlobalBounds().intersects(truck1.getGlobalBounds()))
            {
                window.close();
            }

            car1.move(-0.2,0);
            if(car1.getPosition().x <(0-car1.getSize().x))
            {
                car1.setPosition(sf::Vector2f(window.getSize().x, window.getSize().y/2-car1.getSize().y + 120.0f));
            }
            if(frog.getGlobalBounds().intersects(car1.getGlobalBounds()))
            {
                window.close();
            }

            truck2.move(0.18,0);
            if(truck2.getPosition().x > window.getSize().x)
            {
                truck2.setPosition(sf::Vector2f(-1 * truck2.getSize().x, window.getSize().y/2-truck2.getSize().y + 160.0f));
            }
            if(frog.getGlobalBounds().intersects(truck2.getGlobalBounds()))
            {
                window.close();
            }

            truck3.move(0.13,0);
            if(truck3.getPosition().x > window.getSize().x)
            {
                truck3.setPosition(sf::Vector2f(-1 * truck3.getSize().x, window.getSize().y/2-truck3.getSize().y + 240.0f));
            }
            if(frog.getGlobalBounds().intersects(truck3.getGlobalBounds()))
            {
                window.close();
            }

            car2.move(-0.25,0);
            if(car2.getPosition().x <(0-car2.getSize().x))
            {
                car2.setPosition(sf::Vector2f(window.getSize().x, window.getSize().y/2-car2.getSize().y + 200.0f));
            }
            if(frog.getGlobalBounds().intersects(car2.getGlobalBounds()))
            {
                window.close();
            }

            truck11.move(0.15,0);
            if(truck11.getPosition().x > window.getSize().x)
            {
                truck11.setPosition(sf::Vector2f(-1 * truck11.getSize().x, window.getSize().y/2-truck11.getSize().y + 80.0f));
            }
            if(frog.getGlobalBounds().intersects(truck11.getGlobalBounds()))
            {
                window.close();
            }
            
            truck21.move(0.18,0);
            if(truck21.getPosition().x > window.getSize().x)
            {
                truck21.setPosition(sf::Vector2f(-1 * truck21.getSize().x, window.getSize().y/2-truck21.getSize().y + 160.0f));
            }
            if(frog.getGlobalBounds().intersects(truck21.getGlobalBounds()))
            {
                window.close();
            }
            
            truck31.move(0.13,0);
            if(truck31.getPosition().x > window.getSize().x)
            {
                truck31.setPosition(sf::Vector2f(-1 * truck31.getSize().x, window.getSize().y/2-truck31.getSize().y + 240.0f));
            }
            if(frog.getGlobalBounds().intersects(truck31.getGlobalBounds()))
            {
                window.close();
            }
            
            car11.move(-0.2,0);
            if(car11.getPosition().x <(0-car11.getSize().x))
            {
                car11.setPosition(sf::Vector2f(window.getSize().x, window.getSize().y/2-car11.getSize().y + 120.0f));
            }
            if(frog.getGlobalBounds().intersects(car11.getGlobalBounds()))
            {
                window.close();
            }
            
            car21.move(-0.25,0);
            if(car21.getPosition().x <(0-car21.getSize().x))
            {
                car21.setPosition(sf::Vector2f(window.getSize().x, window.getSize().y/2-car21.getSize().y + 200.0f));
            }
            if(frog.getGlobalBounds().intersects(car21.getGlobalBounds()))
            {
                window.close();
            }




             truck12.move(0.15,0);
            if(truck12.getPosition().x > window.getSize().x)
            {
                truck12.setPosition(sf::Vector2f(-1 * truck12.getSize().x, window.getSize().y/2-truck12.getSize().y + 80.0f));
            }
            if(frog.getGlobalBounds().intersects(truck12.getGlobalBounds()))
            {
                window.close();
            }

            car12.move(-0.2,0);
            if(car12.getPosition().x <(0-car12.getSize().x))
            {
                car12.setPosition(sf::Vector2f(window.getSize().x, window.getSize().y/2-car12.getSize().y + 120.0f));
            }
            if(frog.getGlobalBounds().intersects(car12.getGlobalBounds()))
            {
                window.close();
            }

            truck22.move(0.18,0);
            if(truck22.getPosition().x > window.getSize().x)
            {
                truck22.setPosition(sf::Vector2f(-1 * truck22.getSize().x, window.getSize().y/2-truck22.getSize().y + 160.0f));
            }
            if(frog.getGlobalBounds().intersects(truck22.getGlobalBounds()))
            {
                window.close();
            }

            truck32.move(0.13,0);
            if(truck32.getPosition().x > window.getSize().x)
            {
                truck32.setPosition(sf::Vector2f(-1 * truck32.getSize().x, window.getSize().y/2-truck32.getSize().y + 240.0f));
            }
            if(frog.getGlobalBounds().intersects(truck32.getGlobalBounds()))
            {
                window.close();
            }

            car22.move(-0.25,0);
            if(car22.getPosition().x <(0-car22.getSize().x))
            {
                car22.setPosition(sf::Vector2f(window.getSize().x, window.getSize().y/2-car22.getSize().y + 200.0f));
            }
            if(frog.getGlobalBounds().intersects(car22.getGlobalBounds()))
            {
                window.close();
            }


             truck13.move(0.15,0);
            if(truck13.getPosition().x > window.getSize().x)
            {
                truck13.setPosition(sf::Vector2f(-1 * truck13.getSize().x, window.getSize().y/2-truck13.getSize().y + 80.0f));
            }
            if(frog.getGlobalBounds().intersects(truck13.getGlobalBounds()))
            {
                window.close();
            }

            car13.move(-0.2,0);
            if(car13.getPosition().x <(0-car13.getSize().x))
            {
                car13.setPosition(sf::Vector2f(window.getSize().x, window.getSize().y/2-car13.getSize().y + 120.0f));
            }
            if(frog.getGlobalBounds().intersects(car13.getGlobalBounds()))
            {
                window.close();
            }

            truck23.move(0.18,0);
            if(truck23.getPosition().x > window.getSize().x)
            {
                truck23.setPosition(sf::Vector2f(-1 * truck23.getSize().x, window.getSize().y/2-truck23.getSize().y + 160.0f));
            }
            if(frog.getGlobalBounds().intersects(truck23.getGlobalBounds()))
            {
                window.close();
            }

            truck33.move(0.13,0);
            if(truck33.getPosition().x > window.getSize().x)
            {
                truck33.setPosition(sf::Vector2f(-1 * truck33.getSize().x, window.getSize().y/2-truck33.getSize().y + 240.0f));
            }
            if(frog.getGlobalBounds().intersects(truck33.getGlobalBounds()))
            {
                window.close();
            }

            car23.move(-0.25,0);
            if(car23.getPosition().x <(0-car23.getSize().x))
            {
                car23.setPosition(sf::Vector2f(window.getSize().x, window.getSize().y/2-car23.getSize().y + 200.0f));
            }
            if(frog.getGlobalBounds().intersects(car23.getGlobalBounds()))
            {
                window.close();
            }


            window.clear();
            // object drawing
            window.draw(frog);
            window.draw(truck1);
            window.draw(car1);
            window.draw(truck2);
            window.draw(car2);
            window.draw(truck3);
            window.draw(truck11);
            window.draw(car11);
            window.draw(truck21);
            window.draw(car21);
            window.draw(truck31);
            window.draw(truck12);
            window.draw(car12);
            window.draw(truck22);
            window.draw(car22);
            window.draw(truck32);
            window.draw(truck13);
            window.draw(car13);
            window.draw(truck23);
            window.draw(car23);
            window.draw(truck33);
            window.display();

         

            
    }

    return EXIT_SUCCESS;

}