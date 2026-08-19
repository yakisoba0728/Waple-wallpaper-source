// Function: FUN_1404c0f94
// Addr: 1404c0f94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0f94(char *param_1,undefined8 param_2)

{
  uint unaff_EBP;
  char in_R11B;
  
  out(0x28,unaff_EBP);
  *(char *)((ulonglong)unaff_EBP + 0xe) =
       *(char *)((ulonglong)unaff_EBP + 0xe) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

