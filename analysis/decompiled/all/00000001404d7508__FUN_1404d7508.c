// Function: FUN_1404d7508
// Addr: 1404d7508
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7508(byte *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 uVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte unaff_BPL;
  undefined7 unaff_00000029;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  uint *unaff_RDI;
  
  uVar4 = (undefined1)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
      == '\0') {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + 0x4d) = uVar4;
    *param_1 = *param_1 + in_AL;
    pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                     CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
    *pbVar2 = *pbVar2 | in_AL;
    *(ulonglong *)
     ((ulonglong)
      (uint)((int)&stack0x00000000 +
            *(int *)(CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL + 0x70))) + 2)) - 8
     ) = CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL + 0x70)));
    *unaff_RDI = *unaff_RDI & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x1d);
  *pcVar1 = *pcVar1 + in_AL;
  pbVar2 = (byte *)(CONCAT71(unaff_00000029,unaff_BPL) + -0xfffbf1d);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + unaff_BPL;
  if (CARRY1(bVar3,unaff_BPL)) {
    bVar3 = *param_1;
    *param_1 = *param_1 + in_AH;
    *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(int *)CONCAT44(unaff_00000034,unaff_ESI) +
         CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) + (uint)CARRY1(bVar3,in_AH);
    *param_1 = *param_1 + (char)param_2;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pbVar2 = (byte *)(param_2 + 0x38);
  *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
  *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL + (char)((ulonglong)param_1 >> 8)) + 0x4d) =
       uVar4;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)param_1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

