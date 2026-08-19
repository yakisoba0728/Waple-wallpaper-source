// Function: FUN_140030810
// Addr: 140030810
// Size: 15 bytes


int FUN_140030810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_1400163d0();
  iVar1 = FUN_1402c81cc(*puVar2,param_1,0x100,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

