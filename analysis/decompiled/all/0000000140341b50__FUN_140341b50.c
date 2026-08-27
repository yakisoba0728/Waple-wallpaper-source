// Function: FUN_140341b50
// Addr: 140341b50
// Size: 209 bytes


int FUN_140341b50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)FUN_14034c9e0(lVar1 + 6,param_3);
  if (puVar3 != (undefined1 *)0x0) {
    uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
    if (uVar4 != 0) {
      iVar2 = FUN_14034c7e0((ulonglong)uVar4 + lVar1,param_2);
      if (iVar2 != 0) {
        return 1;
      }
    }
    uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
    if (uVar4 != 0) {
      iVar2 = FUN_14034c880((ulonglong)uVar4 + lVar1,param_2);
      return (iVar2 != 0) - 1;
    }
  }
  return -1;
}

