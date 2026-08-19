// Function: FUN_1404d79d8
// Addr: 1404d79d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d79d8(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte in_AL;
  char cVar6;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BL;
  uint *unaff_RSI;
  longlong unaff_RDI;
  
  cVar5 = in_AH * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL)) + (uint)CARRY1(in_AH,in_AH);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) + param_2);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  bVar4 = *(byte *)((longlong)unaff_RSI + -0x6036ffc9);
  *(byte *)((longlong)unaff_RSI + -0x6036ffc9) =
       (byte)(CONCAT11(CARRY1(bVar3,(byte)param_2),bVar4) >> 5) | bVar4 << 4;
  cVar6 = in_AL + unaff_BL;
  if (-1 < cVar6) {
    *param_1 = *param_1 + cVar5;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar6))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar6))
                          ) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(unaff_RDI + 0x379ca500 + (longlong)unaff_RSI);
  *pcVar2 = *pcVar2 + unaff_BL + CARRY1(in_AL,unaff_BL);
  if (-1 < (char)(cVar6 + unaff_BL)) {
    *param_1 = *param_1 + cVar5;
    *unaff_RSI = *unaff_RSI & CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar6 + unaff_BL));
    *param_1 = *param_1 + cVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

