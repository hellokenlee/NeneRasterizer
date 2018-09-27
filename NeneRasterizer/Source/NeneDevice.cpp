/*Copyright reserved by KenLee@2018 hellkenlee@163.com*/
#include "NeneDevice.h"
#include "Debug.h"

NeneDevice::NeneDevice(int sw, int sh, const char* windowName) {
	mScreenWidth = sw;
	mScreenHeight = sh;
	
	// 初始化SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		dLog("[NeneDevice] Init error: %s\n", SDL_GetError());
		SDL_Quit();
		exit(-1);
	}
	// 创建窗口
	mpWindow = SDL_CreateWindow(windowName, 0, 0, mScreenWidth, mScreenHeight, SDL_WINDOW_SHOWN);
	if (mpWindow == nullptr) {
		dLog("[NeneDevice] Failed to create window: %s\n", SDL_GetError());
		SDL_Quit();
		exit(-1);
	}
	// 创建渲染器
	mpRenderer = SDL_CreateRenderer(mpWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (mpRenderer == nullptr) {
		dLog("[NeneDevice] Failed to create render: %s\n", SDL_GetError());
		SDL_Quit();
		exit(-1);
	}
	//
	mpRenderTarget = SDL_CreateTexture(mpRenderer, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STREAMING, sw, sh);
	mpSurface = SDL_GetWindowSurface(mpWindow);
}


NeneDevice::~NeneDevice() {
	;
}

void NeneDevice::setDrawColor(int r, int g, int b, int a) {
	SDL_SetRenderDrawColor(mpRenderer, r, g, b, a);
}

void NeneDevice::drawPixel(int x, int y) {
	;
}