// Function: FUN_1402d3af0
// Addr: 1402d3af0
// Size: 43 bytes


uint FUN_1402d3af0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = DAT_1404e45e0;
  }
  else {
    puVar3 = (undefined4 *)FUN_1402caf34();
    *puVar3 = 0x16;
    FUN_1402cad8c();
    uVar1 = DAT_1404e45e0;
    uVar2 = 0xffffffff;
  }
  DAT_1404e45e0 = uVar1;
  return uVar2;
}

