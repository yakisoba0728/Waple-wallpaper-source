// Function: FUN_1404b3a00
// Addr: 1404b3a00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3a00(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte unaff_BH;
  char unaff_SPL;
  longlong unaff_RDI;
  bool bVar4;
  bool bVar5;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 3);
  *pbVar1 = *pbVar1 & unaff_BH;
  bVar4 = CARRY1(bRam00000001874b3e71,in_AL);
  bRam00000001874b3e71 = bRam00000001874b3e71 + in_AL;
  bVar2 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL;
  bVar5 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) < in_AL || bVar2 < bVar4;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = bVar2 - bVar4;
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar3 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = bVar3 - bVar5;
  *param_1 = (*param_1 - unaff_BH) - (bVar2 < in_AL || bVar3 < bVar5);
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pbVar1 = (byte *)(unaff_RDI + 0x40);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  bVar3 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL;
  bVar4 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) < in_AL ||
          bVar3 < CARRY1(bVar2,in_AL);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = bVar3 - CARRY1(bVar2,in_AL);
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar3 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = bVar3 - bVar4;
  *param_1 = (*param_1 - unaff_BH) - (bVar2 < in_AL || bVar3 < bVar4);
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL) - CARRY1(bVar2,in_AH)
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

