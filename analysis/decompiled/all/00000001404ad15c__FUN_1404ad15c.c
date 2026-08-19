// Function: FUN_1404ad15c
// Addr: 1404ad15c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad166) overlaps instruction at (ram,0x0001404ad165)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad166) */
/* WARNING: Removing unreachable block (ram,0x0001404ad0ef) */

void FUN_1404ad15c(byte *param_1,char *param_2)

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
  undefined7 uVar6;
  char cVar7;
  byte unaff_BH;
  undefined1 *puVar8;
  
  uRam00000001344fd164 = uRam00000001344fd164 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | in_AL;
  puVar8 = (undefined1 *)register0x00000020;
  do {
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
    cVar7 = (char)param_2;
    if (-1 < *(int *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) {
      *param_1 = *param_1 + (char)puVar8;
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
           *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + in_AL;
      pcVar2 = (char *)(CONCAT44(in_register_00000004,
                                 CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x78001184)
      ;
      *pcVar2 = *pcVar2 + cVar7;
      pcVar2 = (char *)(CONCAT44(in_register_00000004,
                                 CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x30);
      *pcVar2 = *pcVar2 + unaff_BH;
      *param_1 = *param_1 + (char)puVar8;
      *param_2 = *param_2 + in_AL;
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
           *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + in_AL;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) +
         (uint)(CARRY4(uVar3,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ||
               CARRY4(uVar4,(uint)CARRY1(bVar5,unaff_BH)));
    bVar5 = *param_1;
    *param_1 = *param_1 + 0x4a;
    uVar6 = (undefined7)((ulonglong)param_1 >> 8);
    bVar5 = (char)param_1 +
            *(char *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,0x4a))) + (0xb5 < bVar5);
    *param_2 = *param_2 + cVar7;
    *(undefined1 **)(puVar8 + -8) = puVar8;
    in_AL = *(byte *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,0x4a))) | 0x4a;
    param_2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11((char)((ulonglong)param_2 >> 8) +
                                        *(char *)(CONCAT71(uVar6,bVar5) * 2),cVar7));
    *param_2 = *param_2 + cVar7;
    bVar5 = bVar5 ^ bRam00000000ec001182;
    param_1 = (byte *)(CONCAT71(uVar6,bVar5) + -1);
    puVar8 = puVar8 + -8;
  } while (param_1 != (byte *)0x0 && bVar5 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

