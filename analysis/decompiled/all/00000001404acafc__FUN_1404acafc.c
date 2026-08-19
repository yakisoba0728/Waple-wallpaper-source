// Function: FUN_1404acafc
// Addr: 1404acafc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acafc(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  undefined1 in_AH;
  byte bVar3;
  undefined6 in_register_00000002;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_CF;
  char in_AF;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)param_2;
  cVar4 = (char)((ulonglong)param_1 >> 8);
  *(undefined1 *)(unaff_RDI + -0x6047fff0) = unaff_BL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL + in_CF;
  *param_1 = *param_1 + (char)unaff_RBP + '\b';
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x77ffef61);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  bVar3 = ((char)*pbVar1 < '\0') << 7 | (*pbVar1 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(*pbVar1) & 1U) == 0) << 2 | 2U | CARRY1(bVar2,in_AL);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) + in_AL + CARRY1(bVar2,in_AL);
  *(longlong *)unaff_RBP = unaff_RBP + 8;
  *param_1 = *param_1 + in_AL;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
  *param_1 = *param_1 + cVar4;
  *param_1 = *param_1 + cVar4;
  *(int *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(0x4a,uVar5))) =
       *(int *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(0x4a,uVar5))) +
       CONCAT22(uVar6,CONCAT11(0x4a,uVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

