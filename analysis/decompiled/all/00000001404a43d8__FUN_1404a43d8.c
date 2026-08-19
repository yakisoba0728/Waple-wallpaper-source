// Function: FUN_1404a43d8
// Addr: 1404a43d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a43d8(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  char *unaff_RBX;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    unaff_RBX[0x77] = unaff_RBX[0x77] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + in_AL;
  *unaff_RBX = *unaff_RBX + param_2;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

