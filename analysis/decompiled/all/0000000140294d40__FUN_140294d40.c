// Function: FUN_140294d40
// Addr: 140294d40
// Size: 372 bytes


void FUN_140294d40(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar6 = auStack_38;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_1404210f0(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
  }
  else {
    uVar2 = param_3 | 7;
    uVar7 = 0;
    if (uVar2 < 0x7fffffffffffffff) goto LAB_140294ddd;
    uVar4 = 0xfffffffffffffffe;
    puVar6 = auStack_38;
    uVar2 = 0x7ffffffffffffffe;
    do {
      if (uVar4 < 0x1000) {
        *(undefined8 *)(puVar6 + -8) = 0x140294e20;
        uVar7 = FUN_14028af20();
        break;
      }
      if (uVar4 + 0x27 <= uVar4) {
LAB_140294eb0:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_140294eb5;
        FUN_140017370();
      }
      *(undefined8 *)(puVar6 + -8) = 0x140294dd1;
      lVar3 = FUN_14028af20(uVar4 + 0x27);
      if (lVar3 != 0) {
        uVar7 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar3;
        break;
      }
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar6 = puVar6 + 8;
LAB_140294ddd:
      if (uVar2 < 10) {
        uVar2 = 10;
      }
      if (0x7fffffffffffffff < uVar2 + 1) goto LAB_140294eb0;
      uVar4 = (uVar2 + 1) * 2;
    } while (uVar4 != 0);
    param_1[2] = param_3;
    *param_1 = uVar7;
    param_1[3] = uVar2;
    *(undefined8 *)(puVar6 + -8) = 0x140294e3f;
    FUN_1404210f0(uVar7,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + uVar7) = 0;
    uVar2 = param_1[3];
    if ((7 < uVar2) && (DAT_140472230 != '\0')) {
      uVar4 = *param_1;
      uVar5 = uVar2 * 2 + 9 + uVar4 & 0xfffffffffffffff8;
      uVar2 = uVar4 + (uVar2 + 1) * 2;
      uVar7 = uVar4 + (param_1[2] + 1) * 2;
      uVar8 = uVar5;
      if (uVar2 <= uVar5) {
        uVar8 = uVar2;
      }
      if (uVar5 < uVar7) {
        uVar7 = uVar5;
      }
      *(undefined8 *)(puVar6 + -8) = 0x140294e92;
      _guard_check_icall(uVar4,uVar5,uVar8,uVar7);
    }
  }
  return;
}

