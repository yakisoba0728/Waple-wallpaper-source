// Function: FUN_1404a26e0
// Addr: 1404a26e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a26e0(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  char cVar1;
  longlong unaff_RDI;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + cVar1;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar1;
  *(char *)(in_RAX + 3) = *(char *)(in_RAX + 3) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

