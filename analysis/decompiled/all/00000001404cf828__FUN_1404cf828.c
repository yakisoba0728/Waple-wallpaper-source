// Function: FUN_1404cf828
// Addr: 1404cf828
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf828(byte *param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  byte in_AL;
  char cVar5;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RSI;
  char unaff_R12B;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0xe);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_1 >> 8);
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x5e);
  *pcVar2 = *pcVar2 + (char)param_2;
  out(*unaff_RSI,(short)param_2);
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x5e);
  *pcVar2 = *pcVar2 + (char)param_2;
  out(unaff_RSI[1],(short)param_2);
  bVar4 = *param_1;
  *param_1 = *param_1 + param_3;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1) - (uint)CARRY1(bVar4,param_3);
  bVar4 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  cVar5 = in_AL - CARRY1(bVar4,unaff_BL);
  piVar3 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT71(unaff_00000019,unaff_BL));
  *piVar3 = (*piVar3 - ((int)(unaff_RSI + 1) + 4)) - (uint)(in_AL < CARRY1(bVar4,unaff_BL));
  *param_1 = *param_1 + unaff_BL;
  piVar3 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)));
  *piVar3 = *piVar3 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

