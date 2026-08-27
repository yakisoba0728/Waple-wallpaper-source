// Function: FUN_140398e10
// Addr: 140398e10
// Size: 296 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140398e10(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  longlong *plVar7;
  
  piVar1 = (int *)(param_1 + 0x30);
LAB_140398e40:
  do {
    plVar7 = (longlong *)(param_1 + 0x28);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18);
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      iVar3 = iVar3 + -1;
      *plVar7 = *plVar7 + 0x14;
      *piVar1 = iVar3;
    }
    piVar5 = (int *)&DAT_00000010;
    if (param_1 != -0x21) {
      piVar5 = piVar1;
    }
    if (*piVar5 != 0) {
      if (iVar3 == 0) {
        DAT_1404e4f20 = DAT_14045dd10;
        _DAT_1404e4f28 = DAT_14045dd18;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        puVar4 = &DAT_1404e4f20;
        iVar3 = *piVar1;
      }
      else {
        puVar4 = (undefined8 *)*plVar7;
      }
      if (*(char *)((longlong)puVar4 + 0x12) == '\x06') goto LAB_140398e40;
    }
    piVar5 = (int *)&DAT_00000010;
    if (param_1 != -0x21) {
      piVar5 = piVar1;
    }
    if (*piVar5 == 0) {
      return param_1;
    }
    if (iVar3 == 0) {
      DAT_1404e4f20 = DAT_14045dd10;
      _DAT_1404e4f28 = DAT_14045dd18;
      puVar4 = &DAT_1404e4f20;
      DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    }
    else {
      puVar4 = (undefined8 *)*plVar7;
    }
    if (*(char *)((longlong)puVar4 + 0x12) != '\x0e') {
      return param_1;
    }
    uVar6 = *(int *)(param_1 + 0x14) + 1;
    uVar2 = *(uint *)(**(longlong **)(param_1 + 0x48) + 0x60);
    if (uVar2 <= uVar6) {
      return param_1;
    }
    while (*(char *)(**(longlong **)(param_1 + 0x50) + 0x12 + (ulonglong)uVar6 * 0x14) == '\x06') {
      uVar6 = uVar6 + 1;
      if (uVar2 <= uVar6) {
        return param_1;
      }
    }
    if (2 < (*(ushort *)(**(longlong **)(param_1 + 0x50) + (ulonglong)uVar6 * 0x14 + 0x10) & 0x1f) -
            10) {
      return param_1;
    }
  } while( true );
}

