// Function: FUN_1404a73f4
// Addr: 1404a73f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7441) */
/* WARNING: Removing unreachable block (ram,0x0001404a748d) */
/* WARNING: Removing unreachable block (ram,0x0001404a7443) */

void FUN_1404a73f4(char *param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BH;
  longlong unaff_RSI;
  
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x3cfff5fc);
  *pcVar1 = *pcVar1 + param_2;
  if (CARRY1(in_AL + 10U,unaff_BH)) {
    (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AL + 10U + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

