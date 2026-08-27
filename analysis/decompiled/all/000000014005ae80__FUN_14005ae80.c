// Function: FUN_14005ae80
// Addr: 14005ae80
// Size: 321 bytes


void FUN_14005ae80(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar7 = auStack_48;
  lVar3 = param_1[1];
  lVar1 = *param_1;
  uVar8 = lVar3 - lVar1;
  if (param_2 < uVar8) {
    param_1[1] = lVar1 + param_2;
    return;
  }
  if (uVar8 < param_2) {
    uVar4 = param_1[2] - lVar1;
    if (param_2 <= uVar4) {
      FUN_1404217a0(lVar3,0,param_2 - uVar8);
      param_1[1] = (param_2 - uVar8) + lVar3;
      return;
    }
    uVar6 = 0x7fffffffffffffff;
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar5 = uVar4 >> 1;
    if (uVar4 <= 0x7fffffffffffffff - uVar5) goto LAB_14005af0d;
    uVar4 = 0x8000000000000026;
    puVar7 = auStack_48;
    while( true ) {
      *(undefined8 *)(puVar7 + -8) = 0x14005af01;
      lVar3 = FUN_14028af20(uVar4);
      if (lVar3 != 0) break;
      uVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar7 = puVar7 + 8;
LAB_14005af0d:
      uVar6 = uVar5 + uVar4;
      if (uVar5 + uVar4 < param_2) {
        uVar6 = param_2;
      }
      if (uVar6 == 0) {
        uVar4 = 0;
        goto LAB_14005af52;
      }
      if (uVar6 < 0x1000) {
        *(undefined8 *)(puVar7 + -8) = 0x14005af4f;
        uVar4 = FUN_14028af20(uVar6);
        goto LAB_14005af52;
      }
      uVar4 = uVar6 + 0x27;
      if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar7 + -8) = &UNK_14005afc2;
        FUN_140017370();
      }
    }
    uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar4 - 8) = lVar3;
LAB_14005af52:
    *(undefined8 *)(puVar7 + -8) = 0x14005af63;
    FUN_1404217a0(uVar4 + uVar8,0,param_2 - uVar8);
    lVar3 = *param_1;
    lVar1 = param_1[1];
    *(undefined8 *)(puVar7 + -8) = 0x14005af75;
    FUN_1404210f0(uVar4,lVar3,lVar1 - lVar3);
    *(undefined8 *)(puVar7 + -8) = 0x14005af86;
    FUN_14005b010(param_1,uVar4,param_2,uVar6);
  }
  return;
}

