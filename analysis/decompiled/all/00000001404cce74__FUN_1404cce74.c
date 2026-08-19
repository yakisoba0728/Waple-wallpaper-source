// Function: FUN_1404cce74
// Addr: 1404cce74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cce74(char *param_1)

{
  uint uVar1;
  int *in_RAX;
  undefined8 *unaff_RSI;
  int *unaff_RDI;
  byte *pbVar2;
  
  *unaff_RDI = *unaff_RDI + (int)param_1;
  uVar1 = (int)in_RAX + *in_RAX;
  pbVar2 = (byte *)(ulonglong)uVar1;
  GlobalDescriptorTableRegister(*unaff_RSI);
  *pbVar2 = *pbVar2 + (char)param_1;
  *pbVar2 = *pbVar2 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

