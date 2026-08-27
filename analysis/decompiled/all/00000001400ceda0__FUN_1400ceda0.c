// Function: FUN_1400ceda0
// Addr: 1400ceda0
// Size: 10 bytes


void FUN_1400ceda0(void)

{
  code *pcVar1;
  
  FUN_1402936b0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

