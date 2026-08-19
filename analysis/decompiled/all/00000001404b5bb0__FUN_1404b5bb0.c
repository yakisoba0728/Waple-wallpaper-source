// Function: FUN_1404b5bb0
// Addr: 1404b5bb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5bb0(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  char in_AL;
  char in_AH;
  char cVar4;
  undefined6 in_register_00000002;
  uint uVar5;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  bool bVar7;
  undefined8 unaff_retaddr;
  uint *puVar6;
  
  bVar3 = in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  param_1 = param_1 + -1;
  if (param_1 == 0 || bVar3 == 0) {
    cVar4 = in_AH + (char)param_1;
    *param_4 = *param_4 + bVar3;
    uVar5 = (int)param_1 - *(int *)CONCAT62(in_register_00000002,CONCAT11(cVar4,bVar3));
    puVar6 = (uint *)(ulonglong)uVar5;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH ^ unaff_BL,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH ^ unaff_BL,unaff_BL)) +
         (char)(uVar5 >> 8);
    uVar2 = *puVar6;
    *puVar6 = *puVar6 + uVar5;
    bVar7 = bVar3 < 0xe0 || (byte)(bVar3 + 0x20) < CARRY4(uVar2,uVar5);
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar4,-bVar7)) + 0x17);
    *pcVar1 = (*pcVar1 - (char)((ulonglong)unaff_retaddr >> 8)) - bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 | bVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

