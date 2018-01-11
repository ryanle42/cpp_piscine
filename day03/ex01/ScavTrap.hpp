#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

class ScavTrap {
  
  public:

    ScavTrap( std::string name );
    ~ScavTrap( void );
    std::string getName( void ) const;
    void meleeAttack( std::string const & target ) const;
    void rangedAttack( std::string const & target ) const;
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    void challengeNewcomer(std::string const & target);

  private:
    static std::string _attacks[];
    std::string _name;
    int _HP;
    int _maxHP;
    int _EP;
    int _maxEP;
    int _level;
    int _meleeDmg;
    int _rangeDmg;
    unsigned int _armor;

};

#endif