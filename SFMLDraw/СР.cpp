#include <iostream>
#include <windows.h>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
void space(int i)
{
    for (int k = 0; k < i; k++)
        std::cout << " ";
}
void symbol(int i)
{
    for (int k = 0; k < i; k++)
        std::cout << "*";
}
void line_break(int i)
{
    for (int k = 0; k < i; k++)
        std::cout << std::endl;
}
void printSome(int i, char c)
{
    for (int ii = 0; ii < i; ii++)
        std::cout << c;
}


int main() {

    RenderWindow window(VideoMode(200, 200), "SFML Works!");

    CircleShape redCircle(50);
    redCircle.setFillColor(Color(255, 0, 0));
    RectangleShape rect(sf::Vector2f(10, 100));;
    rect.rotate(320);
    rect.move(14.f,14.f);
    rect.setFillColor(Color(0, 255, 3));

    sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
    {
        cout << "file cannot download" << std::endl;
    }
    sf::Text text;
    text.setFont(font);
    text.setString("Hello SFML");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color(244, 100, 1));
    text.setStyle(sf::Text::Bold | sf::Text::Underlined);
    text.move(0, 170);
    text.setLetterSpacing(3.f);


    while (window.isOpen())
    {

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.display();
     
        window.draw(redCircle);
        window.draw(rect);

        window.draw(text);
        {
        }
    }
}