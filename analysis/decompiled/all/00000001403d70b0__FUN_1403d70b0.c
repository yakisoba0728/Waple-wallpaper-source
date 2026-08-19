// Function: FUN_1403d70b0
// Addr: 1403d70b0
// Size: 78 bytes


undefined1 FUN_1403d70b0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140398770(*param_2 + 0x18);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    return 0;
  }
  uVar1 = FUN_14039a950(lVar2,param_3,param_4);
  return uVar1;
}

