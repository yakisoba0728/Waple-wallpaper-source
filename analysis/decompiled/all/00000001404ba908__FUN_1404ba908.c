// Function: FUN_1404ba908
// Addr: 1404ba908
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404ba913) overlaps instruction at (ram,0x0001404ba912)
    */

void FUN_1404ba908(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte in_AL;
  byte bVar3;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  
  do {
    *(ulonglong *)((longlong)register0x00000020 + -8) =
         CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) & in_AL;
    if ((POPCOUNT(*(undefined1 *)
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) & 1U) == 0) {
code_r0x0001404ba90e:
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
           *(byte *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) & in_AL;
      bVar3 = in_AL + 0xa8;
      *param_4 = *param_4 + (char)(undefined1 *)((longlong)register0x00000020 + -8);
      *param_2 = *param_2 | bVar3;
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
           *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + (char)param_1;
      bVar3 = in(0x2b);
      pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0xd);
      *pcVar1 = *pcVar1 + unaff_BH;
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
           *(byte *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) & bVar3;
      out(0xf4,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)));
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
           *(byte *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) & bVar3;
      pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                                 CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + 0x2021004b)
      ;
      *pbVar2 = *pbVar2 & (byte)((ulonglong)param_1 >> 8);
      bVar3 = in_AH & (byte)((ulonglong)param_2 >> 8);
      pbVar2 = (byte *)((ulonglong)
                        CONCAT43(in_register_00000004,CONCAT21(in_register_00000002,bVar3)) * 0x100
                       + unaff_RBP);
      *pbVar2 = *pbVar2 | (byte)param_2;
      out(0xf4,(uint)CONCAT21(in_register_00000002,bVar3) << 8);
      *(undefined1 *)
       ((ulonglong)CONCAT43(in_register_00000004,CONCAT21(in_register_00000002,bVar3)) << 8) = 0;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
        < '\0') {
      *param_1 = *param_1 + in_AH;
      goto code_r0x0001404ba90e;
    }
    pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + unaff_RBP * 2
                     );
    bVar3 = *pbVar2;
    *pbVar2 = *pbVar2 + in_AL;
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) + (uint)CARRY1(bVar3,in_AL);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  } while( true );
}

