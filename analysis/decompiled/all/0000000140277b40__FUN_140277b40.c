// Function: FUN_140277b40
// Addr: 140277b40
// Size: 314 bytes


undefined8 *
FUN_140277b40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  
  puVar7 = auStack_58;
  puVar6 = auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_5 + param_7;
  if (uVar1 < 8) {
    uVar3 = 7;
    puVar8 = param_1;
  }
  else {
    uVar3 = uVar1 | 7;
    if (uVar3 < 0x7fffffffffffffff) goto LAB_140277bd6;
    uVar5 = 0xfffffffffffffffe;
    uVar3 = 0x7ffffffffffffffe;
    puVar7 = auStack_58;
    do {
      if (uVar5 < 0x1000) {
        *(undefined8 *)(puVar7 + -8) = 0x140277c1e;
        puVar8 = (undefined8 *)FUN_14028af20();
        *param_1 = puVar8;
        goto LAB_140277c2e;
      }
      puVar6 = puVar7;
      if (uVar5 + 0x27 <= uVar5) {
LAB_140277c75:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_140277c7a;
        FUN_140017370();
      }
      *(undefined8 *)(puVar7 + -8) = 0x140277bca;
      lVar4 = FUN_14028af20(uVar5 + 0x27);
      if (lVar4 != 0) {
        puVar8 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        puVar8[-1] = lVar4;
        *param_1 = puVar8;
        goto LAB_140277c2e;
      }
      pcVar2 = (code *)swi(0x29);
      uVar3 = (*pcVar2)(5);
      puVar6 = puVar7 + 8;
LAB_140277bd6:
      if (uVar3 < 10) {
        uVar3 = 10;
      }
      if (0x7fffffffffffffff < uVar3 + 1) goto LAB_140277c75;
      uVar5 = (uVar3 + 1) * 2;
      puVar7 = puVar6;
    } while (uVar5 != 0);
    *param_1 = 0;
    puVar8 = (undefined8 *)0x0;
  }
LAB_140277c2e:
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  *(undefined8 *)(puVar7 + -8) = 0x140277c48;
  FUN_1404210f0(puVar8,param_4,param_5 * 2);
  *(undefined8 *)(puVar7 + -8) = 0x140277c5d;
  FUN_1404210f0(param_5 * 2 + (longlong)puVar8,*(undefined8 *)(puVar7 + 0x88),param_7 * 2);
  *(undefined2 *)((longlong)puVar8 + uVar1 * 2) = 0;
  return param_1;
}

