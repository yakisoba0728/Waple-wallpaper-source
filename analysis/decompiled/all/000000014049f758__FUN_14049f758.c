// Function: FUN_14049f758
// Addr: 14049f758
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f758(char *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte in_AL;
  byte bVar5;
  undefined1 uVar6;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint *unaff_RBX;
  char *unaff_RSI;
  char in_CF;
  undefined8 unaff_retaddr;
  
  do {
    *(char *)((longlong)unaff_RBX + -0x5cccffff) =
         *(char *)((longlong)unaff_RBX + -0x5cccffff) + in_AH + in_CF;
    in_CF = CARRY4(*(uint *)CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))),
                   CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    iVar3 = *(int *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  } while (SCARRY4(iVar3,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *param_4 = *param_4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)param_2;
  *param_4 = *param_4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + in_AL;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)param_2;
  uRamf6700001a3330001 = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar5 = *param_4;
  *param_4 = *param_4 + in_AL;
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  bVar4 = in_AL + *pbVar2;
  bVar5 = bVar4 + CARRY1(bVar5,in_AL) + *param_1 +
          (CARRY1(in_AL,*pbVar2) || CARRY1(bVar4,CARRY1(bVar5,in_AL)));
  *(byte *)unaff_RBX = (char)*unaff_RBX + bVar5;
  *param_2 = *param_2 ^ bVar5;
  *unaff_RBX = *unaff_RBX & (uint)unaff_RSI;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)((ulonglong)unaff_retaddr >> 8);
  uVar6 = in(0x55);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar6)))
       + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

