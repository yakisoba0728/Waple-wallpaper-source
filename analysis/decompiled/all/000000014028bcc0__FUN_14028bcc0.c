// Function: FUN_14028bcc0
// Addr: 14028bcc0
// Size: 5 bytes


void FUN_14028bcc0(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}

