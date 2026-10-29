#include "Engine.h"


// Function prototypes


// Global Variables


int main(void) {

	// Initialise the engine (create window, setup OpenGL backend)
	int initResult = engineInit("GDV4002", 756, 756);

	// If the engine initialisation failed report error and exit
	if (initResult != 0) {

		fprintf(stderr, "Cannot setup game window!!!\n");
		return initResult; // exit if setup failed
	}

	//
	// Setup game scene objects here
	//

	GameObject2D* player = addObject(
		"Player",
		glm::vec2(0.0f, 0.0f),
		glm::radians(0.0f),
		glm::vec2(1.0f, 1.0f),
		"Resources\\Textures\\player1_ship.png",
		TextureProperties::NearestFilterTexture()
	);
	
	//
	// Set callback functions
	//
	

	// Enter main loop - this handles update and render calls
	engineMainLoop();

	// When we quit (close window for example), clean up engine resources
	engineShutdown();

	// return success :)
	return 0;
}
