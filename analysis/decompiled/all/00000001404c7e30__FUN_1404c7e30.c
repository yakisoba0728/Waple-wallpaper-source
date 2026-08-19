// Function: FUN_1404c7e30
// Addr: 1404c7e30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7e30(char *param_1,byte *param_2,char param_3)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  char unaff_BH;
  char unaff_R12B;
  char in_CF;
  
  bVar3 = (byte)param_1;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0xe);
  *pcVar1 = *pcVar1 + unaff_BH + in_CF;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + bVar3;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AL;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x650030f5);
  *pcVar1 = *pcVar1 + in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AL;
  *param_1 = *param_1 + param_3;
  *param_2 = *param_2 | in_AL;
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + bVar3;
  if (!CARRY1(bVar2,bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

