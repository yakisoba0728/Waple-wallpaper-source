// Function: FUN_1402ca25c
// Addr: 1402ca25c
// Size: 10 bytes


void FUN_1402ca25c(uint param_1)

{
  code *pcVar1;
  
  common_end_thread(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

