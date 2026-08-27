// Function: FUN_14029d850
// Addr: 14029d850
// Size: 374 bytes


ulonglong * FUN_14029d850(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar8 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    FUN_1404210f0(0,param_2,uVar1 * 2 + 2);
    return param_1;
  }
  uVar3 = uVar1 | 7;
  if (uVar3 < 0x7fffffffffffffff) goto LAB_14029d900;
  uVar6 = 0xfffffffffffffffe;
  puVar8 = auStack_48;
  uVar3 = 0x7ffffffffffffffe;
  do {
    if (uVar6 < 0x1000) {
      *(undefined8 *)(puVar8 + -8) = 0x14029d943;
      uVar5 = FUN_14028af20();
      goto LAB_14029d943;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_14029d9c2:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_14029d9c7;
      FUN_140017370();
    }
    *(undefined8 *)(puVar8 + -8) = 0x14029d8f1;
    lVar4 = FUN_14028af20(uVar6 + 0x27);
    if (lVar4 != 0) {
      uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar4;
      goto LAB_14029d943;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar8 = puVar8 + 8;
LAB_14029d900:
    if (uVar3 < 10) {
      uVar3 = 10;
    }
    if (0x7fffffffffffffff < uVar3 + 1) goto LAB_14029d9c2;
    uVar6 = (uVar3 + 1) * 2;
    if (uVar6 == 0) {
LAB_14029d943:
      *param_1 = uVar5;
      param_1[2] = uVar1;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar8 + -8) = 0x14029d961;
      FUN_1404210f0(uVar5,param_2,uVar1 * 2 + 2);
      uVar1 = param_1[3];
      if ((7 < uVar1) && (DAT_140472230 != '\0')) {
        uVar3 = *param_1;
        uVar7 = uVar1 * 2 + 9 + uVar3 & 0xfffffffffffffff8;
        uVar1 = uVar3 + (uVar1 + 1) * 2;
        uVar5 = uVar3 + (param_1[2] + 1) * 2;
        uVar6 = uVar7;
        if (uVar1 <= uVar7) {
          uVar6 = uVar1;
        }
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        *(undefined8 *)(puVar8 + -8) = 0x14029d9af;
        _guard_check_icall(uVar3,uVar7,uVar6,uVar5);
      }
      return param_1;
    }
  } while( true );
}

