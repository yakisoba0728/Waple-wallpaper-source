// Function: FUN_14005a890
// Addr: 14005a890
// Size: 607 bytes


void FUN_14005a890(undefined8 *param_1)

{
  HWND hWnd;
  size_t _Size;
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *_Buf1;
  ulonglong uVar4;
  undefined8 *_Buf2;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)*DAT_1404e8ce8;
  if (plVar5 != DAT_1404e8ce8) {
    do {
      hWnd = (HWND)plVar5[2];
      if (param_1[2] == 0) {
        CloseWindow(hWnd);
        lVar2 = DAT_1404e8cf8;
        plVar1 = DAT_1404e8ce8;
        uVar4 = (((((((((ulonglong)*(byte *)(plVar5 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar5 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar5 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar5 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar5 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar5 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar5 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar5 + 0x17)) * 0x100000001b3 & DAT_1404e8d10;
        plVar6 = *(longlong **)(DAT_1404e8cf8 + uVar4 * 0x10);
        if (*(longlong **)(DAT_1404e8cf8 + 8 + uVar4 * 0x10) == plVar5) {
          if (plVar6 == plVar5) {
            *(longlong **)(DAT_1404e8cf8 + uVar4 * 0x10) = DAT_1404e8ce8;
            *(longlong **)(lVar2 + 8 + uVar4 * 0x10) = plVar1;
          }
          else {
            *(longlong *)(DAT_1404e8cf8 + 8 + uVar4 * 0x10) = plVar5[1];
          }
        }
        else if (plVar6 == plVar5) {
          *(longlong *)(DAT_1404e8cf8 + uVar4 * 0x10) = *plVar5;
        }
LAB_14005aa9f:
        plVar6 = (longlong *)*plVar5;
        DAT_1404e8cf0 = DAT_1404e8cf0 + -1;
        *(longlong **)plVar5[1] = plVar6;
        plVar6[1] = plVar5[1];
        thunk_FUN_14028af80(plVar5,0x18);
      }
      else {
        _Buf1 = (undefined8 *)GetWindowLongPtrW(hWnd,-0x15);
        if (_Buf1 != (undefined8 *)0x0) {
          _Buf2 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            _Buf2 = (undefined8 *)*param_1;
          }
          _Size = _Buf1[2];
          if (0xf < (ulonglong)_Buf1[3]) {
            _Buf1 = (undefined8 *)*_Buf1;
          }
          if ((_Size == param_1[2]) &&
             ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
            CloseWindow(hWnd);
            lVar2 = DAT_1404e8cf8;
            plVar1 = DAT_1404e8ce8;
            uVar4 = (((((((((ulonglong)*(byte *)(plVar5 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar5 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar5 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar5 + 0x13)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar5 + 0x14)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar5 + 0x15)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar5 + 0x16)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar5 + 0x17)) * 0x100000001b3 & DAT_1404e8d10;
            plVar6 = *(longlong **)(DAT_1404e8cf8 + uVar4 * 0x10);
            if (*(longlong **)(DAT_1404e8cf8 + 8 + uVar4 * 0x10) == plVar5) {
              if (plVar6 == plVar5) {
                *(longlong **)(DAT_1404e8cf8 + uVar4 * 0x10) = DAT_1404e8ce8;
                *(longlong **)(lVar2 + 8 + uVar4 * 0x10) = plVar1;
              }
              else {
                *(longlong *)(DAT_1404e8cf8 + 8 + uVar4 * 0x10) = plVar5[1];
              }
            }
            else if (plVar6 == plVar5) {
              *(longlong *)(DAT_1404e8cf8 + uVar4 * 0x10) = *plVar5;
            }
            goto LAB_14005aa9f;
          }
        }
        plVar6 = (longlong *)*plVar5;
      }
      plVar5 = plVar6;
    } while (plVar6 != DAT_1404e8ce8);
  }
  return;
}

