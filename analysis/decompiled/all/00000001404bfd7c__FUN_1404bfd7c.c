// Function: FUN_1404bfd7c
// Addr: 1404bfd7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfd7c(char param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *in_RAX;
  longlong unaff_RBX;
  char *unaff_RDI;
  
  *(int *)(unaff_RBX + 0xf) = *(int *)(unaff_RBX + 0xf) + param_2;
  pbVar1 = (byte *)(unaff_RBX + -0x38);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  *in_RAX = *in_RAX + (char)in_RAX + CARRY1(bVar2,(byte)param_2);
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

