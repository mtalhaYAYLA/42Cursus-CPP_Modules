#include "Zombie.hpp"

int main( void ) {
    std::cout << "Creating zombie on the stack." << std::endl;
    Zombie zombi1;
    zombi1.setName("Stack myayla");
    zombi1.announce();
    std::cout << "Creating zombie on the heap." << std::endl;
    Zombie *zombi2 = newZombie("Heap myayla");
    zombi2->announce();
    delete zombi2;
    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randomCump myayla");
    return EXIT_SUCCESS;
}