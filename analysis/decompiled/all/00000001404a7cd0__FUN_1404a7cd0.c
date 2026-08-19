// Function: FUN_1404a7cd0
// Addr: 1404a7cd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a7d0f) overlaps instruction at (ram,0x0001404a7d0e)
    */

void FUN_1404a7cd0(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char in_AL;
  byte bVar4;
  char cVar5;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined6 uVar9;
  char unaff_BH;
  char *pcVar10;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *pcVar11;
  longlong unaff_RDI;
  bool bVar12;
  char acStack_8 [8];
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)param_2;
  bVar8 = (byte)((ulonglong)param_2 >> 8) |
          (&stack0x00000000)
          [CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))];
  bVar6 = (byte)param_1;
  bVar12 = CARRY1(*(byte *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)),bVar6);
  *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + bVar6;
  bVar4 = in_AL + *unaff_RSI + bVar12;
  if (SCARRY1(in_AL,*unaff_RSI) != SCARRY1(in_AL + *unaff_RSI,bVar12)) {
    bVar12 = CARRY1(*param_1,bVar4);
    *param_1 = *param_1 + bVar4;
code_r0x0001404a7cfd:
    iRam00000001524b8e03 =
         iRam00000001524b8e03 + CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)) + (uint)bVar12;
    *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + bVar6;
    if (param_1 == (byte *)0x1 || *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) == '\0') {
      *unaff_RSI = *unaff_RSI;
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
           *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) + bVar4;
      *(uint *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
           *(uint *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) & (uint)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + in_AH;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cVar5 = bVar4 + 2;
  pcVar11 = (char *)(CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) + unaff_RBP * 2)
  ;
  *pcVar11 = *pcVar11 + cVar5;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))
       + cVar5;
  pbVar2 = param_1 + CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + 0xaad1200;
  *pbVar2 = *pbVar2;
  if ((POPCOUNT(*pbVar2) & 1U) == 0) {
    *param_1 = *param_1 + in_AH;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))
                          ) + cVar5;
    pcVar11 = (char *)(CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) + 0x12000aac);
    *pcVar11 = *pcVar11 + cVar5;
    pcVar11 = unaff_RSI + 4;
    uVar3 = *(undefined4 *)unaff_RSI;
    in_AH = (char)((uint)uVar3 >> 8);
    in_register_00000002 = (undefined2)((uint)uVar3 >> 0x10);
    bVar4 = (byte)uVar3 | *(byte *)CONCAT44(in_register_00000004,uVar3);
    pcVar10 = (char *)register0x00000020;
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      bVar12 = CARRY1(*param_1,bVar4);
      *param_1 = *param_1 + bVar4;
      unaff_RSI = pcVar11;
      goto code_r0x0001404a7cfd;
    }
  }
  else {
    pcVar10 = acStack_8;
    acStack_8[0] = '\x06';
    acStack_8[1] = '\0';
    acStack_8[2] = 'D';
    acStack_8[3] = -0x50;
    acStack_8[4] = -1;
    acStack_8[5] = -1;
    acStack_8[6] = -1;
    acStack_8[7] = -1;
    unaff_RDI = unaff_RDI + 1;
    pcVar11 = unaff_RSI + 1;
    bVar4 = 10;
    acStack_8[unaff_RDI * 2] = acStack_8[unaff_RDI * 2] + unaff_BH;
    *param_1 = *param_1 + (char)acStack_8;
  }
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       + bVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) + 10 +
                   (longlong)pcVar11 * 4);
  *pcVar1 = *pcVar1 + bVar4;
  pcVar11 = pcVar11 + 0x3c000ab0;
  cVar5 = *pcVar11;
  *pcVar11 = *pcVar11 + in_AH;
  if (SCARRY1(cVar5,in_AH) == *pcVar11 < '\0') {
    *param_1 = *param_1 + in_AH;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))
                          ) + bVar4;
    pcVar11 = (char *)(CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) + -0x51);
    *pcVar11 = *pcVar11 + in_AH;
    pcVar10[unaff_RDI * 2] = pcVar10[unaff_RDI * 2] + (char)((ulonglong)param_1 >> 8);
    *param_1 = *param_1 + (char)pcVar10;
    *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + bVar6;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,10))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,10))) +
         '\n';
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(ulonglong *)(pcVar10 + -8) =
       CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

