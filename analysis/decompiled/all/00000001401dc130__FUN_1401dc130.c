// Function: FUN_1401dc130
// Addr: 1401dc130
// Size: 593 bytes


void FUN_1401dc130(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  
  uVar1 = *param_2;
  lVar11 = *(longlong *)(param_1 + 8);
  plVar10 = *(longlong **)(lVar11 + 0x120);
  uVar9 = *(ulonglong *)(lVar11 + 0x148) &
          ((((((((uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar1 >> 8 & 0xff) *
                0x100000001b3 ^ uVar1 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar1 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar1 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x38) * 0x100000001b3;
  lVar2 = *(longlong *)(lVar11 + 0x130);
  plVar8 = *(longlong **)(lVar2 + 8 + uVar9 * 0x10);
  if (plVar8 == plVar10) {
LAB_1401dc231:
    plVar7 = (longlong *)0x0;
  }
  else {
    uVar3 = plVar8[2];
    plVar7 = plVar8;
    while (uVar1 != uVar3) {
      if (plVar7 == *(longlong **)(lVar2 + uVar9 * 0x10)) goto LAB_1401dc231;
      plVar7 = (longlong *)plVar7[1];
      uVar3 = plVar7[2];
    }
  }
  if (plVar7 != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar2 + uVar9 * 0x10);
    if (plVar8 == plVar7) {
      if (plVar4 == plVar7) {
        *(longlong **)(lVar2 + uVar9 * 0x10) = plVar10;
        *(longlong **)(lVar2 + 8 + uVar9 * 0x10) = plVar10;
      }
      else {
        *(longlong *)(lVar2 + 8 + uVar9 * 0x10) = plVar7[1];
      }
    }
    else if (plVar4 == plVar7) {
      *(longlong *)(lVar2 + uVar9 * 0x10) = *plVar7;
    }
    lVar2 = *plVar7;
    *(longlong *)(lVar11 + 0x128) = *(longlong *)(lVar11 + 0x128) + -1;
    *(longlong *)plVar7[1] = lVar2;
    *(longlong *)(lVar2 + 8) = plVar7[1];
    thunk_FUN_14028af80(plVar7,0x18);
  }
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0xa0);
  for (puVar6 = (undefined8 *)*puVar5; puVar6 != puVar5; puVar6 = (undefined8 *)*puVar6) {
    lVar11 = puVar6[2];
    if (*(ulonglong *)(lVar11 + 0x38) == uVar1) {
      FUN_1401ab5f0(**(longlong **)(param_1 + 8) + 0x16c0,*(undefined8 *)(lVar11 + 0x50));
      *(undefined8 *)(lVar11 + 0x50) = 0;
      *(undefined4 *)(lVar11 + 8) = 0;
      *(undefined8 *)(lVar11 + 0x38) = 0;
      *(undefined4 *)(lVar11 + 0x48) = 0;
      if (*(longlong *)(lVar11 + 0x80) != *(longlong *)(lVar11 + 0x88)) {
        *(longlong *)(lVar11 + 0x88) = *(longlong *)(lVar11 + 0x80);
      }
    }
  }
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xe0);
  plVar8 = (longlong *)*plVar10;
  if (plVar8 != plVar10) {
    do {
      lVar11 = plVar8[2];
      if (*(ulonglong *)(lVar11 + 0x18) == uVar1) {
        *(undefined4 *)(lVar11 + 8) = 0;
        FUN_1401c1950(lVar11 + 0x68);
        FUN_1401c1950(lVar11 + 0x128);
        if (*(longlong *)(lVar11 + 0x20) != *(longlong *)(lVar11 + 0x28)) {
          *(longlong *)(lVar11 + 0x28) = *(longlong *)(lVar11 + 0x20);
        }
        if (*(longlong *)(lVar11 + 0x50) != *(longlong *)(lVar11 + 0x58)) {
          *(longlong *)(lVar11 + 0x58) = *(longlong *)(lVar11 + 0x50);
        }
        if (*(longlong *)(lVar11 + 0x38) != *(longlong *)(lVar11 + 0x40)) {
          *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x38);
        }
        *(undefined8 *)(lVar11 + 0x18) = 0;
      }
      plVar8 = (longlong *)*plVar8;
    } while (plVar8 != plVar10);
  }
  return;
}

