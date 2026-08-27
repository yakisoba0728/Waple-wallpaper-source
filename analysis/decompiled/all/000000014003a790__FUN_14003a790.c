// Function: FUN_14003a790
// Addr: 14003a790
// Size: 273 bytes


undefined8 *
FUN_14003a790(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  
  puVar8 = auStack_58;
  puVar6 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_5 + param_7;
  if (uVar2 < 0x10) {
    uVar4 = 0xf;
    puVar6 = param_1;
  }
  else {
    uVar4 = uVar2 | 0xf;
    puVar8 = auStack_58;
    if (uVar4 < 0x8000000000000000) goto LAB_14003a808;
    uVar7 = 0x8000000000000027;
    puVar8 = auStack_58;
    uVar4 = 0x7fffffffffffffff;
    while( true ) {
      *(undefined8 *)(puVar8 + -8) = 0x14003a7fc;
      lVar5 = FUN_14028af20(uVar7);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        puVar6[-1] = lVar5;
        *param_1 = puVar6;
        goto LAB_14003a85c;
      }
      pcVar3 = (code *)swi(0x29);
      uVar4 = (*pcVar3)(5);
      puVar8 = puVar8 + 8;
LAB_14003a808:
      if (uVar4 < 0x16) {
        uVar4 = 0x16;
      }
      uVar1 = uVar4 + 1;
      if (uVar1 == 0) break;
      if (uVar1 < 0x1000) {
        *(undefined8 *)(puVar8 + -8) = 0x14003a84c;
        puVar6 = (undefined8 *)FUN_14028af20(uVar1);
        break;
      }
      uVar7 = uVar4 + 0x28;
      if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_14003a8a1;
        FUN_140017370();
      }
    }
    *param_1 = puVar6;
  }
LAB_14003a85c:
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined8 *)(puVar8 + -8) = 0x14003a872;
  FUN_1404210f0(puVar6,param_4,param_5);
  *(undefined8 *)(puVar8 + -8) = 0x14003a886;
  FUN_1404210f0((longlong)puVar6 + param_5,*(undefined8 *)(puVar8 + 0x88),param_7);
  *(undefined1 *)((longlong)puVar6 + uVar2) = 0;
  return param_1;
}

