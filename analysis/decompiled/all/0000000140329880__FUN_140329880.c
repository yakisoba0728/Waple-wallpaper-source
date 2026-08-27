// Function: FUN_140329880
// Addr: 140329880
// Size: 232 bytes


undefined8 FUN_140329880(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  lVar1 = *param_1;
  iVar4 = param_2[2];
  lVar2 = *(longlong *)(lVar1 + 0xd8);
  if (param_2[4] != 0) {
    iVar4 = (iVar4 * param_2[4] + 0x24) / 0x48;
  }
  uVar5 = iVar4 + 0x20 >> 6;
  if (*param_2 == 0) {
    uVar3 = 0x17;
    if (uVar5 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6) {
LAB_140329929:
      FUN_1402f4bf0(lVar1,0);
      *(uint *)((longlong)param_1 + 0x24) = (uint)*(ushort *)(lVar2 + 0x50) << 6;
      *(uint *)(param_1 + 5) =
           ((uint)*(ushort *)(lVar2 + 0x50) - (uint)*(ushort *)(lVar2 + 0x60)) * 0x40;
      *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar2 + 0x66) << 6;
      return 0;
    }
  }
  else if (*param_2 == 1) {
    if (uVar5 == *(ushort *)(lVar2 + 0x60)) goto LAB_140329929;
    uVar3 = 0x17;
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}

