// Function: thunk_FUN_14000f880
// Addr: 14000ddc0
// Size: 5 bytes


ulonglong * thunk_FUN_14000f880(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong unaff_R14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    puVar7 = param_1;
    if (0xf < uVar2) {
      puVar7 = (ulonglong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_1404210f0(puVar7);
    *(undefined1 *)((longlong)puVar7 + param_3) = 0;
    return param_1;
  }
  uVar8 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar5 = param_3 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar5;
    if (uVar5 < uVar1) {
      uVar8 = uVar1;
    }
    uVar1 = uVar8 + 1;
    if (uVar1 == 0) {
      unaff_R14 = 0;
    }
    else {
      if (0xfff < uVar1) {
        uVar5 = uVar8 + 0x28;
        if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_14000f93d;
      }
      unaff_R14 = FUN_14028af20(uVar1);
    }
LAB_14000f960:
    param_1[2] = param_3;
    param_1[3] = uVar8;
    FUN_1404210f0(unaff_R14,param_2,param_3);
    *(undefined1 *)(unaff_R14 + param_3) = 0;
    if (uVar2 < 0x10) goto LAB_14000f9ba;
    uVar8 = *param_1;
    uVar5 = uVar8;
    puVar6 = auStack_38;
    if ((0xfff < uVar2 + 1) &&
       (uVar5 = *(ulonglong *)(uVar8 - 8), puVar6 = auStack_38, 0x1f < (uVar8 - uVar5) - 8))
    goto LAB_14000f9a8;
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_14000f93d:
    lVar4 = FUN_14028af20(uVar5);
    if (lVar4 != 0) {
      unaff_R14 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_R14 - 8) = lVar4;
      goto LAB_14000f960;
    }
LAB_14000f9a8:
    uVar5 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar6 = auStack_30;
  }
  *(undefined8 *)(puVar6 + -8) = 0x14000f9ba;
  thunk_FUN_14028af80(uVar5);
LAB_14000f9ba:
  *param_1 = unaff_R14;
  return param_1;
}

