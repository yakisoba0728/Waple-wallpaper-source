// Function: FUN_1404a7468
// Addr: 1404a7468
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7468(char *param_1,uint *param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  bVar2 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  if (bVar2 != 0) {
    *param_1 = *param_1 + unaff_SPL;
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + -0x20fff5f9);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 | (uint)param_1;
  pcVar1 = (char *)((ulonglong)CONCAT61(in_register_00000002,in_AH) * 0x100 + 9);
  *pcVar1 = *pcVar1 + in_AH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

