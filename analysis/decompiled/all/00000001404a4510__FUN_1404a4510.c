// Function: FUN_1404a4510
// Addr: 1404a4510
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4510(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 0x7f) = *(char *)(in_RAX + 0x7f) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

