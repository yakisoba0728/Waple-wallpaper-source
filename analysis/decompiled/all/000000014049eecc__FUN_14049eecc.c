// Function: FUN_14049eecc
// Addr: 14049eecc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049eecd) overlaps instruction at (ram,0x00014049eecc)
    */

void FUN_14049eecc(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int *in_RAX;
  char unaff_SPL;
  longlong unaff_RBP;
  char in_ZF;
  bool in_OF;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
    while( true ) {
      *param_4 = *param_4 + unaff_SPL;
      *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
      *(char *)in_RAX = (char)*in_RAX + (char)((ushort)param_2 >> 8);
      *(char *)(unaff_RBP + 0x3c) = *(char *)(unaff_RBP + 0x3c) + (char)in_RAX;
      *in_RAX = *in_RAX + (int)in_RAX;
      param_1 = param_1 + -1;
      if (param_1 == 0 || *in_RAX == 0) break;
      uVar1 = in(param_2);
      in_RAX = (int *)(ulonglong)uVar1;
    }
  }
  else if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

