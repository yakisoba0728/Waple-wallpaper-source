// Function: FUN_1404b19a4
// Addr: 1404b19a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b19a4(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  byte in_AL;
  byte bVar5;
  char cVar6;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  char acStackX_e [26];
  
  bVar7 = (byte)param_1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(undefined4 *)(unaff_RSI + param_2) = unaff_EBX;
  bVar5 = (in_AL + bVar7 + -0x16) - CARRY1(in_AL,bVar7);
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) + 0x21004b +
                   CONCAT44(unaff_0000001c,unaff_EBX));
  *pcVar2 = *pcVar2 + in_AH;
  bVar3 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       + bVar5;
  uVar4 = in((short)param_2);
  *unaff_RDI = uVar4;
  cVar6 = (bVar5 - 0x16) - CARRY1(bVar3,bVar5);
  pbVar1 = (byte *)(param_1 + -0x77ffe9e4);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
       (*(char *)CONCAT44(unaff_0000001c,unaff_EBX) - bVar7) - CARRY1(bVar3,bVar7);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6)))
       + cVar6;
  acStackX_e[CONCAT44(unaff_0000001c,unaff_EBX)] =
       acStackX_e[CONCAT44(unaff_0000001c,unaff_EBX)] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

