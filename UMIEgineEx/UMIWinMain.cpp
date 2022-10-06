#include <Windows.h>
//Window Procedure
LRESULT CALLBACK UMIWindowProdure(HWND,UINT,WPARAM,LPARAM);
//Variabel
HMENU hMenu ;
// Create Windown
int WINAPI WinMain(HINSTANCE hInst , HINSTANCE hPInst ,LPSTR args , int n)
{
    //Class Window
    WNDCLASSW UMIwc ={0} ; 
    UMIwc.hbrBackground = (HBRUSH)COLOR_WINDOW ; 
    UMIwc.hCursor = LoadCursor(NULL , IDC_ARROW);
    UMIwc.hInstance = hInst ; 
    UMIwc.lpszClassName = L"UMIWindowClass" ; 
    UMIwc.lpfnWndProc = UMIWindowProdure ; 
    //Register Window
    RegisterClassW(&UMIwc);
    CreateWindowW( L"UMIWindowClass",L"UMIEgineX",WS_OVERLAPPEDWINDOW|WS_VISIBLE,68,88,1200,720,
                  NULL,NULL,NULL,NULL);

    // Message Events
    MSG msg ={0} ;
    while(GetMessage(&msg ,0,0,0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg) ;
    }    
    return 0 ;
}

//CallBack
LRESULT CALLBACK UMIWindowProdure(HWND hWnd,UINT msg,WPARAM wp,LPARAM lp)
{
   
    switch (msg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    
    default:
        return DefWindowProcW(hWnd,msg,wp,lp);
        break;
    }
}