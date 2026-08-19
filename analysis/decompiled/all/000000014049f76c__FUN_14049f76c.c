// Function: FUN_14049f76c
// Addr: 14049f76c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f76c(char *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  byte in_AL;
  byte bVar5;
  undefined1 uVar6;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar7;
  uint *unaff_RBX;
  char *pcVar8;
  char *unaff_RSI;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  pcVar8 = (char *)(ulonglong)((uint)&stack0x00000000 ^ *(uint *)((longlong)unaff_RBX + -0x98fffff))
  ;
  *param_4 = *param_4 + (char)*(uint *)((longlong)unaff_RBX + -0x98fffff);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + in_AL;
  *unaff_RSI = *unaff_RSI + cVar7;
  *pcVar8 = *pcVar8 + cVar7;
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
  bVar3 = in_AL + *pbVar2;
  bVar5 = bVar3 + CARRY1(bVar5,in_AL) + *param_1 +
          (CARRY1(in_AL,*pbVar2) || CARRY1(bVar3,CARRY1(bVar5,in_AL)));
  uVar4 = *(undefined8 *)pcVar8;
  *(byte *)unaff_RBX = (char)*unaff_RBX + bVar5;
  *param_2 = *param_2 ^ bVar5;
  *(ulonglong *)pcVar8 =
       CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)));
  *unaff_RBX = *unaff_RBX & (uint)unaff_RSI;
  *(char **)(pcVar8 + -8) = pcVar8;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)((ulonglong)uVar4 >> 8);
  uVar6 = in(0x55);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar6)))
       + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

