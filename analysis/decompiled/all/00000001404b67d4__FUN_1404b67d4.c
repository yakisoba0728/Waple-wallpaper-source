// Function: FUN_1404b67d4
// Addr: 1404b67d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b67d4(char *param_1,longlong param_2)

{
  char in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - in_AL;
  *param_1 = *param_1 + in_AH;
  bVar1 = in_AL + 2;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + bVar1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

