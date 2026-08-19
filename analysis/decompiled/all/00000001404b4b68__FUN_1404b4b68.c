// Function: FUN_1404b4b68
// Addr: 1404b4b68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4b68(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 uVar4;
  char in_AL;
  char cVar5;
  byte in_AH;
  undefined6 in_register_00000002;
  byte bVar6;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  pbVar2 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pbVar2 = *pbVar2 | in_AH;
  cVar5 = in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(param_2 + 0x4b + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + cVar5;
  pbVar2 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,0x13)) + 0x39001a13);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar6;
  cVar5 = cVar5 + '\x1a' + CARRY1(bVar3,bVar6);
  pcVar1 = (char *)(param_2 + 0x4b + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + cVar5;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + 0x13);
  *pcVar1 = *pcVar1 + in_AH;
  uVar4 = in((short)param_2);
  *unaff_RDI = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

