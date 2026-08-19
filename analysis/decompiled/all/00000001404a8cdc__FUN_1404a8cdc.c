// Function: FUN_1404a8cdc
// Addr: 1404a8cdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8cdc(undefined8 param_1,longlong param_2)

{
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)param_2;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -1;
  *(char *)(param_2 + -0x17fff401) = *(char *)(param_2 + -0x17fff401) + unaff_BH;
  *(uint *)(ulonglong)unaff_EBP = *(uint *)(ulonglong)unaff_EBP & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

