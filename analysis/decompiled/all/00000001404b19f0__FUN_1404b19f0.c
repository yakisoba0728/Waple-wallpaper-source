// Function: FUN_1404b19f0
// Addr: 1404b19f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b19f0(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 0x1c) = *(char *)(in_RAX + 0x1c) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

