// Function: FUN_1404c6e38
// Addr: 1404c6e38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6e38(byte *param_1)

{
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  
  *param_1 = *param_1 << 1 | (char)*param_1 < '\0';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & (uint)param_1;
  *(byte *)(unaff_RDI * 2) = *(byte *)(unaff_RDI * 2) | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

