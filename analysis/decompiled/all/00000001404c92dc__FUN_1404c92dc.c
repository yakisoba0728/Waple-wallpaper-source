// Function: FUN_1404c92dc
// Addr: 1404c92dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c92dc(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char extraout_AL;
  char cVar3;
  byte bVar4;
  undefined1 extraout_AH;
  undefined6 extraout_var;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  undefined1 uVar8;
  char cVar9;
  undefined6 uVar10;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar9 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined1)param_2;
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar6 = (undefined1)((ulonglong)param_1 >> 8);
  uVar5 = (undefined1)param_1;
  unaff_RSI[param_1 + 0x31b52100] = unaff_RSI[param_1 + 0x31b52100];
  *unaff_RDI = *unaff_RSI;
  func_0x0001406d9333();
  cVar3 = extraout_AL + *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL));
  pcVar1 = (char *)(CONCAT62(extraout_var,CONCAT11(extraout_AH,cVar3)) +
                   CONCAT62(extraout_var,CONCAT11(extraout_AH,cVar3)));
  *pcVar1 = *pcVar1 + cVar9;
  bVar4 = cVar3 * '\x02';
  *(char *)CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) + '1';
  pcVar1 = (char *)(CONCAT62(extraout_var,CONCAT11(0x31,bVar4)) + 0x18010049 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + '1';
  bVar4 = bVar4 | *(byte *)CONCAT62(extraout_var,CONCAT11(0x31,bVar4));
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT62(uVar10,CONCAT11(cVar9,uVar8)));
  *pcVar1 = *pcVar1 - cVar9;
  bVar2 = *(byte *)CONCAT62(extraout_var,CONCAT11(0x31,bVar4));
  *(byte *)CONCAT62(extraout_var,CONCAT11(0x31,bVar4)) =
       *(char *)CONCAT62(extraout_var,CONCAT11(0x31,bVar4)) + unaff_BL;
  if (!CARRY1(bVar2,unaff_BL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

