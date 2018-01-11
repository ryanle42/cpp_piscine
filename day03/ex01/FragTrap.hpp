#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

class FragTrap {
  
  public:

    FragTrap( std::string name );
    ~FragTrap( void );
    std::string getName( void ) const;
    void meleeAttack( std::string const & target ) const;
    void rangedAttack( std::string const & target ) const;
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    void vaulthunter_dot_exe(std::string const & target);

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