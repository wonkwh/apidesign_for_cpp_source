

#include "fireworks.h"

int main(int, char **)
{
	// create a new Fireworks object
	apibook::Fireworks fireworks;

	// set the properties of the Fireworks particle system
	fireworks.SetOrigin(50, 20);
	fireworks.SetColor(1.0, 0.0, 0.0);
	fireworks.SetSpeed(10.0);
	fireworks.SetNumberOfParticles(1000);

	// start the particle system
	fireworks.Start();

	return 0;
}
