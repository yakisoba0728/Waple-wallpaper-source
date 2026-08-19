// Function: FUN_1404ab5f0
// Addr: 1404ab5f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab605) overlaps instruction at (ram,0x0001404ab604)
    */

void FUN_1404ab5f0(uint param_1,uint *param_2)

{
  char *pcVar1;
  ulonglong in_RAX;
  longlong unaff_RDI;
  char in_CF;
  bool in_OF;
  
  if (!in_OF) {
    TaskRegister(*(undefined2 *)(unaff_RDI + -0x37fff0ed));
    *(char *)param_2 = (char)*param_2 + (char)param_1 + in_CF;
    *param_2 = *param_2 & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((in_RAX ^ 9) - 0x5cfff0e9);
  *pcVar1 = *pcVar1 + (char)(in_RAX ^ 9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

