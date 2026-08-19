// Function: FUN_140309730
// Addr: 140309730
// Size: 5 bytes


void FUN_140309730(longlong param_1,uint *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *param_2;
  if (((int)uVar3 < 0) || (iVar4 = *(int *)(param_1 + 0x3c), iVar4 / 2 < (int)uVar3)) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
    iVar4 = *(int *)(param_1 + 0x3c);
    uVar3 = iVar4 / 2;
  }
  uVar1 = *(ushort *)(param_1 + 0x1cc);
  *(uint *)(param_1 + 0x3c) = iVar4 + uVar3 * -2;
  iVar4 = (**(code **)(param_1 + 0x300))(param_1);
  uVar6 = iVar4 - (uint)uVar1;
  if (*(char *)(param_1 + 0x1f0) == 'q') {
    uVar6 = uVar6 - 0x10;
  }
  else if (*(char *)(param_1 + 0x1f0) == 'r') {
    uVar6 = uVar6 - 0x20;
  }
  if ((uVar6 & 0xfffffff0) == 0) {
    uVar2 = *(undefined2 *)(param_1 + 0x1ce);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = (ushort)param_2[-1];
      param_2 = param_2 + -2;
      if (uVar1 < *(ushort *)(param_1 + 0x40)) {
        if ((*param_2 & 0xf0) == uVar6 << 4) {
          uVar5 = *param_2 & 0xf;
          if ((*(int *)(param_1 + 0x324) == 0) ||
             ((*(int *)(param_1 + 0x324) != 7 &&
              (((*(char *)(param_1 + 0x2c5) != '\0' && (*(short *)(param_1 + 0x1a2) != 0)) ||
               ((*(byte *)((ulonglong)uVar1 + *(longlong *)(param_1 + 0x60)) & 0x10) != 0)))))) {
            (**(code **)(param_1 + 0x2f0))
                      (param_1,param_1 + 0x40,(ulonglong)uVar1,
                       (uVar5 - 7) - (uint)(uVar5 < 8) << (6U - (char)uVar2 & 0x1f));
          }
        }
      }
      else if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
        return;
      }
    }
  }
  return;
}

