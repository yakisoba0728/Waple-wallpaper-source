// Function: FUN_140341a90
// Addr: 140341a90
// Size: 177 bytes


undefined8 FUN_140341a90(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)FUN_14034c9e0(lVar1 + 6,param_4);
  if (puVar3 != (undefined1 *)0x0) {
    uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
    if (uVar5 != 0) {
      iVar2 = FUN_14034c7e0((ulonglong)uVar5 + lVar1,param_3);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140341aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(param_2,param_3);
        return uVar4;
      }
    }
    uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
    if (uVar5 != 0) {
      uVar4 = FUN_14034c880((ulonglong)uVar5 + lVar1,param_3);
      return uVar4;
    }
  }
  return 0;
}

