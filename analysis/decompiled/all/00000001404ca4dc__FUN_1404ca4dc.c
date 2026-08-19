// Function: FUN_1404ca4dc
// Addr: 1404ca4dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca4dc(char *param_1,longlong param_2)

{
  undefined8 in_RAX;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  TaskRegister(*(undefined2 *)(param_2 + -0x2a));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

