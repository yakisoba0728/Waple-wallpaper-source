// Function: FUN_1404abbc8
// Addr: 1404abbc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abbc8(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  char unaff_BL;
  undefined4 *unaff_RDI;
  
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + -0x4afff077) = *(char *)(in_RAX + -0x4afff077) + (char)((ulonglong)in_RAX >> 8)
  ;
  *unaff_RDI = (int)param_1;
  *(char *)(in_RAX + 0x21004aba) = *(char *)(in_RAX + 0x21004aba) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

