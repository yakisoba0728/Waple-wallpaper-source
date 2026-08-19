// Function: FUN_1401c2f40
// Addr: 1401c2f40
// Size: 84 bytes


void FUN_1401c2f40(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  param_2 = param_2 - (int)param_1;
  if (param_2 != 0) {
    uVar1 = FUN_1402d3ed0(param_2 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar1,param_1,param_2);
  }
  puVar2 = (undefined2 *)FUN_1402d3ed0(0x10);
  *puVar2 = 0;
  return;
}

