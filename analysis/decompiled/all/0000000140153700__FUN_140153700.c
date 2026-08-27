// Function: FUN_140153700
// Addr: 140153700
// Size: 67 bytes


char FUN_140153700(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1402c10d0(param_1,"system");
  if (iVar1 == 0) {
    return '\x01';
  }
  iVar1 = FUN_1402c10d0(param_1,"usershortcut");
  return (iVar1 == 0) * '\x02';
}

