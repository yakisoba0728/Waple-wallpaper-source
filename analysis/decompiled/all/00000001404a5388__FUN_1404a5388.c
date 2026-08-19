// Function: FUN_1404a5388
// Addr: 1404a5388
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5389) overlaps instruction at (ram,0x0001404a5388)
    */

void FUN_1404a5388(byte *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte in_AL;
  byte bVar5;
  char in_AH;
  char cVar6;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  int *unaff_RDI;
  char in_SF;
  char in_OF;
  byte bVar4;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + 1;
  *(char *)(param_2 + -0x6ffff801) = *(char *)(param_2 + -0x6ffff801) + in_AH;
  bVar5 = *param_1;
  *param_1 = *param_1 - 8;
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  bVar3 = *pbVar2;
  bVar4 = *pbVar2;
  *pbVar2 = (bVar4 - in_AL) - (7 < bVar5);
  cVar6 = (in_AH - (char)param_2) - (bVar3 < in_AL || (byte)(bVar4 - in_AL) < (7 < bVar5));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar6,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar6,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar6,in_AL));
  bVar5 = in_AL - 0x3c |
          *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar6,in_AL - 0x3c)));
  bRamb00007ffca0007ff = bVar5;
  *param_1 = *param_1 - 0x10;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar6,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar6,bVar5)))
       + bVar5;
  *(char *)(param_2 + -0x35fff801) = *(char *)(param_2 + -0x35fff801) + cVar6;
  *unaff_RDI = *unaff_RDI + 1;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar6,bVar5))) + 0x21004a52);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar6,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar6,bVar5)))
       + bVar5;
  pcVar1 = (char *)((longlong)unaff_RDI * 9 + 7);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(param_2 + -0x6ffff801) = *(char *)(param_2 + -0x6ffff801) + cVar6;
  *param_1 = *param_1 - 0x18;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar6,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar6,bVar5)))
       + bVar5;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar6,bVar5))) + -1);
  *pcVar1 = *pcVar1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

