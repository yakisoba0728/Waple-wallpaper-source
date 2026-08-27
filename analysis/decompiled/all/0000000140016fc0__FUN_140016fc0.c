// Function: FUN_140016fc0
// Addr: 140016fc0
// Size: 268 bytes


ulonglong * FUN_140016fc0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar8 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < param_2[3]) {
    param_2 = (ulonglong *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    return param_1;
  }
  uVar4 = uVar2 | 0xf;
  if (uVar4 < 0x8000000000000000) goto LAB_140017055;
  uVar7 = 0x8000000000000027;
  puVar8 = auStack_48;
  uVar4 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar8 + -8) = 0x140017046;
    lVar5 = FUN_14028af20(uVar7);
    if (lVar5 != 0) break;
    pcVar3 = (code *)swi(0x29);
    uVar4 = (*pcVar3)(5);
    puVar8 = puVar8 + 8;
LAB_140017055:
    if (uVar4 < 0x16) {
      uVar4 = 0x16;
    }
    uVar1 = uVar4 + 1;
    if (uVar1 == 0) goto LAB_14001709b;
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar8 + -8) = 0x14001709b;
      uVar6 = FUN_14028af20(uVar1);
      goto LAB_14001709b;
    }
    uVar7 = uVar4 + 0x28;
    if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_1400170cd;
      FUN_140017370();
    }
  }
  uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar5;
LAB_14001709b:
  *param_1 = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined8 *)(puVar8 + -8) = 0x1400170b5;
  FUN_1404210f0(uVar6,param_2,uVar2 + 1);
  return param_1;
}

