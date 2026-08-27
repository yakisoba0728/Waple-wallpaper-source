// Function: FUN_140053360
// Addr: 140053360
// Size: 364 bytes


ulonglong *
FUN_140053360(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  uVar3 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar4 = param_1[3];
  uVar7 = uVar3 + param_2 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar7;
    if (uVar7 < uVar2) {
      uVar9 = uVar2;
    }
    uVar2 = uVar9 + 1;
    if (uVar2 == 0) {
      unaff_RBX = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar7 = uVar9 + 0x28;
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_140053406;
      }
      unaff_RBX = FUN_14028af20(uVar2);
    }
LAB_140053429:
    param_1[2] = uVar3 + param_2;
    param_1[3] = uVar9;
    if (uVar4 < 0x10) {
      FUN_1404210f0(unaff_RBX,param_1,uVar3);
      *(undefined1 *)(unaff_RBX + uVar3) = param_4;
      *(undefined1 *)(unaff_RBX + 1 + uVar3) = 0;
      goto LAB_14005349e;
    }
    uVar9 = *param_1;
    FUN_1404210f0(unaff_RBX,uVar9,uVar3);
    *(undefined1 *)(unaff_RBX + uVar3) = param_4;
    *(undefined1 *)(unaff_RBX + 1 + uVar3) = 0;
    if (0xfff < uVar4 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar4 + 0x28);
        goto LAB_14005349e;
      }
      goto LAB_14005347b;
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_140053406:
    lVar6 = FUN_14028af20(uVar7);
    if (lVar6 != 0) {
      unaff_RBX = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar6;
      goto LAB_140053429;
    }
LAB_14005347b:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x14005348a;
  thunk_FUN_14028af80(uVar9);
LAB_14005349e:
  *param_1 = unaff_RBX;
  return param_1;
}

