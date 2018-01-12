#ifndef ENEMY_HPP
# define ENEMY_HPP

class Enemy {

public:

  Enemy(int hp, std::string const & type);
  [...] ~Enemy();
  std::string [...] getType() const;
  int getHP() const;
  virtual void takeDamage(int);

private:
  std::string _type;
  int _hp;

};

#endif