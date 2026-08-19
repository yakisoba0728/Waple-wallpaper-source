// Function: FUN_1404c01c8
// Addr: 1404c01c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c01c8(char *param_1,undefined2 param_2)

{
  undefined4 uVar1;
  char *in_RAX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  bool in_CF;
  
  if (in_CF) {
    *in_RAX = *in_RAX - (char)in_RAX;
    *param_1 = *param_1 + unaff_R12B;
    *in_RAX = *in_RAX + (char)in_RAX;
    *in_RAX = *in_RAX + (char)((ushort)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(char *)(unaff_RBP + -0x2c) =
       *(char *)(unaff_RBP + -0x2c) + ((byte)((ulonglong)in_RAX >> 8) | 0x6d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

