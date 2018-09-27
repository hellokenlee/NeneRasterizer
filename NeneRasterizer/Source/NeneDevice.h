/*Copyright reserved by KenLee@2018 hellkenlee@163.com*/
#ifndef NENE_DEVICE_H
#define NENE_DEVICE_H

#include <SDL2/SDL.h>

//
//	Render Device Class
//

class NeneDevice {
public:
	NeneDevice(int sw, int sh, const char* windowName);
	~NeneDevice();

	void clear();
	void swapBuffer();

	void setDrawColor(int r, int g, int b, int a);
	void drawPixel(int x, int y);
private:
	int mScreenWidth, mScreenHeight;
	SDL_Window* mpWindow;
	SDL_Renderer* mpRenderer;
	SDL_Texture* mpRenderTarget;
	SDL_Surface* mpSurface;
};

#endif // NENE_DEVICE_H