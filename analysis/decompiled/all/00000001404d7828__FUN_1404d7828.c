// Function: FUN_1404d7828
// Addr: 1404d7828
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7828(char *param_1,char param_2)

{
  byte bVar1;
  int unaff_ESI;
  byte *unaff_RDI;
  byte in_CF;
  
  *(uint *)(&stack0x00000000 + (longlong)param_1) =
       *(int *)(&stack0x00000000 + (longlong)param_1) + unaff_ESI + (uint)in_CF;
  *param_1 = *param_1 + param_2;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI << 1 | (char)bVar1 < '\0';
  if ((char)bVar1 < '\0' == (char)*unaff_RDI < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

