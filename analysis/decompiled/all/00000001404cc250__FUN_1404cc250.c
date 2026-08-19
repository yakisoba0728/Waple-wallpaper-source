// Function: FUN_1404cc250
// Addr: 1404cc250
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cc263) overlaps instruction at (ram,0x0001404cc262)
    */

void FUN_1404cc250(longlong param_1,char param_2)

{
  int in_EAX;
  uint uVar1;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + (int)param_1;
  uVar1 = in_EAX + 0xaa20e00;
  if (param_1 == 1 || uVar1 == 0) {
    if (!SCARRY4(in_EAX,0xaa20e00)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
  }
  else {
    (&stack0x00000000)[(longlong)unaff_RSI * 8] =
         (&stack0x00000000)[(longlong)unaff_RSI * 8] + param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

