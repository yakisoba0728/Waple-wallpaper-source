// Function: FUN_140016170
// Addr: 140016170
// Size: 300 bytes


void FUN_140016170(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar5 = auStack_38;
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
    uVar6 = 0;
    if (uVar2 < 0x7fffffffffffffff) goto LAB_140016213;
    uVar4 = 0xfffffffffffffffe;
    puVar5 = auStack_38;
    uVar2 = 0x7ffffffffffffffe;
    do {
      if (uVar4 < 0x1000) {
        *(undefined8 *)(puVar5 + -8) = 0x140016256;
        uVar6 = FUN_14028af20();
        break;
      }
      if (uVar4 + 0x27 <= uVar4) {
LAB_140016292:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar5 + -8) = &UNK_140016297;
        FUN_140017370();
      }
      *(undefined8 *)(puVar5 + -8) = 0x140016207;
      lVar3 = FUN_14028af20(uVar4 + 0x27);
      if (lVar3 != 0) {
        uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar3;
        break;
      }
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar5 = puVar5 + 8;
LAB_140016213:
      if (uVar2 < 10) {
        uVar2 = 10;
      }
      if (0x7fffffffffffffff < uVar2 + 1) goto LAB_140016292;
      uVar4 = (uVar2 + 1) * 2;
    } while (uVar4 != 0);
    param_1[2] = param_3;
    *param_1 = uVar6;
    param_1[3] = uVar2;
    *(undefined8 *)(puVar5 + -8) = 0x140016275;
    FUN_1404210f0(uVar6,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + uVar6) = 0;
  }
  return;
}

