// Function: FUN_1404c24c4
// Addr: 1404c24c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c24c4(uint param_1,char *param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte in_AL;
  byte bVar3;
  byte in_AH;
  undefined6 in_register_00000002;
  char cVar4;
  char *pcVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  char unaff_BL;
  int unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar9 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  uVar6 = SUB81(param_2,0);
  param_1 = param_1 & *(uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x28 +
                               CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  pcVar5 = (char *)(ulonglong)param_1;
  piVar2 = (int *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)pcVar5 * 2);
  *piVar2 = *piVar2 + unaff_ESP;
  cVar4 = (char)param_1;
  *pcVar5 = *pcVar5 + cVar4;
  *param_2 = *param_2 + (in_AL & 0x4c);
  bVar3 = (in_AL & 0x4c |
          *(byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffff4c) -
                   0x7effd624)) + *(char *)(unaff_RSI + unaff_RBP * 8);
  bVar8 = bVar7 + pcVar5[0x11000004];
  *pcVar5 = (*pcVar5 - cVar4) - CARRY1(bVar7,pcVar5[0x11000004]);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) + unaff_BL;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) ^ 0x19) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) ^ 0x19) + unaff_BL;
  *(int *)CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(bVar8,uVar6))) =
       *(int *)CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(bVar8,uVar6))) +
       CONCAT22(uVar9,CONCAT11(bVar8,uVar6));
  pcVar5 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) ^ 0x19) + unaff_RSI * 8);
  *pcVar5 = *pcVar5 + cVar4;
  pbVar1 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH | bVar3 ^ 0x19,bVar3)) ^ 0x19) + 7
                   );
  *pbVar1 = *pbVar1 | bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

