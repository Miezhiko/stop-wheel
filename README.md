# stop-wheel

[![Discord](https://img.shields.io/discord/611822838831251466?label=Discord&color=pink)](https://discord.gg/GdzjVvD)
[![Twitter Follow](https://img.shields.io/twitter/follow/Qeenon.svg?style=social)](https://twitter.com/Qeenon)

```cpp
LRESULT __stdcall Callback(int c, WPARAM p, LPARAM l) {
  if (c >= 0 && p == WM_MOUSEWHEEL) {
    return 1;
  }
  return CallNextHookEx(mh, c, p, l);
}
```
