// Function: FUN_1404d62a4
// Addr: 1404d62a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d62a4(longlong param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  char *unaff_RBX;
  int unaff_ESI;
  byte *pbVar4;
  byte in_CF;
  
  pbVar4 = (byte *)(ulonglong)(unaff_ESI + *(int *)(unaff_RBX + param_1) + (uint)in_CF);
  bVar3 = (byte)param_2;
  *unaff_RBX = *unaff_RBX + bVar3;
  piVar2 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *piVar2 = *piVar2 + param_2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | bVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *pbVar4 = *pbVar4 >> 1;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21000000);
  *pcVar1 = *pcVar1 + bVar3;
  pbVar4 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pbVar4 = *pbVar4 | in_AL;
  unaff_RBX[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] =
       unaff_RBX[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] | (byte)((uint)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

