#ifndef HDIRECTX_H
#define HDIRECTX_H

#include "RenderMain.h"
#include "hDrawings.h"

#include <Windows.h>
#include <iostream>

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

#pragma warning( disable : 2001 )

#include <dwmapi.h>
#pragma comment(lib, "dwmapi.lib")

extern IDirect3D9Ex* p_Object;
extern IDirect3DDevice9Ex* p_Device;
extern D3DPRESENT_PARAMETERS p_Params;
extern ID3DXLine* p_Line;
extern ID3DXFont* pFontSmall;

int DirectXInit(HWND hWnd);
int Render();

#endif