// Function: FUN_1404cd440
// Addr: 1404cd440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd440(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 in_RAX;
  byte unaff_BL;
  longlong unaff_RBP;
  longlong unaff_R13;
  bool in_OF;
  
  if (!in_OF) {
    *(undefined1 *)(unaff_R13 + 0x2000414e) = *(undefined1 *)(unaff_R13 + 0x2000414e);
    *param_4 = *param_4 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_RBP + 0x4b) = *(byte *)(unaff_RBP + 0x4b) & unaff_BL;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

