// Function: FUN_1404ad14c
// Addr: 1404ad14c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad14d) overlaps instruction at (ram,0x0001404ad14c)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad166) */
/* WARNING: Removing unreachable block (ram,0x0001404ad0ef) */

void FUN_1404ad14c(longlong param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  byte *pbVar6;
  char cVar7;
  byte unaff_BH;
  byte *unaff_RSI;
  byte in_CF;
  
  while( true ) {
    bVar5 = (byte)param_2 + param_2[param_1];
    cVar7 = bVar5 + in_CF;
    param_2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11((char)((ulonglong)param_2 >> 8) + *(char *)(param_1 * 2) +
                                        (CARRY1((byte)param_2,param_2[param_1]) ||
                                        CARRY1(bVar5,in_CF)),cVar7));
    *param_2 = *param_2 + cVar7;
    bVar5 = (byte)param_1 ^ *unaff_RSI;
    pbVar6 = (byte *)(CONCAT71((int7)((ulonglong)param_1 >> 8),bVar5) + -1);
    if (pbVar6 == (byte *)0x0 || bVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x7b);
    bVar5 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BH;
    uVar3 = *(uint *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    uVar4 = *(int *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         uVar4 + CARRY1(bVar5,unaff_BH);
    if (-1 < *(int *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) break;
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) +
         (uint)(CARRY4(uVar3,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ||
               CARRY4(uVar4,(uint)CARRY1(bVar5,unaff_BH)));
    unaff_RSI = (byte *)0xec001182;
    bVar5 = *pbVar6;
    *pbVar6 = *pbVar6 + 0x4a;
    param_1 = CONCAT71((int7)((ulonglong)pbVar6 >> 8),
                       (char)pbVar6 +
                       *(char *)CONCAT44(in_register_00000004,
                                         CONCAT22(in_register_00000002,CONCAT11(in_AH,0x4a))) +
                       (0xb5 < bVar5));
    *param_2 = *param_2 + cVar7;
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    in_CF = 0;
    in_AL = *(byte *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,0x4a))) | 0x4a;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  }
  *pbVar6 = *pbVar6 + (char)register0x00000020;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x78001184);
  *pcVar2 = *pcVar2 + cVar7;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x30);
  *pcVar2 = *pcVar2 + unaff_BH;
  *pbVar6 = *pbVar6 + (char)register0x00000020;
  *param_2 = *param_2 + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

