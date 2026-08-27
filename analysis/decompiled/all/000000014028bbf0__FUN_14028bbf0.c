// Function: FUN_14028bbf0
// Addr: 14028bbf0
// Size: 5 bytes


void FUN_14028bbf0(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}

