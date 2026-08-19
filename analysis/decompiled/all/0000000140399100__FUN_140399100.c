// Function: FUN_140399100
// Addr: 140399100
// Size: 96 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140399100(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong *plVar6;
  
  piVar1 = (int *)(param_1 + 0x30);
code_r0x000140399130:
  do {
    plVar6 = (longlong *)(param_1 + 0x28);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x34) != 0) {
      *piVar1 = *piVar1 + 1;
      *plVar6 = *plVar6 + -0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
    piVar5 = (int *)&DAT_00000010;
    if (param_1 != -0x21) {
      piVar5 = piVar1;
    }
    if (*piVar5 != 0) {
      if (*piVar1 == 0) {
        DAT_1404e4ff0 = DAT_14045dde0;
        DAT_1404e4ff8 = _DAT_14045dde8;
        DAT_1404e5000 = (undefined4)DAT_14045ddf0;
        puVar4 = &DAT_1404e4ff0;
      }
      else {
        puVar4 = (undefined8 *)*plVar6;
      }
      if (*(char *)((longlong)puVar4 + 0x12) == '\x06') goto code_r0x000140399130;
    }
    piVar5 = (int *)&DAT_00000010;
    if (param_1 != -0x21) {
      piVar5 = piVar1;
    }
    if (*piVar5 == 0) {
      return param_1;
    }
    if (*piVar1 == 0) {
      DAT_1404e4ff0 = DAT_14045dde0;
      DAT_1404e4ff8 = _DAT_14045dde8;
      puVar4 = &DAT_1404e4ff0;
      DAT_1404e5000 = (undefined4)DAT_14045ddf0;
    }
    else {
      puVar4 = (undefined8 *)*plVar6;
    }
    if (*(char *)((longlong)puVar4 + 0x12) != '\x0e') {
      return param_1;
    }
    uVar3 = *(int *)(param_1 + 0x14) + 1;
    uVar2 = *(uint *)(**(longlong **)(param_1 + 0x48) + 0x60);
    if (uVar2 <= uVar3) {
      return param_1;
    }
    while (*(char *)(**(longlong **)(param_1 + 0x50) + 0x12 + (ulonglong)uVar3 * 0x14) == '\x06') {
      uVar3 = uVar3 + 1;
      if (uVar2 <= uVar3) {
        return param_1;
      }
    }
    if (2 < (*(ushort *)(**(longlong **)(param_1 + 0x50) + (ulonglong)uVar3 * 0x14 + 0x10) & 0x1f) -
            10) {
      return param_1;
    }
  } while( true );
}

