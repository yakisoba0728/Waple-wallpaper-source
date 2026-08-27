// Function: FUN_1403955d0
// Addr: 1403955d0
// Size: 509 bytes


undefined4 *
FUN_1403955d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,uint param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined8 *)(param_1 + 2) = param_2;
  uVar3 = 0;
  uVar8 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 6) = param_4;
  *(longlong *)(param_1 + 8) = param_5;
  lVar2 = FUN_140398010(*(longlong *)(param_5 + 0x20) + 0x198);
  uVar5 = uVar3;
  if (param_6 < (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100) {
    uVar5 = (ulonglong)param_6;
  }
  lVar2 = FUN_140398010(*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) + 0x198);
  if ((uint)uVar5 < (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100) {
    uVar7 = (uint)*(byte *)(lVar2 + 0xd + uVar5 * 2) +
            (uint)*(byte *)(lVar2 + 0xc + uVar5 * 2) * 0x100;
    uVar4 = (uint)*(byte *)(lVar2 + 7) + (uint)*(byte *)(lVar2 + 6) * 0x100;
    uVar6 = uVar8;
    if (uVar7 <= uVar4) {
      uVar6 = uVar4 - uVar7;
    }
    uVar8 = (uint)*(byte *)(lVar2 + 3) + (uint)*(byte *)(lVar2 + 2) * 0x100;
    if (uVar6 <= uVar8) {
      uVar8 = uVar6;
    }
    uVar3 = (ulonglong)*(byte *)(lVar2 + 0xb) + lVar2 +
            (((ulonglong)CONCAT11(*(undefined1 *)(lVar2 + 8),*(undefined1 *)(lVar2 + 9)) * 0x100 +
             (ulonglong)*(byte *)(lVar2 + 10)) * 0x40 + (ulonglong)uVar7) * 4;
  }
  else {
    *(undefined8 *)(param_1 + 10) = 0;
  }
  *(ulonglong *)(param_1 + 0xc) = uVar3;
  param_1[0xe] = uVar8;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  piVar1 = *(int **)(param_1 + 8);
  param_1[0x10] = param_7;
  *(undefined8 *)(param_1 + 0x12) = param_8;
  param_1[0x20] = 0x40;
  param_1[0x21] = 0x800;
  if ((char)piVar1[0xc] == '\0') {
    if (piVar1 == (int *)0x0) {
      return param_1;
    }
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      return param_1;
    }
  }
  else {
    lVar2 = FUN_140415d80();
    *(longlong *)(param_1 + 8) = lVar2;
    if ((*(char *)(lVar2 + 4) != '\0') &&
       (((*(float *)(lVar2 + 0x34) != 0.0 || (*(float *)(lVar2 + 0x38) != 0.0)) ||
        (*(char *)(lVar2 + 0x3c) != '\x01')))) {
      *(undefined8 *)(lVar2 + 0x34) = 0;
      *(undefined1 *)(lVar2 + 0x3c) = 1;
      FUN_1403b2f70(lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if ((*(char *)(lVar2 + 4) != '\0') && (*(float *)(lVar2 + 0x48) != 0.0)) {
      *(undefined4 *)(lVar2 + 0x48) = 0;
      FUN_1403b2f70();
    }
  }
  return param_1;
}

