// Function: FUN_1404d3440
// Addr: 1404d3440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d3454) overlaps instruction at (ram,0x0001404d3451)
    */

void FUN_1404d3440(char *param_1,char param_2)

{
  short sVar1;
  short in_AX;
  char *unaff_RBX;
  char *unaff_RSI;
  
  sVar1 = (short)cRam000000018ab71447;
  *param_1 = *param_1 + (char)(in_AX / sVar1);
  *unaff_RBX = *unaff_RBX + (char)(in_AX % sVar1);
  if (-1 < *unaff_RBX) {
    *unaff_RSI = *unaff_RSI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

