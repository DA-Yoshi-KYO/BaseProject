#include "Main.h"
#include "DirectX.h"

#include "Geometory.h"
#include "Sprite.h"

HRESULT Init(HWND hWnd, UINT width, UINT height)
{
	HRESULT hr;
	// DirectX初期化
	hr = InitDirectX(hWnd, width, height, false);
	// 初期化の例
	if (FAILED(hr)) { return hr; }

	Geometory::Init();
	Sprite::Init();

	return hr;
}

void Uninit()
{
	Sprite::Uninit();
	Geometory::Uninit();

	UninitDirectX();
}

void Update()
{

}

void Draw()
{
	BeginDrawDirectX();

	EndDrawDirectX();
}
