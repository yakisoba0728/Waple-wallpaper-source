// Function: FUN_14003a8b0
// Addr: 14003a8b0
// Size: 323 bytes


undefined8 * FUN_14003a8b0(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  size_t sVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar10 = auStack_48;
  lVar3 = param_2[2];
  sVar5 = strlen(param_3);
  if (0x7fffffffffffffffU - lVar3 < sVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar8 = (undefined8 *)0x0;
  uVar2 = sVar5 + lVar3;
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
    if (uVar6 < 0x8000000000000000) goto LAB_14003a94c;
    uVar9 = 0x8000000000000027;
    puVar10 = auStack_48;
    uVar6 = 0x7fffffffffffffff;
    while( true ) {
      *(undefined8 *)(puVar10 + -8) = 0x14003a940;
      lVar7 = FUN_14028af20(uVar9);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        puVar8[-1] = lVar7;
        *param_1 = puVar8;
        goto LAB_14003a9a0;
      }
      pcVar4 = (code *)swi(0x29);
      uVar6 = (*pcVar4)(5);
      puVar10 = puVar10 + 8;
LAB_14003a94c:
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar1 = uVar6 + 1;
      if (uVar1 == 0) break;
      if (uVar1 < 0x1000) {
        *(undefined8 *)(puVar10 + -8) = 0x14003a990;
        puVar8 = (undefined8 *)FUN_14028af20(uVar1);
        break;
      }
      uVar9 = uVar6 + 0x28;
      if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + -8) = &UNK_14003a9f4;
        FUN_140017370();
      }
    }
    *param_1 = puVar8;
  }
LAB_14003a9a0:
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  *(undefined8 *)(puVar10 + -8) = 0x14003a9b6;
  FUN_1404210f0(puVar8,param_2,lVar3);
  *(undefined8 *)(puVar10 + -8) = 0x14003a9c5;
  FUN_1404210f0((longlong)puVar8 + lVar3,param_3,sVar5);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  return param_1;
}

