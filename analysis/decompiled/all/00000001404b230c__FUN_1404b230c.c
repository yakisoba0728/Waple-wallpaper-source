// Function: FUN_1404b230c
// Addr: 1404b230c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b230c(undefined8 param_1,byte param_2,char *param_3,char param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar5;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  uint unaff_ESI;
  byte in_CF;
  bool bVar6;
  byte bVar4;
  
  uVar5 = *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_ESI;
  bVar6 = CARRY4(*(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)),unaff_ESI) ||
          CARRY4(uVar5,(uint)in_CF);
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = uVar5 + in_CF;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21);
  bVar3 = *pbVar1;
  bVar4 = *pbVar1;
  *pbVar1 = bVar4 + param_2 + bVar6;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar2 = *pcVar2 + in_AL + (CARRY1(bVar3,param_2) || CARRY1(bVar4 + param_2,bVar6));
  *param_3 = *param_3 + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

