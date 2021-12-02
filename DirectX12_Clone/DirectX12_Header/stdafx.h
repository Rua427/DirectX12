#pragma once

/*빌드 시간을 단축할 수 있도록 
Visual C++는 자주 사용하지 않는 API의 일부를 제외하여 
Win32 헤더 파일의 크기를 줄이기 위해 WIN32_LEAN_AND_MEAN 같은 매크로를 제공한다.

MFC가 아닌 응용 프로그램의 경우에는 WIN32_LEAN_AND_MEAN 매크로를 정의하여 빌드 시간을 단축할 수 있다.

출처: https://kksuny.tistory.com/55 [생각이 없는 프로그래밍]
*/
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif


#include <windows.h>

#include <d3d12.h>
#include <dxgi1_6.h>
#include <D3Dcompiler.h>
#include <DirectXMath.h>
#include "d3dx12.h"

#include <string>
#include <wrl.h>	
#include <shellapi.h>
