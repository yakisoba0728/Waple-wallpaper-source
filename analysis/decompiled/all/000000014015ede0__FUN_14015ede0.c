// Function: FUN_14015ede0
// Addr: 14015ede0
// Size: 741 bytes


void FUN_14015ede0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  
  plVar1 = (longlong *)param_1[0x1d];
  *param_1 = &PTR_FUN_14048b810;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[1];
    for (lVar12 = *plVar1; lVar12 != lVar2; lVar12 = lVar12 + 0x20) {
      puVar3 = *(undefined8 **)(lVar12 + 0x10);
      for (puVar10 = *(undefined8 **)(lVar12 + 8); puVar10 != puVar3; puVar10 = puVar10 + 4) {
        thunk_FUN_14028af80(*puVar10);
      }
    }
    lVar2 = param_1[0x1d];
    if (lVar2 != 0) {
      FUN_1400efce0(lVar2);
      thunk_FUN_14028af80(lVar2,0x20);
    }
  }
  if (param_1[0x26] != 0) {
    FUN_140176f70(param_1[1] + 0x1708,param_1[0x26],0);
    lVar2 = param_1[0x26];
    puVar3 = *(undefined8 **)(lVar2 + 0xd0);
    for (puVar10 = (undefined8 *)*puVar3; puVar10 != puVar3; puVar10 = (undefined8 *)*puVar10) {
      lVar12 = puVar10[2];
      if (lVar12 != 0) {
        FUN_140017240(lVar12 + 0x38);
        thunk_FUN_14028af80(lVar12,0x58);
      }
    }
    FUN_140160a70(lVar2 + 200);
    FUN_140039a60(lVar2 + 0x108);
  }
  if (param_1[0x26] != 0) {
    uVar4 = *(ulonglong *)(param_1[0x26] + 8);
    lVar2 = param_1[1];
    plVar1 = *(longlong **)(lVar2 + 0x1860);
    uVar9 = *(ulonglong *)(lVar2 + 0x1888) &
            ((((((((uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar4 >> 8 & 0xff) *
                  0x100000001b3 ^ uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar4 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x38) * 0x100000001b3
    ;
    lVar12 = *(longlong *)(lVar2 + 0x1870);
    plVar5 = *(longlong **)(lVar12 + 8 + uVar9 * 0x10);
    if (plVar5 == plVar1) {
LAB_14015efe6:
      plVar11 = (longlong *)0x0;
    }
    else {
      uVar6 = plVar5[2];
      plVar11 = plVar5;
      while (uVar4 != uVar6) {
        if (plVar11 == *(longlong **)(lVar12 + uVar9 * 0x10)) goto LAB_14015efe6;
        plVar11 = (longlong *)plVar11[1];
        uVar6 = plVar11[2];
      }
    }
    if (plVar11 != (longlong *)0x0) {
      plVar7 = *(longlong **)(lVar12 + uVar9 * 0x10);
      if (plVar5 == plVar11) {
        if (plVar7 == plVar11) {
          *(longlong **)(lVar12 + uVar9 * 0x10) = plVar1;
          *(longlong **)(lVar12 + 8 + uVar9 * 0x10) = plVar1;
        }
        else {
          *(longlong *)(lVar12 + 8 + uVar9 * 0x10) = plVar11[1];
        }
      }
      else if (plVar7 == plVar11) {
        *(longlong *)(lVar12 + uVar9 * 0x10) = *plVar11;
      }
      lVar8 = *plVar11;
      *(longlong *)(lVar2 + 0x1868) = *(longlong *)(lVar2 + 0x1868) + -1;
      *(longlong *)plVar11[1] = lVar8;
      *(longlong *)(lVar8 + 8) = plVar11[1];
      plVar1 = (longlong *)plVar11[10];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))
                  (plVar1,CONCAT71((int7)((ulonglong)lVar12 >> 8),plVar1 != plVar11 + 3));
        plVar11[10] = 0;
      }
      thunk_FUN_14028af80(plVar11,0x58);
    }
  }
  puVar3 = (undefined8 *)param_1[0x26];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_14000d9e0(param_1 + 0x21);
  FUN_1400d2120(param_1 + 0x1f);
  FUN_1400efd70(param_1 + 0x17);
  FUN_140017240(param_1 + 0xf);
  FUN_14000d9e0(param_1 + 10);
  FUN_14000da50(param_1 + 8);
  return;
}

