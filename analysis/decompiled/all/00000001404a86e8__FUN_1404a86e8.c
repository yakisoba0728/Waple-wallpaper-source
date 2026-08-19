// Function: FUN_1404a86e8
// Addr: 1404a86e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a86e8(undefined8 param_1,int param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  char acStackX_c [28];
  
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2;
  pbVar1 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0xe0) + 0x21);
  *pbVar1 = *pbVar1 | in_AH;
  acStackX_c[unaff_RSI * 2] = acStackX_c[unaff_RSI * 2] + in_AH;
  *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

