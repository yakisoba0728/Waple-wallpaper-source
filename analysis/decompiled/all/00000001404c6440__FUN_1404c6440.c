// Function: FUN_1404c6440
// Addr: 1404c6440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c647d) overlaps instruction at (ram,0x0001404c647c)
    */

void FUN_1404c6440(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  byte in_AL;
  byte bVar4;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *pcVar5;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int *unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    bVar4 = in_AL | *(byte *)CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) |
            *(byte *)(param_2 + 6);
    pcVar5 = (char *)(param_1 + -1);
    if (pcVar5 != (char *)0x0 && bVar4 != 0) {
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
           *(byte *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) ^ bVar4;
      *pcVar5 = *pcVar5 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar2 = *(char *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))
                          ) + bVar4;
    *unaff_RDI = *unaff_RDI +
                 CONCAT22((short)((ulonglong)param_2 >> 0x10),
                          CONCAT11((char)((ulonglong)param_2 >> 8) + cVar2,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 + 0x44002f72) = *(char *)(param_1 + 0x44002f72) + unaff_BH;
  uVar3 = *(uint *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x21 +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x46ffd08e);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  if (CARRY1(bVar4,unaff_BL)) {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4c);
  *pcVar5 = *pcVar5 + in_AL;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar4 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if (CARRY1(bVar4,in_AL)) {
    cRam0000000141ac7109 = cRam0000000141ac7109 + (char)uVar3;
    SegmentLimit(*(undefined4 *)
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x38002f72);
  *pcVar5 = *pcVar5 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

