// Function: FUN_1404c9ecc
// Addr: 1404c9ecc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9ecc(char *param_1,char *param_2,char param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte in_AL;
  byte bVar5;
  char in_AH;
  undefined6 in_register_00000002;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  char unaff_R12B;
  
  LOCK();
  puVar1 = (undefined1 *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x32);
  uVar3 = *puVar1;
  *puVar1 = unaff_BL;
  UNLOCK();
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar2 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xe) + 0x58);
  *pcVar2 = *pcVar2 + in_AH;
  bVar5 = in_AL ^ 0xe ^ *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xe);
  LOCK();
  puVar1 = (undefined1 *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + 0x32);
  uVar4 = *puVar1;
  *puVar1 = uVar3;
  UNLOCK();
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + in_AH;
  *param_1 = *param_1 + param_3;
  *(char *)CONCAT71(unaff_00000019,uVar4) = *(char *)CONCAT71(unaff_00000019,uVar4) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

