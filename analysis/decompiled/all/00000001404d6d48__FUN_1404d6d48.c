// Function: FUN_1404d6d48
// Addr: 1404d6d48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d6d49) overlaps instruction at (ram,0x0001404d6d48)
    */

void FUN_1404d6d48(longlong param_1,longlong param_2,byte param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar5;
  byte bVar6;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *pbVar7;
  undefined1 uVar8;
  byte bVar9;
  char cVar10;
  undefined6 uVar11;
  undefined2 uVar12;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  byte unaff_R12B;
  bool bVar13;
  undefined2 unaff_retaddr;
  undefined1 auStackX_8 [32];
  byte bVar4;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar8 = (undefined1)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar13 = *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) != '\0';
  pbVar7 = (byte *)(param_1 + -1);
  uVar12 = (short)unaff_RBX;
  if (pbVar7 != (byte *)0x0 && bVar13) {
    pbVar7 = (byte *)(param_1 + -2);
    if (pbVar7 != (byte *)0x0 && bVar13) {
      bVar6 = in_AL & 0x6c;
      bVar2 = *param_4;
      *param_4 = *param_4 + unaff_R12B;
      pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                                  CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) &
                        0xffffffffffffff6c) +
                       (CONCAT44(in_register_00000004,
                                 CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) &
                       0xffffffffffffff6c));
      bVar3 = *pbVar1;
      bVar4 = *pbVar1;
      *pbVar1 = bVar4 + bVar6 + CARRY1(bVar2,unaff_R12B);
      pbVar7[unaff_RSI] =
           pbVar7[unaff_RSI] + bVar9 +
           (CARRY1(bVar3,bVar6) || CARRY1(bVar4 + bVar6,CARRY1(bVar2,unaff_R12B)));
      pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                                  CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) &
                        0xffffffffffffff6c) + param_2);
      *pbVar1 = *pbVar1 | bVar9;
      in_AL = bVar6 + in_AH;
      out((short)param_2,in_AL);
    }
    bVar9 = bVar9 + (char)((ulonglong)unaff_RBX >> 8);
    out(CONCAT11(bVar9,uVar8),in_AL);
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + (char)unaff_RBX;
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
    *pbVar7 = *pbVar7 + unaff_R12B;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    in_AL = in_AL + in_AH;
    out(CONCAT11(bVar9,uVar8),in_AL);
    uVar12 = unaff_retaddr;
  }
  cVar10 = bVar9 + (char)((ushort)uVar12 >> 8);
  out(CONCAT11(cVar10,uVar8),in_AL);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)uVar12;
  uVar5 = *(undefined8 *)register0x00000020;
  bVar9 = *pbVar7;
  *pbVar7 = *pbVar7 + param_3;
  *(char *)CONCAT62(uVar11,CONCAT11(cVar10,uVar8)) =
       (*(char *)CONCAT62(uVar11,CONCAT11(cVar10,uVar8)) - (char)pbVar7) - CARRY1(bVar9,param_3);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)uVar5;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^
           0xe) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
                ^ 0xe) + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

