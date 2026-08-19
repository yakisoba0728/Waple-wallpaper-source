// Function: FUN_1404b183c
// Addr: 1404b183c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b183c(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char in_AL;
  char cVar4;
  byte in_AH;
  undefined6 in_register_00000002;
  
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_1);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x22ffe9ec);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  cVar4 = in_AL + '\x16' + CARRY1(bVar3,in_AH);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

