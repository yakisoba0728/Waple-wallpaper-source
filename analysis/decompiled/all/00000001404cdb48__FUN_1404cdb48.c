// Function: FUN_1404cdb48
// Addr: 1404cdb48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdb48(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte in_AL;
  byte bVar5;
  byte bVar6;
  byte in_AH;
  char cVar7;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar8;
  longlong unaff_RBX;
  byte bVar4;
  
  bVar8 = (byte)param_1;
  bVar5 = (in_AL & (byte)param_2) + bVar8;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5));
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       + bVar8;
  bVar6 = bVar5 ^ 0x46;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) ^
           0x46) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
                ^ 0x46) + bVar6;
  cRam00000001761f895f = cRam00000001761f895f << (bVar8 & 0x1f);
  param_2[unaff_RBX * 8 + 0x4c] = param_2[unaff_RBX * 8 + 0x4c] + in_AH;
  bVar2 = *param_1;
  *param_1 = *param_1 + in_AH;
  pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) ^ 0x46) +
                   (CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) ^ 0x46));
  bVar3 = *pbVar1;
  bVar4 = *pbVar1;
  *pbVar1 = bVar4 + bVar6 + CARRY1(bVar2,in_AH);
  cVar7 = in_AH + bVar6 + (CARRY1(bVar3,bVar6) || CARRY1(bVar4 + bVar6,CARRY1(bVar2,in_AH)));
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,bVar5))) ^
           0x46) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar7,bVar5)))
                ^ 0x46) + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

