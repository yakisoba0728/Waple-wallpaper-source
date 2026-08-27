// Function: FUN_1400444c0
// Addr: 1400444c0
// Size: 174 bytes


void FUN_1400444c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *local_18;
  undefined8 local_10;
  
  param_1 = param_1 + 0x48;
  uVar2 = FUN_140086de0(param_1,"wproperties","");
  FUN_140085520(uVar2,param_2);
  if (*(char *)(param_3 + 8) == '\a') {
    iVar1 = FUN_1400863a0(param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_140086de0(param_1,"wpropertiesvd","");
      FUN_140085520(uVar2,param_3);
      return;
    }
  }
  local_10 = 0xd;
  local_18 = "wpropertiesvd";
  FUN_1400878f0(param_1,&local_18);
  return;
}

