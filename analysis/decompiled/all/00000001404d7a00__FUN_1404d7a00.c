// Function: FUN_1404d7a00
// Addr: 1404d7a00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7a00(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  char cVar3;
  char cVar4;
  byte in_AH;
  char cVar5;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar6;
  char unaff_BL;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  bool bVar7;
  bool bVar8;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  bVar2 = bVar6 - in_AH;
  bVar7 = bVar6 < in_AH || bVar2 < in_CF;
  bVar6 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar8 = CARRY1(in_AL,*(byte *)CONCAT44(in_register_00000004,
                                         CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) ||
          CARRY1(bVar6,bVar7);
  cVar3 = bVar6 + bVar7;
  cVar5 = in_AH * '\x02' + bVar8;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3)) +
       (uint)(CARRY1(in_AH,in_AH) || CARRY1(in_AH * '\x02',bVar8));
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar3))) +
                   CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar2 - in_CF,(byte)param_2)
                           ));
  *pbVar1 = *pbVar1 | (byte)param_2;
  unaff_RSI[unaff_RDI + 0x379ca500] = unaff_RSI[unaff_RDI + 0x379ca500] + unaff_BL;
  cVar4 = cVar3 + unaff_BL;
  if (-1 < cVar4) {
    *param_1 = *param_1 + cVar5;
    *unaff_RSI = *unaff_RSI + cVar4;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4))
                          ) + cVar4;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (!SCARRY1(cVar3,unaff_BL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

