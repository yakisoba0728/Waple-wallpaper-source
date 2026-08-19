// Function: FUN_1404c3004
// Addr: 1404c3004
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3004(longlong param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char in_AL;
  byte bVar3;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *pbVar4;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_ZF;
  
  pbVar4 = (byte *)(param_1 + -1);
  if (pbVar4 == (byte *)0x0 || in_ZF != '\0') {
    *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    uVar2 = in((short)param_2);
    *unaff_RDI = uVar2;
    *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    bVar3 = in_AL + 0x2f;
    bVar1 = *pbVar4;
    *pbVar4 = *pbVar4 + param_3;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))
                          ) + (char)pbVar4 + CARRY1(bVar1,param_3);
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))
                          ) + (char)param_2;
    *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) ^
             0xd) =
         *(char *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) ^ 0xd) +
         (char)param_2;
    pbVar4 = (byte *)((CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,
                                         CONCAT11(in_AH | bVar3 ^ 0xd | 0xf0,bVar3))) ^ 0xd | 0xf0)
                     + 7);
    *pbVar4 = *pbVar4 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) -
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

