// Function: FUN_1404ca4b4
// Addr: 1404ca4b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca4b4(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  
  uRam000000010451a4bc = uRam000000010451a4bc & in_EAX;
  TaskRegister(*(undefined2 *)(param_2 + -0x2a));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

