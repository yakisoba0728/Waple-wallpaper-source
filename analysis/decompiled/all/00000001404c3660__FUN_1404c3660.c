// Function: FUN_1404c3660
// Addr: 1404c3660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3660(longlong param_1,int param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte bVar2;
  longlong unaff_RBX;
  
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
  bVar2 = (byte)((uint)param_2 >> 8);
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + bVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_2;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH | in_AL,in_AL)) + 7);
  *pbVar1 = *pbVar1 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

