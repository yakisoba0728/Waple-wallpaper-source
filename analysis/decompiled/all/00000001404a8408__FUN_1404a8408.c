// Function: FUN_1404a8408
// Addr: 1404a8408
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8408(char *param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  undefined1 *unaff_RDI;
  bool in_SF;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  if (in_SF) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

