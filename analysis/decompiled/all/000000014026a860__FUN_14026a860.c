// Function: FUN_14026a860
// Addr: 14026a860
// Size: 4 bytes


void FUN_14026a860(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *unaff_RBP;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  lVar4 = param_1[1];
  puVar9 = (undefined4 *)0x0;
  lVar5 = *param_1;
  uVar6 = param_1[2] - lVar5 >> 6;
  if (0x3ffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar10 = 0xffffffffffffffc0;
    uVar6 = 0xffffffffffffffe7;
code_r0x00014026a90e:
    lVar3 = func_0x00014028aff0(uVar6);
    puVar9 = unaff_RBP;
    if (lVar3 != 0) {
      puVar9 = (undefined4 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar9 + -2) = lVar3;
      goto code_r0x00014026a932;
    }
code_r0x00014026aa49:
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
    puVar8 = auStack_40;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar10 = param_2;
    if ((param_2 <= uVar6) && (uVar10 = uVar6, 0x3ffffffffffffff < uVar6)) {
code_r0x00014026aa95:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    uVar10 = uVar10 * 0x40;
    if (uVar10 != 0) {
      if (0xfff < uVar10) {
        uVar6 = uVar10 | 0x27;
        if (uVar6 <= uVar10) goto code_r0x00014026aa95;
        goto code_r0x00014026a90e;
      }
      puVar9 = (undefined4 *)func_0x00014028aff0();
    }
code_r0x00014026a932:
    uVar6 = lVar4 - lVar5;
    FUN_14026aaa0((uVar6 & 0xffffffffffffffc0) + (longlong)puVar9,param_2 - ((longlong)uVar6 >> 6));
    puVar1 = (undefined4 *)param_1[1];
    puVar7 = puVar9;
    for (puVar11 = (undefined4 *)*param_1; puVar11 != puVar1; puVar11 = puVar11 + 0x10) {
      *puVar7 = *puVar11;
      *(undefined8 *)(puVar7 + 2) = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      lVar4 = func_0x00014028aff0(0x20);
      *(longlong *)lVar4 = lVar4;
      *(longlong *)(lVar4 + 8) = lVar4;
      *(longlong *)(puVar7 + 2) = lVar4;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 10) = 0;
      *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
      *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(puVar11 + 0xe);
      FUN_140012020(puVar7 + 6,*(longlong *)(puVar11 + 8) - *(longlong *)(puVar11 + 6) >> 3,lVar4);
      func_0x00014026c290(puVar7,**(undefined8 **)(puVar11 + 2),*(undefined8 **)(puVar11 + 2));
      puVar7 = puVar7 + 0x10;
    }
    lVar4 = *param_1;
    if (lVar4 == 0) goto code_r0x00014026aa58;
    lVar5 = param_1[1];
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x40) {
      func_0x00014000dab0(lVar4 + 0x18);
      func_0x00014003df40(lVar4 + 8);
    }
    lVar4 = *param_1;
    if ((0xfff < (param_1[2] - lVar4 & 0xffffffffffffffc0U)) &&
       (lVar5 = lVar4 - *(longlong *)(lVar4 + -8), lVar4 = *(longlong *)(lVar4 + -8),
       puVar8 = auStack_48, 0x1f < lVar5 - 8U)) goto code_r0x00014026aa49;
  }
  *(undefined8 *)(puVar8 + -8) = 0x14026aa58;
  func_0x00014028b040(lVar4);
code_r0x00014026aa58:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + param_2 * 0x10);
  param_1[2] = uVar10 + (longlong)puVar9;
  return;
}

