// Function: FUN_1404ce54c
// Addr: 1404ce54c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ce576) */

void FUN_1404ce54c(undefined8 param_1,int *param_2)

{
  char cVar1;
  byte in_AL;
  char in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  longlong lVar4;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 *unaff_RBX;
  longlong unaff_RBP;
  uint *unaff_RSI;
  char unaff_R13B;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)param_2;
  *unaff_RBX = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = in_AH + bVar6;
  lVar4 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                   CONCAT11((char)((ulonglong)param_1 >> 8) + (char)*unaff_RSI + (char)*unaff_RSI,
                            (byte)param_1));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       + in_AL;
  bVar3 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       + in_AL;
  *param_2 = *param_2 + (int)param_2 + (uint)CARRY1(bVar3,in_AL);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | in_AL;
  cVar1 = bVar6 + *(byte *)((longlong)param_2 + lVar4);
  cVar7 = (char)((ulonglong)param_2 >> 8) + *(char *)(lVar4 * 2) +
          CARRY1(bVar6,*(byte *)((longlong)param_2 + lVar4));
  *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar1))) =
       *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar1))) + cVar1;
  bVar3 = (byte)param_1 ^ (byte)*unaff_RSI;
  lVar4 = CONCAT71((int7)((ulonglong)lVar4 >> 8),bVar3) + -1;
  if (lVar4 == 0 || bVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI ^ (uint)lVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  *(char *)(unaff_RBP + 0x6004ce4) = *(char *)(unaff_RBP + 0x6004ce4) + unaff_R13B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       + -0x48;
  pcVar5 = (char *)CONCAT62((int6)((ulonglong)lVar4 >> 0x10),
                            CONCAT11((char)((ulonglong)lVar4 >> 8) + (char)*unaff_RSI,(char)lVar4));
  *pcVar5 = *pcVar5 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

