// Function: FUN_1400e7660
// Addr: 1400e7660
// Size: 383 bytes


undefined8 FUN_1400e7660(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (999 < *(int *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400e74c0(param_1,0xc);
  }
  if (((*(ulonglong *)(param_1 + 0x60) >> 0x1a & 1) == 0) && (*(int *)(param_1 + 0x70) == 0x29)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400e74c0(param_1,5);
  }
  if (((*(ulonglong *)(param_1 + 0x60) & 0x20) == 0) || (*(int *)(param_1 + 0x70) != 0x3f)) {
    if ((*(uint *)(param_1 + 0x68) & 0x200) == 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      uVar2 = *(uint *)(param_1 + 0x10);
      if (999 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c340(0xc);
      }
      puVar3 = (undefined8 *)FUN_14028af20();
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_140486c20;
      puVar3[1] = 0xd;
      *(uint *)(puVar3 + 4) = uVar2;
      lVar4 = FUN_1400e5e40(param_1 + 0x38,puVar3);
      FUN_1400e1650(param_1);
      FUN_1400e1a50(param_1 + 0x38,lVar4);
      FUN_1400e9030(param_1 + 0x18,*(int *)(param_1 + 0x10) + 1);
      uVar5 = (ulonglong)(*(uint *)(lVar4 + 0x20) >> 5);
      *(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) =
           *(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) |
           1 << (*(uint *)(lVar4 + 0x20) & 0x1f);
      goto LAB_1400e77a2;
    }
  }
  else {
    FUN_1400e5740();
    iVar1 = *(int *)(param_1 + 0x70);
    FUN_1400e5740(param_1);
    if (iVar1 != 0x3a) {
      if (iVar1 == 0x21) {
        FUN_1400e8140(param_1,1);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        return 0;
      }
      if (iVar1 == 0x3d) {
        FUN_1400e8140(param_1,0);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400e74c0();
    }
  }
  FUN_1400e80d0(param_1);
LAB_1400e77a2:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return 1;
}

