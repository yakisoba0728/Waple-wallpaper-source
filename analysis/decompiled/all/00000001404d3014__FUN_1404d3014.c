// Function: FUN_1404d3014
// Addr: 1404d3014
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d301e) overlaps instruction at (ram,0x0001404d301d)
    */

void FUN_1404d3014(undefined8 param_1,char param_2)

{
  int in_EAX;
  uint uVar1;
  uint *unaff_RSI;
  byte in_CF;
  char *pcVar2;
  
  uVar1 = (in_EAX + -0x17000288) - (uint)in_CF;
  if ((int)uVar1 < 0) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),(char)uVar1 + -0x5e);
  }
  pcVar2 = (char *)(ulonglong)uVar1;
  *pcVar2 = *pcVar2 + param_2;
  *pcVar2 = *pcVar2 + (char)uVar1;
  *unaff_RSI = *unaff_RSI & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

