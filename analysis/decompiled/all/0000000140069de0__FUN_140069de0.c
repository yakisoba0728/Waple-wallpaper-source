// Function: FUN_140069de0
// Addr: 140069de0
// Size: 578 bytes


void FUN_140069de0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  size_t sVar2;
  HWND hWnd;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar8 = DAT_1404e5310;
  plVar9 = DAT_1404e5318;
  if (DAT_1404e5310 != DAT_1404e5318) {
    do {
      if (param_2[2] == 0) {
LAB_140069e4c:
        lVar1 = *plVar8;
        if (lVar1 != 0) {
          FUN_140058130(lVar1);
          thunk_FUN_14028af80(lVar1,0xf0);
          plVar9 = DAT_1404e5318;
        }
        FUN_1404210f0(plVar8,plVar8 + 1,(longlong)plVar9 - (longlong)(plVar8 + 1));
        plVar9 = DAT_1404e5318 + -1;
        DAT_1404e5318 = plVar9;
      }
      else {
        lVar1 = *plVar8;
        puVar5 = (undefined8 *)(lVar1 + 0x10);
        puVar7 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar7 = (undefined8 *)*param_2;
        }
        sVar2 = *(size_t *)(lVar1 + 0x20);
        if (0xf < *(ulonglong *)(lVar1 + 0x28)) {
          puVar5 = (undefined8 *)*puVar5;
        }
        if ((sVar2 == param_2[2]) &&
           ((sVar2 == 0 || (iVar4 = memcmp(puVar5,puVar7,sVar2), iVar4 == 0)))) goto LAB_140069e4c;
        plVar8 = plVar8 + 1;
      }
    } while (plVar8 != plVar9);
  }
  plVar8 = (longlong *)*DAT_1404e8ce8;
  if (plVar8 != DAT_1404e8ce8) {
    do {
      hWnd = (HWND)plVar8[2];
      if (param_2[2] == 0) {
LAB_140069f31:
        CloseWindow(hWnd);
        lVar1 = DAT_1404e8cf8;
        plVar3 = DAT_1404e8ce8;
        uVar6 = (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 & DAT_1404e8d10;
        plVar9 = *(longlong **)(DAT_1404e8cf8 + uVar6 * 0x10);
        if (*(longlong **)(DAT_1404e8cf8 + 8 + uVar6 * 0x10) == plVar8) {
          if (plVar9 == plVar8) {
            *(longlong **)(DAT_1404e8cf8 + uVar6 * 0x10) = DAT_1404e8ce8;
            *(longlong **)(lVar1 + 8 + uVar6 * 0x10) = plVar3;
          }
          else {
            *(longlong *)(DAT_1404e8cf8 + 8 + uVar6 * 0x10) = plVar8[1];
          }
        }
        else if (plVar9 == plVar8) {
          *(longlong *)(DAT_1404e8cf8 + uVar6 * 0x10) = *plVar8;
        }
        plVar9 = (longlong *)*plVar8;
        DAT_1404e8cf0 = DAT_1404e8cf0 + -1;
        *(longlong **)plVar8[1] = plVar9;
        plVar9[1] = plVar8[1];
        thunk_FUN_14028af80(plVar8,0x18);
      }
      else {
        puVar5 = (undefined8 *)GetWindowLongPtrW(hWnd,-0x15);
        if (puVar5 != (undefined8 *)0x0) {
          puVar7 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar7 = (undefined8 *)*param_2;
          }
          sVar2 = puVar5[2];
          if (0xf < (ulonglong)puVar5[3]) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if ((sVar2 == param_2[2]) &&
             ((sVar2 == 0 || (iVar4 = memcmp(puVar5,puVar7,sVar2), iVar4 == 0))))
          goto LAB_140069f31;
        }
        plVar9 = (longlong *)*plVar8;
      }
      plVar8 = plVar9;
    } while (plVar9 != DAT_1404e8ce8);
  }
  return;
}

