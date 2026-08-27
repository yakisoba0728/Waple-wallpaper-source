// Function: FUN_140076fd0
// Addr: 140076fd0
// Size: 326 bytes


undefined8 * FUN_140076fd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar10 = auStack_48;
  lVar3 = param_2[2];
  uVar4 = param_3[2];
  if (0x7fffffffffffffffU - lVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  puVar8 = (undefined8 *)0x0;
  uVar2 = lVar3 + uVar4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (uVar2 < 0x10) {
    uVar6 = 0xf;
    puVar8 = param_1;
  }
  else {
    uVar6 = uVar2 | 0xf;
    puVar10 = auStack_48;
    if (uVar6 < 0x8000000000000000) goto LAB_14007706f;
    uVar9 = 0x8000000000000027;
    puVar10 = auStack_48;
    uVar6 = 0x7fffffffffffffff;
    while( true ) {
      *(undefined8 *)(puVar10 + -8) = 0x140077063;
      lVar7 = FUN_14028af20(uVar9);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        puVar8[-1] = lVar7;
        *param_1 = puVar8;
        goto LAB_1400770c3;
      }
      pcVar5 = (code *)swi(0x29);
      uVar6 = (*pcVar5)(5);
      puVar10 = puVar10 + 8;
LAB_14007706f:
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar1 = uVar6 + 1;
      if (uVar1 == 0) break;
      if (uVar1 < 0x1000) {
        *(undefined8 *)(puVar10 + -8) = 0x1400770b3;
        puVar8 = (undefined8 *)FUN_14028af20(uVar1);
        break;
      }
      uVar9 = uVar6 + 0x28;
      if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + -8) = &UNK_140077117;
        FUN_140017370();
      }
    }
    *param_1 = puVar8;
  }
LAB_1400770c3:
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  *(undefined8 *)(puVar10 + -8) = 0x1400770d9;
  FUN_1404210f0(puVar8,param_2,lVar3);
  *(undefined8 *)(puVar10 + -8) = 0x1400770e8;
  FUN_1404210f0((longlong)puVar8 + lVar3,param_3,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  return param_1;
}

