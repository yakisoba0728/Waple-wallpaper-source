// Function: FUN_1404a1288
// Addr: 1404a1288
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1288(int *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar4;
  longlong unaff_RBX;
  char in_CF;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *(char *)param_1 = (char)*param_1 + 'J' + in_CF;
  *(char *)param_1 = (char)*param_1 + in_AH;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar2 = *pcVar2 + in_AL;
  *(char *)(unaff_RBX + (longlong)param_1) =
       *(char *)(unaff_RBX + (longlong)param_1) + (char)param_2;
  *(char *)(param_2 + (longlong)param_1) = *(char *)(param_2 + (longlong)param_1) + cVar4;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x7fffc58);
  *pcVar2 = *pcVar2 + cVar4;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x1004a11);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  *param_1 = *param_1 + (int)param_1 + (uint)CARRY1(bVar3,in_AL);
  *(char *)param_1 = (char)*param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

