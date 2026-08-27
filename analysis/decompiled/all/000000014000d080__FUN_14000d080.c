// Function: FUN_14000d080
// Addr: 14000d080
// Size: 98 bytes


int FUN_14000d080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_140016300();
  iVar1 = FUN_1402c7974(*puVar2,param_1,0x40,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

