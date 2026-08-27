// Function: FUN_14005ffa0
// Addr: 14005ffa0
// Size: 421 bytes


undefined8 * FUN_14005ffa0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RBX;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *unaff_R15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - lVar2 >> 3;
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
LAB_140060141:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar4 = (uVar4 >> 1) + uVar4;
  uVar1 = (param_1[1] - lVar2 >> 3) + 1;
  uVar7 = uVar1;
  if (uVar1 <= uVar4) {
    uVar7 = uVar4;
  }
  if (0x1fffffffffffffff < uVar7) goto LAB_140060141;
  uVar4 = uVar7 * 8;
  if (uVar4 == 0) {
    unaff_RBX = (undefined8 *)0x0;
LAB_140060073:
    unaff_R15 = (undefined8 *)((param_2 - lVar2 & 0xfffffffffffffff8U) + (longlong)unaff_RBX);
    *unaff_R15 = *param_3;
    lVar2 = *param_1;
    if (param_2 == param_1[1]) {
      lVar8 = param_1[1] - lVar2;
      puVar5 = unaff_RBX;
      param_2 = lVar2;
    }
    else {
      FUN_1404210f0(unaff_RBX,lVar2,param_2 - lVar2);
      puVar5 = unaff_R15 + 1;
      lVar8 = param_1[1] - param_2;
    }
    FUN_1404210f0(puVar5,param_2,lVar8);
    lVar2 = *param_1;
    if (lVar2 == 0) goto LAB_140060106;
    lVar8 = lVar2;
    puVar6 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar2 >> 3) * 8)) &&
       (lVar8 = *(longlong *)(lVar2 + -8), puVar6 = auStack_48, 0x1f < (lVar2 - lVar8) - 8U))
    goto LAB_1400600f4;
  }
  else {
    if (uVar4 < 0x1000) {
      unaff_RBX = (undefined8 *)FUN_14028af20(uVar4);
      goto LAB_140060073;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_140060141;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      unaff_RBX = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      unaff_RBX[-1] = lVar8;
      goto LAB_140060073;
    }
LAB_1400600f4:
    lVar8 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar6 = auStack_40;
  }
  *(undefined8 *)(puVar6 + -8) = 0x140060106;
  thunk_FUN_14028af80(lVar8);
LAB_140060106:
  *param_1 = (longlong)unaff_RBX;
  param_1[1] = (longlong)(unaff_RBX + uVar1);
  param_1[2] = (longlong)(unaff_RBX + uVar7);
  return unaff_R15;
}

