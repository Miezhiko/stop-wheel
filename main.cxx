#include <Windows.h>

HHOOK mh;

LRESULT __stdcall Callback(int c, WPARAM p, LPARAM l) {
  if (c >= 0 && p == WM_MOUSEWHEEL) {
    return 1;
  }
  return CallNextHookEx(mh, c, p, l);
}

int WINAPI WinMain(HINSTANCE i, HINSTANCE pi, LPSTR l, int s) {
  mh = SetWindowsHookEx(WH_MOUSE_LL, Callback, NULL, 0);
  MSG msg;
  while (GetMessage(&msg, NULL, 0, 0)) {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }
  UnhookWindowsHookEx(mh);
  return static_cast<int>(msg.wParam);
}
