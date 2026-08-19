// Function: FUN_1404be518
// Addr: 1404be518
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be518(longlong param_1,longlong param_2)

{
  char in_AH;
  longlong unaff_RBP;
  
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + in_AH;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)param_2;
  *(undefined1 *)(unaff_RBP + 0x25bce900) = *(undefined1 *)(unaff_RBP + 0x25bce900);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

