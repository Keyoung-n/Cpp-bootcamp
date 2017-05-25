#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int				main(void)
{
	ScavTrap	star("Dark star");
	FragTrap	Ultron("Ultron");

	star.rangedAttack("Ultron");
	Ultron.takeDamage(star.getRanged_attack_damage());

	Ultron.meleeAttack("Dark star");
	star.takeDamage(Ultron.getMelee_attack_damage());

	star.meleeAttack("Ultron");
	Ultron.takeDamage(star.getMelee_attack_damage());

	Ultron.rangedAttack("Dark star");
	star.takeDamage(Ultron.getMelee_attack_damage());

	Ultron.beRepaired(50);

	Ultron.rangedAttack("Dark star");
	star.takeDamage(Ultron.getRanged_attack_damage());

	star.challengeNewcomer(Ultron.getName());
	star.challengeNewcomer(Ultron.getName());

	star.takeDamage(Ultron.vaulthunter_dot_exe("Dark star"));
	star.takeDamage(Ultron.vaulthunter_dot_exe("Dark star"));
	star.takeDamage(Ultron.vaulthunter_dot_exe("Dark star"));

	Ultron.takeDamage(200);
}
