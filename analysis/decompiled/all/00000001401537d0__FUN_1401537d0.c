// Function: FUN_1401537d0
// Addr: 1401537d0
// Size: 67 bytes


char FUN_1401537d0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1402c11a0(param_1,"system");
  if (iVar1 == 0) {
    return '\x01';
  }
  iVar1 = FUN_1402c11a0(param_1,"usershortcut");
  return (iVar1 == 0) * '\x02';
}

