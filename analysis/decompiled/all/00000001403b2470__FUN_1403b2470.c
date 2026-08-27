// Function: FUN_1403b2470
// Addr: 1403b2470
// Size: 165 bytes


void FUN_1403b2470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1403ec560();
    return;
  }
  uVar1 = FUN_1402c9a6c(2);
  FUN_1402cb9d8(uVar1,"harfbuzz ");
  uVar1 = FUN_1402c9a6c(2);
  puVar2 = (undefined8 *)FUN_140016300();
  FUN_1402c772c(*puVar2,uVar1,param_3,0,&local_res20);
  uVar1 = FUN_1402c9a6c(2);
  FUN_1402cb9d8(uVar1,&DAT_1404736e4);
  return;
}

