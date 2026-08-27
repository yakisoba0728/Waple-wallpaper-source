// Function: FUN_1403995b0
// Addr: 1403995b0
// Size: 368 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1403995b0(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  
  lVar8 = param_1;
  if (param_1 == -1) {
    lVar8 = 0;
  }
  piVar1 = (int *)(lVar8 + 0x30);
  piVar7 = piVar1;
  if (lVar8 == -0x21) {
    piVar7 = (int *)&DAT_00000010;
  }
LAB_1403995f0:
  if ((*piVar7 == 0) || (param_2 == 0)) {
    return param_1;
  }
  param_2 = param_2 + -1;
LAB_140399620:
  do {
    plVar3 = (longlong *)(lVar8 + 0x28);
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) - *(int *)(lVar8 + 0x18);
    if (*(int *)(lVar8 + 0x34) != 0) {
      *piVar1 = *piVar1 + 1;
      *plVar3 = *plVar3 + -0x14;
      *(int *)(lVar8 + 0x34) = *(int *)(lVar8 + 0x34) + -1;
    }
    piVar4 = (int *)&DAT_00000010;
    if (lVar8 != -0x21) {
      piVar4 = piVar1;
    }
    if (*piVar4 != 0) {
      if (*piVar1 == 0) {
        DAT_1404e4f20 = DAT_14045dd10;
        _DAT_1404e4f28 = DAT_14045dd18;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        puVar5 = &DAT_1404e4f20;
      }
      else {
        puVar5 = (undefined8 *)*plVar3;
      }
      if (*(char *)((longlong)puVar5 + 0x12) == '\x06') goto LAB_140399620;
    }
    piVar4 = (int *)&DAT_00000010;
    if (lVar8 != -0x21) {
      piVar4 = piVar1;
    }
    if (*piVar4 == 0) goto LAB_1403995f0;
    if (*piVar1 == 0) {
      DAT_1404e4f20 = DAT_14045dd10;
      _DAT_1404e4f28 = DAT_14045dd18;
      puVar5 = &DAT_1404e4f20;
      DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    }
    else {
      puVar5 = (undefined8 *)*plVar3;
    }
    if (*(char *)((longlong)puVar5 + 0x12) != '\x0e') goto LAB_1403995f0;
    uVar6 = *(int *)(lVar8 + 0x14) + 1;
    uVar2 = *(uint *)(**(longlong **)(lVar8 + 0x48) + 0x60);
    if (uVar2 <= uVar6) goto LAB_1403995f0;
    while (*(char *)(**(longlong **)(lVar8 + 0x50) + 0x12 + (ulonglong)uVar6 * 0x14) == '\x06') {
      uVar6 = uVar6 + 1;
      if (uVar2 <= uVar6) goto LAB_1403995f0;
    }
    if (2 < (*(ushort *)(**(longlong **)(lVar8 + 0x50) + (ulonglong)uVar6 * 0x14 + 0x10) & 0x1f) -
            10) goto LAB_1403995f0;
  } while( true );
}

