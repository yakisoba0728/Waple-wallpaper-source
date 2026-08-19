// Function: FUN_1404d6d28
// Addr: 1404d6d28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6d28(byte *param_1,longlong param_2,byte param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte in_AL;
  char cVar5;
  byte in_AH;
  undefined6 in_register_00000002;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  undefined6 uVar9;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte unaff_R12B;
  undefined8 unaff_retaddr;
  char cStackX_8;
  byte bVar4;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  uVar6 = (undefined1)param_2;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_RDI);
  *pbVar1 = *pbVar1 | in_AH;
  (&stack0x00000000)[unaff_RBP * 2] = (&stack0x00000000)[unaff_RBP * 2] + in_AH;
  bVar2 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar3 = *pbVar1;
  bVar4 = *pbVar1;
  *pbVar1 = bVar4 + in_AL + CARRY1(bVar2,unaff_R12B);
  param_1[unaff_RSI] =
       param_1[unaff_RSI] + bVar7 +
       (CARRY1(bVar3,in_AL) || CARRY1(bVar4 + in_AL,CARRY1(bVar2,unaff_R12B)));
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pbVar1 = *pbVar1 | bVar7;
  cVar5 = in_AL + in_AH;
  out((short)param_2,cVar5);
  cVar8 = bVar7 + (char)((ulonglong)unaff_RBX >> 8);
  out(CONCAT11(cVar8,uVar6),cVar5);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + (char)unaff_RBX;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + cVar5;
  cVar5 = cVar5 + in_AH;
  out(CONCAT11(cVar8,uVar6),cVar5);
  cVar8 = cVar8 + (char)((ulonglong)unaff_retaddr >> 8);
  out(CONCAT11(cVar8,uVar6),cVar5);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + (char)unaff_retaddr;
  bVar2 = *param_1;
  *param_1 = *param_1 + param_3;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,uVar6)) =
       (*(char *)CONCAT62(uVar9,CONCAT11(cVar8,uVar6)) - (char)param_1) - CARRY1(bVar2,param_3);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + cStackX_8;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) ^ 0xe) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) ^ 0xe) + cStackX_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

