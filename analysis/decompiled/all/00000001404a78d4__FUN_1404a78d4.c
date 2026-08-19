// Function: FUN_1404a78d4
// Addr: 1404a78d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a78d4(char *param_1,char *param_2)

{
  char in_AL;
  int *unaff_RBX;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) << 1;
  *param_1 = *param_1 + in_AL;
  *param_2 = *param_2 + (char)param_2;
  *unaff_RBX = *unaff_RBX + (int)param_2;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

