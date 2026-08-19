// Function: FUN_1404d0618
// Addr: 1404d0618
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0618(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_2) = *(char *)(unaff_RBX + param_2) + in_AH;
  pcVar1 = (char *)(param_2 * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
  if (param_1 == 1 || *pcVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

