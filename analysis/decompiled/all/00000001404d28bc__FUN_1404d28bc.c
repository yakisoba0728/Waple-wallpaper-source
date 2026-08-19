// Function: FUN_1404d28bc
// Addr: 1404d28bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d28bc(byte *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  char in_AL;
  char cVar4;
  byte bVar5;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BL;
  char unaff_BH;
  char cVar6;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  uRam000000018d74e4c3 = uRam000000018d74e4c3 ^ unaff_EDI;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  uRam000000017d7f1bcf = uRam000000017d7f1bcf ^ unaff_EDI;
  pcVar3 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x21004d);
  *pcVar3 = *pcVar3 + unaff_BH + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *param_1 = 0;
  cVar6 = unaff_BH + in_AL + in_AL;
  uRam000000018a8d84e3 = uRam000000018a8d84e3 ^ unaff_EDI;
  bVar5 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  cVar4 = (in_AL - *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar6,unaff_BL))) -
          CARRY1(bVar5,unaff_BL);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar6,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar6,unaff_BL)) + (char)param_1;
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)));
  *piVar1 = *piVar1 + (int)param_2;
  bVar5 = cVar4 + 0x30;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + bVar5;
  bVar5 = bVar5 & (byte)param_2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + (char)param_1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + bVar5;
  puVar2 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + param_2);
  *puVar2 = *puVar2 & unaff_EDI;
  pcVar3 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + unaff_RBP * 2);
  *pcVar3 = *pcVar3 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

