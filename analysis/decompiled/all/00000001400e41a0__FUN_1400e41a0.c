// Function: FUN_1400e41a0
// Addr: 1400e41a0
// Size: 315 bytes


void FUN_1400e41a0(undefined8 *param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if (param_4 == 0) {
    return;
  }
  uVar5 = param_4 * 0x10;
  uVar7 = (ulonglong)((uint)*param_2 & 7);
  uVar8 = 8 - uVar7;
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  if ((uVar8 <= *param_3) && (uVar7 = *param_3 - uVar8, uVar5 <= uVar7)) {
    puVar9 = (undefined8 *)(uVar8 + *param_2);
    *param_3 = uVar7;
    *param_2 = (longlong)puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      puVar4 = puVar9 + param_4 * 2;
      for (puVar2 = puVar9; puVar2 != puVar4; puVar2 = puVar2 + 2) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      *param_3 = uVar7 + param_4 * -0x10;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = puVar9;
      param_1[1] = puVar4;
      *param_2 = (longlong)puVar4;
      return;
    }
  }
  if (param_4 < 0x1000000000000000) {
    puVar4 = (undefined8 *)0x0;
    puVar9 = puVar4;
    if (uVar5 != 0) {
      if (uVar5 < 0x1000) {
        puVar4 = (undefined8 *)FUN_14028af20();
        puVar9 = puVar4;
      }
      else {
        if (uVar5 + 0x27 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar3 = FUN_14028af20(uVar5 + 0x27);
        lVar6 = lVar3;
        if (lVar3 == 0) {
          lVar6 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar3 = (*pcVar1)();
        }
        puVar4 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        puVar4[-1] = lVar6;
        puVar9 = puVar4;
      }
    }
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
    param_1[1] = puVar4;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = puVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c340(0xc);
}

