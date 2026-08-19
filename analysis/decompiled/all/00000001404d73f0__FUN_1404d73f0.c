// Function: FUN_1404d73f0
// Addr: 1404d73f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d745a) */

void FUN_1404d73f0(char *param_1,char param_2)

{
  byte *in_RAX;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + (byte)in_RAX;
  if (*in_RAX < (byte)in_RAX) {
    *unaff_RDI = *unaff_RDI + (char)param_1;
    *unaff_RDI = *unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  cRam00000001560a7446 = cRam00000001560a7446 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

