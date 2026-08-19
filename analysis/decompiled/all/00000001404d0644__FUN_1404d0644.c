// Function: FUN_1404d0644
// Addr: 1404d0644
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0644(byte *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar6;
  char in_AH;
  short in_register_00000002;
  undefined4 in_register_00000004;
  char cVar7;
  byte bVar8;
  char unaff_BL;
  char unaff_SIL;
  undefined7 unaff_00000031;
  byte unaff_R12B;
  char unaff_retaddr;
  char cStackX_8;
  char cStackX_10;
  byte bVar5;
  
  bVar6 = bRamc0003fde4d003fdd;
  cVar7 = (char)param_1;
  bVar3 = *param_1;
  *param_1 = *param_1 + unaff_R12B;
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))));
  bVar4 = *pbVar2;
  bVar5 = *pbVar2;
  *pbVar2 = bVar5 + bVar6 + CARRY1(bVar3,unaff_R12B);
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  param_1[CONCAT71(unaff_00000031,unaff_SIL)] =
       param_1[CONCAT71(unaff_00000031,unaff_SIL)] + bVar8 +
       (CARRY1(bVar4,bVar6) || CARRY1(bVar5 + bVar6,CARRY1(bVar3,unaff_R12B)));
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) + param_2);
  *pbVar2 = *pbVar2 | bVar8;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) + -0x69);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)(param_2 + -0x69) = *(char *)(param_2 + -0x69) + unaff_SIL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + bVar6;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) + -0x69);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)(param_2 + -0x69) = *(char *)(param_2 + -0x69) + unaff_SIL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + unaff_retaddr;
  bVar3 = *param_1;
  *param_1 = *param_1 + unaff_R12B;
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))));
  bVar4 = *pbVar2;
  bVar5 = *pbVar2;
  *pbVar2 = bVar5 + bVar6 + CARRY1(bVar3,unaff_R12B);
  param_1[CONCAT71(unaff_00000031,unaff_SIL)] =
       param_1[CONCAT71(unaff_00000031,unaff_SIL)] + bVar8 +
       (CARRY1(bVar4,bVar6) || CARRY1(bVar5 + bVar6,CARRY1(bVar3,unaff_R12B)));
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) + param_2);
  *pbVar2 = *pbVar2 | bVar8;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + bVar8;
  pcVar1 = (char *)(CONCAT71(unaff_00000031,unaff_SIL) + -0x67);
  *pcVar1 = *pcVar1 + cVar7;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + cStackX_8;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + bVar6;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + (char)((uint)((int)in_register_00000002 >> 0xf) >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000031,unaff_SIL) + -0x67);
  *pcVar1 = *pcVar1 + cVar7;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + cStackX_10;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)(ulonglong)(uint)((int)in_register_00000002 >> 0xf) =
       *(byte *)(ulonglong)(uint)((int)in_register_00000002 >> 0xf) | bVar6;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
       + cVar7;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6))) ^
           0x12) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar6)))
                ^ 0x12) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

