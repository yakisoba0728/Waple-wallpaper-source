// Function: FUN_1400167e0
// Addr: 1400167e0
// Size: 333 bytes


void FUN_1400167e0(undefined8 *param_1,undefined2 param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar6 = auStack_48;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    if (param_3 != 0) {
      puVar7 = param_1;
      for (uVar2 = (param_3 * 2) / 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar7 = param_2;
        puVar7 = (undefined8 *)((longlong)puVar7 + 2);
      }
    }
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  puVar5 = (undefined2 *)0x0;
  uVar2 = param_3 | 7;
  uVar9 = param_3;
  if (uVar2 < 0x7fffffffffffffff) goto LAB_14001689a;
  uVar4 = 0xfffffffffffffffe;
  puVar6 = auStack_48;
  uVar2 = 0x7ffffffffffffffe;
  do {
    if (uVar4 < 0x1000) {
      *(undefined8 *)(puVar6 + -8) = 0x1400168e6;
      puVar5 = (undefined2 *)FUN_14028af20();
      uVar9 = param_3;
      goto LAB_1400168f2;
    }
    if (uVar4 + 0x27 <= uVar4) {
LAB_140016923:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar6 + -8) = &UNK_140016928;
      FUN_140017370();
    }
    *(undefined8 *)(puVar6 + -8) = 0x14001688e;
    lVar3 = FUN_14028af20(uVar4 + 0x27);
    if (lVar3 != 0) {
      puVar5 = (undefined2 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar5 + -4) = lVar3;
      uVar9 = param_3;
      goto LAB_1400168f2;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar6 = puVar6 + 8;
LAB_14001689a:
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_140016923;
    uVar4 = (uVar2 + 1) * 2;
    if (uVar4 == 0) {
LAB_1400168f2:
      *param_1 = puVar5;
      param_1[2] = uVar9;
      param_1[3] = uVar2;
      puVar8 = puVar5;
      for (uVar2 = param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = param_2;
        puVar8 = puVar8 + 1;
      }
      puVar5[param_3] = 0;
      return;
    }
  } while( true );
}

