// Function: FUN_14010dad0
// Addr: 14010dad0
// Size: 188 bytes


undefined8 FUN_14010dad0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((char)*(uint *)(param_1 + 1) != '\x04') {
    return 2;
  }
  lVar3 = *param_1;
  if ((lVar3 != 0) && ((*(uint *)(param_1 + 1) >> 8 & 1) != 0)) {
    lVar3 = lVar3 + 4;
  }
  uVar2 = FUN_1402c10d0(lVar3,"disabled");
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_1402c10d0(lVar3,&DAT_1404747e4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_1402c10d0(lVar3,&DAT_1404747dc);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_1402c10d0(lVar3,"ultra");
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  return uVar2;
}

