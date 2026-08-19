// Function: FUN_1404cf814
// Addr: 1404cf814
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf814(byte *param_1,undefined8 param_2,byte param_3)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  char in_AL;
  char cVar4;
  byte bVar5;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  byte *pbVar10;
  char unaff_R12B;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  cVar4 = in_AL + 'p';
  pbVar10 = (byte *)(ulonglong)
                    (uint)(unaff_ESI + *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)))
  ;
  cVar6 = (char)param_2 + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4));
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + in_AH;
  *pbVar10 = *pbVar10 >> 1;
  bVar5 = cVar4 + cVar6;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + bVar5;
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(uVar7,cVar6))) =
       *(byte *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(uVar7,cVar6))) | bVar5;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + (char)param_1;
  out(*(undefined4 *)pbVar10,CONCAT11(uVar7,cVar6));
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + bVar5;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + 0x5e);
  *pcVar1 = *pcVar1 + cVar6;
  out(*(undefined4 *)(pbVar10 + 4),CONCAT11(uVar7,cVar6));
  bVar3 = *param_1;
  *param_1 = *param_1 + param_3;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1) - (uint)CARRY1(bVar3,param_3);
  bVar3 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  cVar4 = bVar5 - CARRY1(bVar3,unaff_BL);
  piVar2 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT71(unaff_00000019,unaff_BL));
  *piVar2 = (*piVar2 - ((int)(pbVar10 + 4) + 4)) - (uint)(bVar5 < CARRY1(bVar3,unaff_BL));
  *param_1 = *param_1 + unaff_BL;
  piVar2 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)));
  *piVar2 = *piVar2 + CONCAT22(uVar8,CONCAT11(uVar7,cVar6));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

