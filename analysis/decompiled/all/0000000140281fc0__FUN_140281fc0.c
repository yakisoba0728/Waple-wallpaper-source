// Function: FUN_140281fc0
// Addr: 140281fc0
// Size: 685 bytes


void FUN_140281fc0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *unaff_R13;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  puVar8 = auStack_88;
  plVar7 = (longlong *)param_1[1];
  if (plVar7 != (longlong *)param_1[2]) {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      lVar2 = (**(code **)(*(longlong *)*param_2 + 8))();
      *plVar7 = lVar2;
      param_1[1] = param_1[1] + 8;
      return;
    }
    *plVar7 = 0;
    param_1[1] = param_1[1] + 8;
    return;
  }
  uVar13 = (longlong)plVar7 - *param_1;
  lVar2 = (longlong)uVar13 >> 3;
  if (lVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - *param_1 >> 3;
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
LAB_140282269:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar6 = lVar2 + 1;
  uVar4 = (uVar4 >> 1) + uVar4;
  if (uVar6 <= uVar4) {
    uVar6 = uVar4;
  }
  if (0x1fffffffffffffff < uVar6) goto LAB_140282269;
  uVar4 = uVar6 * 8;
  puVar10 = (undefined8 *)0x0;
  puVar12 = puVar10;
  if (uVar4 == 0) {
LAB_1402820dc:
    puVar14 = (undefined8 *)((uVar13 & 0xfffffffffffffff8) + (longlong)puVar12);
    puVar9 = puVar14 + 1;
    puVar3 = puVar10;
    local_68 = param_1;
    local_58 = uVar6;
    local_48 = puVar9;
    if ((longlong *)*param_2 != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))();
    }
    *puVar14 = puVar3;
    plVar11 = (longlong *)*param_1;
    local_50 = puVar14;
    puVar3 = puVar12;
    if (plVar7 == (longlong *)param_1[1]) {
      FUN_1402825b0(plVar11,(longlong *)param_1[1],puVar12);
    }
    else {
      for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        puVar14 = puVar10;
        if ((longlong *)*plVar11 != (longlong *)0x0) {
          puVar14 = (undefined8 *)(**(code **)(*(longlong *)*plVar11 + 8))();
        }
        *puVar3 = puVar14;
        puVar3 = puVar3 + 1;
      }
      plVar11 = (longlong *)param_1[1];
      local_50 = puVar12;
      for (; plVar7 != plVar11; plVar7 = plVar7 + 1) {
        puVar3 = puVar10;
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          puVar3 = (undefined8 *)(**(code **)(*(longlong *)*plVar7 + 8))();
        }
        *puVar9 = puVar3;
        puVar9 = puVar9 + 1;
      }
    }
    plVar7 = (longlong *)*param_1;
    local_60 = 0;
    if (plVar7 == (longlong *)0x0) goto LAB_140282216;
    plVar11 = (longlong *)param_1[1];
    for (; plVar7 != plVar11; plVar7 = plVar7 + 1) {
      puVar10 = (undefined8 *)*plVar7;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    lVar2 = *param_1;
    lVar5 = lVar2;
    puVar8 = auStack_88;
    if ((0xfff < (ulonglong)((param_1[2] - lVar2 >> 3) * 8)) &&
       (lVar5 = *(longlong *)(lVar2 + -8), puVar8 = auStack_88, unaff_R13 = puVar12,
       0x1f < (lVar2 - lVar5) - 8U)) goto LAB_140282204;
  }
  else {
    if (uVar4 < 0x1000) {
      puVar12 = (undefined8 *)FUN_14028af20(uVar4);
      goto LAB_1402820dc;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_140282269;
    lVar2 = FUN_14028af20();
    if (lVar2 != 0) {
      puVar12 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      puVar12[-1] = lVar2;
      goto LAB_1402820dc;
    }
LAB_140282204:
    lVar5 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_80;
    puVar12 = unaff_R13;
  }
  *(undefined8 *)(puVar8 + -8) = 0x140282216;
  thunk_FUN_14028af80(lVar5);
LAB_140282216:
  lVar2 = *(longlong *)(puVar8 + 0x90);
  *param_1 = (longlong)puVar12;
  param_1[1] = (longlong)(puVar12 + lVar2);
  param_1[2] = *(longlong *)(puVar8 + 0xa0) + (longlong)puVar12;
  *(undefined8 *)(puVar8 + -8) = 0x140282249;
  FUN_1402827a0(puVar8 + 0x20);
  return;
}

