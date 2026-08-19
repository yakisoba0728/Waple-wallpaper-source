// Function: FUN_1404c8be4
// Addr: 1404c8be4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8be4(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined6 uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_R12B;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)((ulonglong)param_2 >> 8);
  cVar3 = (char)param_1;
  cVar4 = (char)param_2 +
          *(char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x21);
  *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) =
       *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) | in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + cVar3;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
      == '\0') {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -100);
  *pcVar1 = *pcVar1 + in_AH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  if (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ==
      0) {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    *param_1 = *param_1 + unaff_R12B;
    *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) =
         *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) | in_AL | 0x8b;
    *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) |
             0x8b) =
         *(char *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 0x8b) + cVar3;
    bVar2 = in(0x5e);
    *(char *)(unaff_RBP + -100) = *(char *)(unaff_RBP + -100) + cVar5;
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))
                          ) ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2));
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar2))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar2)))
         ^ CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar2));
    *(char *)(unaff_RBX + 0x2721004c) = *(char *)(unaff_RBX + 0x2721004c) - cVar3;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar2))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar2)))
         | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AL;
  param_1[0x31] = param_1[0x31] ^ in_AH;
  param_1[-0x7563ffcf] = param_1[-0x7563ffcf] + cVar4;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

