// Function: FUN_14030a1b0
// Addr: 14030a1b0
// Size: 420 bytes


void FUN_14030a1b0(longlong param_1,ushort *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar5 = (ulonglong)*param_2;
  if ((*(ushort *)(param_1 + 0x40) <= *param_2) ||
     (uVar8 = (ulonglong)param_2[2], *(ushort *)(param_1 + 0x78) <= param_2[2])) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + uVar8 * 8);
    uVar3 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x50) + uVar5 * 8) - *piVar1,
                       *(int *)(*(longlong *)(param_1 + 0x50) + 4 + uVar5 * 8) - piVar1[1]);
    *(undefined4 *)param_2 = uVar3;
    return;
  }
  if ((*(short *)(param_1 + 0x192) != 0) && (*(short *)(param_1 + 0x194) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + uVar5 * 8);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x90) + uVar8 * 8);
    if (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x164)) {
      iVar4 = (**(code **)(param_1 + 0x2e0))(param_1,*piVar1 - *piVar2,piVar1[1] - piVar2[1]);
      lVar6 = (longlong)*(int *)(param_1 + 0x160) * (longlong)iVar4;
      *(int *)param_2 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
      return;
    }
    lVar7 = (longlong)(*piVar1 - *piVar2) * (longlong)*(int *)(param_1 + 0x160);
    lVar6 = (longlong)(piVar1[1] - piVar2[1]) * (longlong)*(int *)(param_1 + 0x164);
    uVar3 = (**(code **)(param_1 + 0x2e0))
                      (param_1,lVar7 + (lVar7 >> 0x3f) + 0x8000 >> 0x10,
                       lVar6 + 0x8000 + (lVar6 >> 0x3f) >> 0x10);
    *(undefined4 *)param_2 = uVar3;
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + uVar5 * 8);
  uVar3 = (**(code **)(param_1 + 0x2e0))
                    (param_1,*piVar1 - *(int *)(*(longlong *)(param_1 + 0x80) + uVar8 * 8),
                     piVar1[1] - *(int *)(*(longlong *)(param_1 + 0x80) + 4 + uVar8 * 8));
  *(undefined4 *)param_2 = uVar3;
  return;
}

