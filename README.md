# stop-wheel

```cpp
LRESULT __stdcall Callback(int c, WPARAM p, LPARAM l) {
  if (c >= 0 && p == WM_MOUSEWHEEL) {
    return 1;
  }
  return CallNextHookEx(mh, c, p, l);
}
```
