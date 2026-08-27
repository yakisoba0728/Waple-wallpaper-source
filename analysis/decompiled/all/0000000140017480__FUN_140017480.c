// Function: FUN_140017480
// Addr: 140017480
// Size: 250 bytes


void FUN_140017480(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar6 = auStack_48;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    FUN_1404210f0();
    *(undefined1 *)((longlong)param_1 + param_3) = 0;
    return;
  }
  uVar3 = param_3 | 0xf;
  if (uVar3 < 0x8000000000000000) goto LAB_1400174fc;
  uVar5 = 0x8000000000000027;
  puVar6 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  do {
    *(undefined8 *)(puVar6 + -8) = 0x1400174f0;
    lVar4 = FUN_14028af20(uVar5);
    if (lVar4 != 0) {
      uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar4;
LAB_140017544:
      *param_1 = uVar5;
      param_1[2] = param_3;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar6 + -8) = 0x14001755d;
      FUN_1404210f0(uVar5,param_2,param_3);
      *(undefined1 *)(uVar5 + param_3) = 0;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar6 = puVar6 + 8;
LAB_1400174fc:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) {
      uVar5 = 0;
      goto LAB_140017544;
    }
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar6 + -8) = 0x140017541;
      uVar5 = FUN_14028af20(uVar1);
      goto LAB_140017544;
    }
    uVar5 = uVar3 + 0x28;
    if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar6 + -8) = &UNK_14001757b;
      FUN_140017370();
    }
  } while( true );
}

