// Function: FUN_1400e42e0
// Addr: 1400e42e0
// Size: 351 bytes


void FUN_1400e42e0(undefined8 *param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if (param_4 == 0) {
    return;
  }
  uVar1 = param_4 * 0x18;
  uVar7 = (ulonglong)((uint)*param_2 & 7);
  uVar8 = 8 - uVar7;
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  if ((uVar8 <= *param_3) && (uVar7 = *param_3 - uVar8, uVar1 <= uVar7)) {
    puVar9 = (undefined8 *)(uVar8 + *param_2);
    *param_3 = uVar7;
    *param_2 = (longlong)puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      puVar5 = puVar9 + param_4 * 3;
      for (puVar3 = puVar9; puVar3 != puVar5; puVar3 = puVar3 + 3) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      *param_3 = uVar7 + param_4 * -0x18;
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = puVar9;
      param_1[1] = puVar5;
      *param_2 = (longlong)puVar5;
      return;
    }
  }
  if (param_4 < 0xaaaaaaaaaaaaaab) {
    puVar5 = (undefined8 *)0x0;
    puVar9 = puVar5;
    if (uVar1 != 0) {
      if (uVar1 < 0x1000) {
        puVar5 = (undefined8 *)FUN_14028af20();
        puVar9 = puVar5;
      }
      else {
        if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        lVar4 = FUN_14028af20(uVar1 + 0x27);
        lVar6 = lVar4;
        if (lVar4 == 0) {
          lVar6 = 5;
          pcVar2 = (code *)swi(0x29);
          lVar4 = (*pcVar2)();
        }
        puVar5 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        puVar5[-1] = lVar6;
        puVar9 = puVar5;
      }
    }
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5 = puVar5 + 3;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
    param_1[1] = puVar5;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = puVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c340(0xc);
}

