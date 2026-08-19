// Function: FUN_1404b42dc
// Addr: 1404b42dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b42dc(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *pcVar5;
  byte bVar6;
  char unaff_SPL;
  char in_ZF;
  
  bVar6 = (byte)param_2;
  pcVar5 = (char *)(param_1 + -1);
  if (pcVar5 == (char *)0x0 || in_ZF != '\0') {
    *param_4 = *param_4 + unaff_SPL;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)pcVar5;
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x12);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  bVar3 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar4 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = bVar4 - CARRY1(bVar2,bVar6);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) + '\x12') -
       (bVar3 < in_AL || bVar4 < CARRY1(bVar2,bVar6));
  param_2[0x4b] = param_2[0x4b] ^ 0xee;
  *pcVar5 = *pcVar5 + in_AH;
  *param_2 = *param_2 | 0xee;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) + (char)pcVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

