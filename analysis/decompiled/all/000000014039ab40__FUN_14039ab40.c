// Function: FUN_14039ab40
// Addr: 14039ab40
// Size: 123 bytes


ulonglong FUN_14039ab40(longlong *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  pbVar2 = (byte *)*param_1;
  if ((byte *)param_1[1] <= pbVar2) goto LAB_14039abb4;
  bVar1 = *pbVar2;
  *param_1 = (longlong)(pbVar2 + 1);
  iVar4 = (bVar1 & 0x3f) + 1;
  uVar3 = bVar1 & 0xc0;
  *(int *)(param_1 + 2) = iVar4;
  *(uint *)((longlong)param_1 + 0x14) = uVar3;
  if ((bVar1 & 0xc0) == 0) {
    uVar3 = 1;
LAB_14039ab9f:
    *(uint *)((longlong)param_1 + 0x14) = uVar3;
  }
  else {
    if (uVar3 == 0x40) {
      uVar3 = 2;
      goto LAB_14039ab9f;
    }
    if (uVar3 == 0x80) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      uVar3 = 0;
    }
    else if (uVar3 == 0xc0) {
      uVar3 = 4;
      goto LAB_14039ab9f;
    }
  }
  pbVar2 = pbVar2 + 1 + iVar4 * uVar3;
  if (pbVar2 <= (byte *)param_1[1]) {
    return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
  }
LAB_14039abb4:
  *(undefined4 *)(param_1 + 2) = 0;
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}

