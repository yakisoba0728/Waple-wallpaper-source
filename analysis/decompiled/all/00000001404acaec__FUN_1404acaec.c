// Function: FUN_1404acaec
// Addr: 1404acaec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acaec(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  undefined1 in_AH;
  byte bVar3;
  undefined6 in_register_00000002;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong *unaff_RBP;
  longlong lVar9;
  longlong unaff_RDI;
  char in_CF;
  char in_AF;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar6 = (undefined1)param_2;
  cVar5 = (char)((ulonglong)param_1 >> 8);
  bVar4 = (byte)param_1;
  *(undefined1 *)(unaff_RDI + -0x6047fff0) = unaff_BL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL + in_CF;
  lVar9 = *unaff_RBP;
  *param_1 = *param_1 + (char)unaff_RBP + '\b';
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x47ffef61);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  bVar3 = ((char)*pbVar1 < '\0') << 7 | (*pbVar1 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(*pbVar1) & 1U) == 0) << 2 | 2U | CARRY1(bVar2,bVar4);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) + in_AL + CARRY1(bVar2,bVar4);
  *param_1 = *param_1 + (char)lVar9 + '\b';
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) + in_AL;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) + -0x77ffef61);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  bVar3 = ((char)*pbVar1 < '\0') << 7 | (*pbVar1 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(*pbVar1) & 1U) == 0) << 2 | 2U | CARRY1(bVar2,in_AL);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) + in_AL + CARRY1(bVar2,in_AL);
  *(longlong *)lVar9 = lVar9 + 8;
  *param_1 = *param_1 + in_AL;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
  *param_1 = *param_1 + cVar5;
  *param_1 = *param_1 + cVar5;
  *(int *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(0x4a,uVar6))) =
       *(int *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(0x4a,uVar6))) +
       CONCAT22(uVar7,CONCAT11(0x4a,uVar6));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

