#include <iostream>
#include "raylib-cpp.hpp"

using namespace std;

int main(int argc, const char** argv) {
	cout << "starting up program" << endl;

	int winWidth = 450;
	int winLength = 500;

	SetTargetFPS(60);

	raylib::Window window(winWidth, winLength, "Test");

	while (!window.ShouldClose()){
		BeginDrawing();

		window.ClearBackground(RAYWHITE);

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}

	return 0;
}