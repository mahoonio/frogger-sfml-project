#include<iostream>

#include<SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(840,640), "frog-FunGame");

    sf::Music asli;
    if(!asli.openFromFile( "res/audio/Crazy-Frog-Axel-f.ogg" ))
    {
        std::cout<< "error" <<std::endl;
    }
    asli.play();
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

    


    ////////////////////////////////////////river start/////////////////////////////////////////////////////////////////////////////
    //trunk0b arrange
    sf::RectangleShape trunk0b(sf::Vector2f(160.0f, 40.0f));
    trunk0b.setPosition(sf::Vector2f(trunk0b.getPosition().x,trunk0b.getPosition().y+120.0f));
    sf::Texture trunk0bp;
    //trunk0bp.loadFromFile("res/img/police-car.png");
    //trunk0b.setTexture(&trunk0bp);
    
    
    //trunk0m arrange
    sf::RectangleShape trunk0m(sf::Vector2f(120.0f, 40.0f));
    trunk0m.setPosition(sf::Vector2f(trunk0m.getPosition().x-trunk0m.getSize().x-240.0f,trunk0m.getPosition().y+120.0f));
    //trunk0m.setTexture(&trunk0bp);

    //trunk01s arrange
    sf::RectangleShape trunk01s(sf::Vector2f(80.0f, 40.0f));
    trunk01s.setPosition(sf::Vector2f(trunk01s.getPosition().x-trunk01s.getSize().x-530.0f,trunk01s.getPosition().y+120.0f));
    //sf::Texture trunk01st;
    //trunk01st.loadFromFile("res/img/police-car.png");
    //trunk01s.setTexture(&trunk0bp);


     //trunk1b arrange
    sf::RectangleShape trunk1b(sf::Vector2f(160.0f, 40.0f));
    trunk1b.setPosition(sf::Vector2f(window.getSize().x+20.0f,trunk1b.getPosition().y+160));
    //sf::Texture truck0bp;
    //trunk0btex.loadFromFile("res/img/police-car.png");
    //trunk1b.setTexture(&trunk0bp);
    
    
    //trunk1m arrange
    sf::RectangleShape trunk1m(sf::Vector2f(120.0f, 40.0f));
    trunk1m.setPosition(sf::Vector2f(window.getSize().x+trunk1m.getSize().x+160.0f+20.0f,trunk1m.getPosition().y+160));
    //trunk1m.setTexture(&trunk0bp);



   
    //trunk01s arrange
    sf::RectangleShape trunk11s(sf::Vector2f(80.0f, 40.0f));
    trunk11s.setPosition(sf::Vector2f(window.getSize().x+trunk11s.getSize().x+400.0f+20.0f,trunk11s.getPosition().y+160.0f));
    //sf::Texture trunk01st;
    //trunk01st.loadFromFile("res/img/police-car.png");
    //trunk01s.setTexture(&trunk0bp);


     //trunk2b arrange
    sf::RectangleShape trunk2b(sf::Vector2f(160.0f, 40.0f));
    trunk2b.setPosition(sf::Vector2f(trunk2b.getPosition().x-40,trunk2b.getPosition().y+200));
    //sf::Texture trunk0bp;
    //trunk0bp.loadFromFile("res/img/police-car.png");
    //trunk0b.setTexture(&trunk0bp);
    
    
    //trunk0m arrange
    sf::RectangleShape trunk2m(sf::Vector2f(120.0f, 40.0f));
    trunk2m.setPosition(sf::Vector2f(trunk2m.getPosition().x-trunk2m.getSize().x-160.0f-40,trunk2m.getPosition().y+200));
    //trunk0m.setTexture(&trunk0bp);



  
    //trunk01s arrange
    sf::RectangleShape trunk21s(sf::Vector2f(80.0f, 40.0f));
    trunk21s.setPosition(sf::Vector2f(trunk21s.getPosition().x-trunk21s.getSize().x-280.0f-40.0f,trunk21s.getPosition().y+200.0f));
    //sf::Texture trunk01st;
    //trunk01st.loadFromFile("res/img/police-car.png");
    //trunk01s.setTexture(&trunk0bp);


     //trunk1b arrange
    sf::RectangleShape trunk3b(sf::Vector2f(160.0f, 40.0f));
    trunk3b.setPosition(sf::Vector2f(window.getSize().x,trunk3b.getPosition().y+240));
    //sf::Texture trunk0bp;
    //trunk0btex.loadFromFile("res/img/police-car.png");
    //trunk1b.setTexture(&trunk0bp);
    
    
    //trunk1m arrange
    sf::RectangleShape trunk3m(sf::Vector2f(120.0f, 40.0f));
    trunk3m.setPosition(sf::Vector2f(window.getSize().x+trunk3m.getSize().x+160,trunk3m.getPosition().y+240));
    //trunk1m.setTexture(&trunk0bp);



    //trunk01s arrange
    sf::RectangleShape trunk31s(sf::Vector2f(80.0f, 40.0f));
    trunk31s.setPosition(sf::Vector2f(window.getSize().x+trunk11s.getSize().x+280.0f,trunk11s.getPosition().y+240));
    //sf::Texture trunk01st;
    //trunk01st.loadFromFile("res/img/police-car.png");
    //trunk01s.setTexture(&trunk0bp);

    // lakposhtha
    sf::CircleShape t1(20,60);
    t1.setPosition(sf::Vector2f(t1.getPosition().x,t1.getPosition().y+280.0f));
    sf::CircleShape t2(20,60);
    t2.setPosition(sf::Vector2f(t2.getPosition().x+45.0f,t2.getPosition().y+280.0f));
    sf::CircleShape t3(20,60);
    t3.setPosition(sf::Vector2f(t3.getPosition().x+90.0f,t3.getPosition().y+280.0f));

    sf::CircleShape t4(20,60);
    t4.setPosition(sf::Vector2f(t4.getPosition().x+240,t4.getPosition().y+280.0f));
    sf::CircleShape t5(20,60);
    t5.setPosition(sf::Vector2f(t5.getPosition().x+285.0f,t5.getPosition().y+280.0f));
    sf::CircleShape t6(20,60);
    t6.setPosition(sf::Vector2f(t6.getPosition().x+330.0f,t6.getPosition().y+280.0f));

     sf::CircleShape t7(20,60);
    t7.setPosition(sf::Vector2f(t7.getPosition().x+480,t7.getPosition().y+280.0f));
    sf::CircleShape t8(20,60);
    t8.setPosition(sf::Vector2f(t8.getPosition().x+525.0f,t8.getPosition().y+280.0f));
    sf::CircleShape t9(20,60);
    t9.setPosition(sf::Vector2f(t9.getPosition().x+570.0f,t9.getPosition().y+280.0f));
    


    
    




  
    //////////////////////////////////////river finish/////////////////////////////////////////////////////////////////////////
    while (window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent( event ))
        {
            //event handling
            switch(event.type)
            {
                case sf::Event::Closed:
                     window.close();

                    break;

                case sf::Event::KeyReleased:
                if(sf::Keyboard::Key::P== (event.key.code))
                {
                    asli.play();
                }    
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
            if ((frog.getPosition().x>window.getSize().x) ||(frog.getPosition().x <0)) 
            {
                window.close();
            }
             if ((frog.getPosition().y>window.getSize().y) ||(frog.getPosition().y <0)) 
            {
                window.close();
            }

        }
            
            // game update (occurs every frame)
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
            ////////////////////////////////////////river movement start////////////////////////////////////////////
            trunk0b.move(0.17,0);
            if(trunk0b.getPosition().x > window.getSize().x)
            {
                trunk0b.setPosition(sf::Vector2f(-1 * trunk0b.getSize().x,trunk0b.getPosition().y));
            }
            if(trunk0b.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.17,0);
            }
            trunk0m.move(0.17,0);
            if(trunk0m.getPosition().x > window.getSize().x)
            {
                trunk0m.setPosition(sf::Vector2f(-1 * trunk0m.getSize().x,trunk0m.getPosition().y));
            }
            if(trunk0m.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.17,0);
            }
            


            trunk01s.move(0.17,0);
            if(trunk01s.getPosition().x > window.getSize().x)
            {
                trunk01s.setPosition(sf::Vector2f(-1 * trunk01s.getSize().x,trunk01s.getPosition().y));
            }
            if(trunk01s.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.17,0);
            }            



            trunk2b.move(0.17,0);
            if(trunk2b.getPosition().x > window.getSize().x)
            {
                trunk2b.setPosition(sf::Vector2f(-1 * trunk2b.getSize().x,trunk2b.getPosition().y));
            }
            if(trunk2b.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.17,0);
            }
            trunk2m.move(0.17,0);
            if(trunk2m.getPosition().x > window.getSize().x)
            {
                trunk2m.setPosition(sf::Vector2f(-1 * trunk2m.getSize().x,trunk2m.getPosition().y));
            }
            if(trunk2m.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.17,0);
            }
            


            trunk21s.move(0.17,0);
            if(trunk21s.getPosition().x > window.getSize().x)
            {
                trunk21s.setPosition(sf::Vector2f(-1 * trunk21s.getSize().x,trunk21s.getPosition().y));
            }
            if(trunk21s.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.17,0);
            }      







            trunk1b.move(-0.17,0);
            if(trunk1b.getPosition().x < 0-trunk1b.getSize().x)
            {
                trunk1b.setPosition(sf::Vector2f(window.getSize().x,trunk1b.getPosition().y));
            }
            if(trunk1b.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(-0.17,0);
            }
            trunk1m.move(-0.17,0);
            if(trunk1m.getPosition().x < 0-trunk1m.getSize().x)
            {
                trunk1m.setPosition(sf::Vector2f(window.getSize().x,trunk1m.getPosition().y));
            }
            if(trunk1m.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(-0.17,0);
            }
            

        
            

            trunk11s.move(-0.17,0);
            if(trunk11s.getPosition().x < 0-trunk11s.getSize().x)
            {
                trunk11s.setPosition(sf::Vector2f(window.getSize().x,trunk11s.getPosition().y));
            }
            if(trunk11s.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(-0.17,0);
            }      

            trunk3b.move(-0.17,0);
            if(trunk3b.getPosition().x < 0-trunk3b.getSize().x)
            {
                trunk3b.setPosition(sf::Vector2f(window.getSize().x,trunk3b.getPosition().y));
            }
            if(trunk3b.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(-0.17,0);
            }
            trunk3m.move(-0.17,0);
            if(trunk3m.getPosition().x < 0-trunk3m.getSize().x)
            {
                trunk3m.setPosition(sf::Vector2f(window.getSize().x,trunk3m.getPosition().y));
            }
            if(trunk3m.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(-0.17,0);
            }   

            trunk31s.move(-0.17,0);
            if(trunk31s.getPosition().x < 0-trunk31s.getSize().x)
            {
                trunk31s.setPosition(sf::Vector2f(window.getSize().x,trunk31s.getPosition().y));
            }
            if(trunk31s.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(-0.17,0);
            }   



            // lakposht movement
            t1.move(0.19,0);
            if(t1.getPosition().x > window.getSize().x)
            {
                t1.setPosition(sf::Vector2f(-40,t1.getPosition().y));
            }
            if(t1.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }

             t2.move(0.19,0);
            if(t2.getPosition().x > window.getSize().x)
            {
                t2.setPosition(sf::Vector2f(-40,t2.getPosition().y));
            }
            if(t2.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }
             t3.move(0.19,0);
            if(t3.getPosition().x > window.getSize().x)
            {
                t3.setPosition(sf::Vector2f(-40,t3.getPosition().y));
            }
            if(t3.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }

             t4.move(0.19,0);
            if(t4.getPosition().x > window.getSize().x)
            {
                t4.setPosition(sf::Vector2f(-40,t4.getPosition().y));
            }
            if(t4.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }

             t5.move(0.19,0);
            if(t5.getPosition().x > window.getSize().x)
            {
                t5.setPosition(sf::Vector2f(-40,t5.getPosition().y));
            }
            if(t5.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }

             t6.move(0.19,0);
            if(t6.getPosition().x > window.getSize().x)
            {
                t6.setPosition(sf::Vector2f(-40,t6.getPosition().y));
            }
            if(t6.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }

             t7.move(0.19,0);
            if(t7.getPosition().x > window.getSize().x)
            {
                t7.setPosition(sf::Vector2f(-40,t7.getPosition().y));
            }
            if(t7.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }

             t8.move(0.19,0);
            if(t8.getPosition().x > window.getSize().x)
            {
                t8.setPosition(sf::Vector2f(-40,t8.getPosition().y));
            }
            if(t8.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }

             t9.move(0.19,0);
            if(t9.getPosition().x > window.getSize().x)
            {
                t9.setPosition(sf::Vector2f(-40,t9.getPosition().y));
            }
            if(t9.getGlobalBounds().intersects(frog.getGlobalBounds()))
            {
                frog.move(0.19,0);
            }

            if (frog.getPosition().y>=120 && frog.getPosition().y<=280)
            {
               if(!(frog.getGlobalBounds().intersects(trunk0b.getGlobalBounds())|| frog.getGlobalBounds().intersects(trunk0m.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(trunk01s.getGlobalBounds())|| frog.getGlobalBounds().intersects(trunk1b.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(trunk1m.getGlobalBounds())|| frog.getGlobalBounds().intersects(trunk11s.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(trunk2b.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(trunk2m.getGlobalBounds())|| frog.getGlobalBounds().intersects(trunk21s.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(trunk3b.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(trunk3m.getGlobalBounds())|| frog.getGlobalBounds().intersects(trunk31s.getGlobalBounds())||
               frog.getGlobalBounds().intersects(t1.getGlobalBounds())||
               frog.getGlobalBounds().intersects(t2.getGlobalBounds())|| frog.getGlobalBounds().intersects(t3.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(t4.getGlobalBounds())|| frog.getGlobalBounds().intersects(t5.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(t6.getGlobalBounds())|| frog.getGlobalBounds().intersects(t7.getGlobalBounds())|| 
               frog.getGlobalBounds().intersects(t8.getGlobalBounds())|| frog.getGlobalBounds().intersects(t9.getGlobalBounds())))
               {
                   window.close();
               } 
            }
            

            ////////////////////////////////////////river movement finish///////////////////////////////////////////


            window.clear();
            // object drawing
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
            window.draw(trunk0b);
            window.draw(trunk0m);
            window.draw(trunk01s);
            window.draw(trunk1b);
            window.draw(trunk2b);
            window.draw(trunk3b);
            window.draw(trunk1m);
            window.draw(trunk2m);
            window.draw(trunk3m);
            window.draw(trunk11s);
            window.draw(trunk21s);
            window.draw(trunk31s);
            window.draw(t1);
            window.draw(t2);
            window.draw(t3);
            window.draw(t4);
            window.draw(t5);
            window.draw(t6);
            window.draw(t7);
            window.draw(t8);
            window.draw(t9);


            


              




            window.draw(frog);
            window.display();

         

            
    }

    return EXIT_SUCCESS;

}