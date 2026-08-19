// Function: FUN_1404d6d38
// Addr: 1404d6d38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6d38(byte *param_1,longlong param_2,byte param_3)

{
  byte *pbVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  undefined6 uVar6;
  undefined8 unaff_RBX;
  char unaff_R12B;
  undefined8 unaff_retaddr;
  char cStackX_8;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  uVar3 = (undefined1)param_2;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pbVar1 = *pbVar1 | bVar4;
  cVar2 = in_AL + in_AH;
  out((short)param_2,cVar2);
  cVar5 = bVar4 + (char)((ulonglong)unaff_RBX >> 8);
  out(CONCAT11(cVar5,uVar3),cVar2);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + (char)unaff_RBX;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  cVar2 = cVar2 + in_AH;
  out(CONCAT11(cVar5,uVar3),cVar2);
  cVar5 = cVar5 + (char)((ulonglong)unaff_retaddr >> 8);
  out(CONCAT11(cVar5,uVar3),cVar2);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + (char)unaff_retaddr;
  bVar4 = *param_1;
  *param_1 = *param_1 + param_3;
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5,uVar3)) =
       (*(char *)CONCAT62(uVar6,CONCAT11(cVar5,uVar3)) - (char)param_1) - CARRY1(bVar4,param_3);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cStackX_8;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) ^ 0xe) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) ^ 0xe) + cStackX_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

