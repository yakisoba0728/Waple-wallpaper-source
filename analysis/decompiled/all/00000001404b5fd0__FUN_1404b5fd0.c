// Function: FUN_1404b5fd0
// Addr: 1404b5fd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5fd0(char *param_1,longlong param_2)

{
  char *pcVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  param_1[in_RAX] = param_1[in_RAX] + (char)((ulonglong)param_2 >> 8);
  *(undefined1 *)(unaff_RBP + 0x1b) = *(undefined1 *)(unaff_RBP + 0x1b);
  pcVar1 = (char *)(unaff_RDI + 0x4a + param_2 * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

