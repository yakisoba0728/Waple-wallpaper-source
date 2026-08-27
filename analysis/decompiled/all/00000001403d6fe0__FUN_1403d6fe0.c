// Function: FUN_1403d6fe0
// Addr: 1403d6fe0
// Size: 78 bytes


undefined1 FUN_1403d6fe0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1403986a0(*param_2 + 0x18);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    return 0;
  }
  uVar1 = FUN_14039a880(lVar2,param_3,param_4);
  return uVar1;
}

