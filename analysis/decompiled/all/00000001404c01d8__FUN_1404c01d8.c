// Function: FUN_1404c01d8
// Addr: 1404c01d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c01d8(char *param_1,undefined2 param_2,char param_3)

{
  undefined4 uVar1;
  char *in_RAX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    *in_RAX = *in_RAX - (char)in_RAX;
    *param_1 = *param_1 + param_3;
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    *(char *)(unaff_RBP + -0x2c) =
         *(char *)(unaff_RBP + -0x2c) + ((byte)((ulonglong)in_RAX >> 8) | 0x6d);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)in_RAX * 2) = (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

