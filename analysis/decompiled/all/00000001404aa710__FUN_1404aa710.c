// Function: FUN_1404aa710
// Addr: 1404aa710
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa710(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 0x44) = *(char *)(in_RAX + 0x44) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

