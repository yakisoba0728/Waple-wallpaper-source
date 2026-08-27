// Function: FUN_140016600
// Addr: 140016600
// Size: 289 bytes


ulonglong * FUN_140016600(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar7 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < param_2[3]) {
    param_2 = (ulonglong *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    return param_1;
  }
  uVar3 = uVar1 | 7;
  if (uVar3 < 0x7fffffffffffffff) goto LAB_1400166aa;
  uVar6 = 0xfffffffffffffffe;
  puVar7 = auStack_48;
  uVar3 = 0x7ffffffffffffffe;
  do {
    if (uVar6 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x1400166ed;
      uVar5 = FUN_14028af20();
      goto LAB_1400166ed;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_14001671d:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_140016722;
      FUN_140017370();
    }
    *(undefined8 *)(puVar7 + -8) = 0x14001669b;
    lVar4 = FUN_14028af20(uVar6 + 0x27);
    if (lVar4 != 0) {
      uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar4;
      goto LAB_1400166ed;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_1400166aa:
    if (uVar3 < 10) {
      uVar3 = 10;
    }
    if (0x7fffffffffffffff < uVar3 + 1) goto LAB_14001671d;
    uVar6 = (uVar3 + 1) * 2;
    if (uVar6 == 0) {
LAB_1400166ed:
      *param_1 = uVar5;
      param_1[2] = uVar1;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar7 + -8) = 0x14001670b;
      FUN_1404210f0(uVar5,param_2,uVar1 * 2 + 2);
      return param_1;
    }
  } while( true );
}

