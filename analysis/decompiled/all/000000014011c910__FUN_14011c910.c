// Function: FUN_14011c910
// Addr: 14011c910
// Size: 90 bytes


int FUN_14011c910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_140016300();
  iVar1 = FUN_1402c7d8c(*puVar2,param_1,0x40,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

