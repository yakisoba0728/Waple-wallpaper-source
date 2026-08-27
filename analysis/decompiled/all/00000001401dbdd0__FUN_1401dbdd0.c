// Function: FUN_1401dbdd0
// Addr: 1401dbdd0
// Size: 430 bytes


undefined8 * FUN_1401dbdd0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *unaff_RSI;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar10 = (undefined8 *)*param_1;
  if (param_1[1] - (longlong)puVar10 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - (longlong)puVar10 >> 5;
  if (0x7ffffffffffffff - (uVar4 >> 1) < uVar4) {
LAB_1401dbf7a:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar4 = (uVar4 >> 1) + uVar4;
  uVar1 = (param_1[1] - (longlong)puVar10 >> 5) + 1;
  uVar6 = uVar1;
  if (uVar1 <= uVar4) {
    uVar6 = uVar4;
  }
  if (0x7ffffffffffffff < uVar6) goto LAB_1401dbf7a;
  uVar4 = uVar6 * 0x20;
  puVar8 = (undefined8 *)0x0;
  if (uVar4 == 0) {
LAB_1401dbe9f:
    puVar10 = (undefined8 *)((param_2 - (longlong)puVar10 & 0xffffffffffffffe0U) + (longlong)puVar8)
    ;
    *(undefined4 *)((longlong)puVar10 + 0x13) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x17) = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined2 *)(puVar10 + 2) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x12) = 0;
    puVar10[3] = 0;
    lVar3 = *param_1;
    if (param_2 == param_1[1]) {
      lVar9 = param_1[1] - lVar3;
      puVar5 = puVar8;
      param_2 = lVar3;
    }
    else {
      FUN_1404210f0(puVar8,lVar3,param_2 - lVar3);
      puVar5 = puVar10 + 4;
      lVar9 = param_1[1] - param_2;
    }
    FUN_1404210f0(puVar5,param_2,lVar9);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_1401dbf3d;
    lVar9 = lVar3;
    puVar7 = auStack_38;
    if ((0xfff < (param_1[2] - lVar3 & 0xffffffffffffffe0U)) &&
       (lVar9 = *(longlong *)(lVar3 + -8), puVar7 = auStack_38, unaff_RSI = puVar8,
       0x1f < (lVar3 - lVar9) - 8U)) goto LAB_1401dbf2e;
  }
  else {
    if (uVar4 < 0x1000) {
      puVar8 = (undefined8 *)FUN_14028af20(uVar4);
      goto LAB_1401dbe9f;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_1401dbf7a;
    lVar3 = FUN_14028af20();
    if (lVar3 != 0) {
      puVar8 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = lVar3;
      goto LAB_1401dbe9f;
    }
LAB_1401dbf2e:
    pcVar2 = (code *)swi(0x29);
    lVar9 = (*pcVar2)(5);
    puVar7 = auStack_30;
    puVar8 = unaff_RSI;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1401dbf3d;
  thunk_FUN_14028af80(lVar9);
LAB_1401dbf3d:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 4);
  param_1[2] = (longlong)(puVar8 + uVar6 * 4);
  return puVar10;
}

