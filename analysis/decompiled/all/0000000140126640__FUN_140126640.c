// Function: FUN_140126640
// Addr: 140126640
// Size: 412 bytes


void FUN_140126640(int param_1,longlong param_2,POINT *param_3)

{
  BOOL BVar1;
  HWND pHVar2;
  HANDLE pvVar3;
  longlong lVar4;
  longlong lParam;
  
  if (-1 < param_1) {
    lParam = (longlong)CONCAT22((short)param_3->y,(short)param_3->x);
    if (param_2 == 0x200) {
      lVar4 = 0;
      do {
        if ((HWND)(&DAT_1404e8d70)[lVar4] != (HWND)0x0) {
          PostMessageW((HWND)(&DAT_1404e8d70)[lVar4],0x200,0,lParam);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
    }
    else if (param_2 == 0x201) {
      BVar1 = IsWindow(DAT_1404e8d60);
      if (BVar1 == 0) {
        pHVar2 = GetDesktopWindow();
        EnumChildWindows(pHVar2,FUN_140126590,0);
      }
      BVar1 = IsWindow(DAT_1404e8d60);
      if ((BVar1 != 0) &&
         (((pHVar2 = WindowFromPoint(*param_3), DAT_1404e8d60 == pHVar2 || (DAT_1404e8d68 == pHVar2)
           ) || (pvVar3 = GetPropW(pHVar2,L"WallpaperEngineParent"), pvVar3 == (HANDLE)0x1)))) {
        lVar4 = 0;
        do {
          if ((HWND)(&DAT_1404e8d70)[lVar4] != (HWND)0x0) {
            PostMessageW((HWND)(&DAT_1404e8d70)[lVar4],0x201,0,lParam);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
      }
    }
    else if (param_2 == 0x202) {
      lVar4 = 0;
      do {
        if ((HWND)(&DAT_1404e8d70)[lVar4] != (HWND)0x0) {
          PostMessageW((HWND)(&DAT_1404e8d70)[lVar4],0x202,0,lParam);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x0001401267d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CallNextHookEx(0,param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140126669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CallNextHookEx(0,param_1,param_2,param_3);
  return;
}

