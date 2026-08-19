// Function: FUN_1404aca7c
// Addr: 1404aca7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aca7c(char *param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  char in_AL;
  byte bVar4;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  undefined4 uVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint uVar6;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar4 = bRam6000109aa800109a;
  *param_1 = *param_1 + bRam6000109aa800109a;
  bVar5 = (byte)param_2 | *(byte *)(param_2 + 0x60057006);
  uVar6 = CONCAT31((int3)((ulonglong)param_2 >> 8),bVar5);
  bVar4 = (bVar4 | *(byte *)(CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) +
                            CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))))) + 0x30;
  *(uint *)(param_1 + CONCAT44(uVar7,uVar6)) = *(uint *)(param_1 + CONCAT44(uVar7,uVar6)) & uVar6;
  pcVar1 = (char *)(unaff_RBP + 8 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       | bVar4;
  cVar3 = in_AH * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4));
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) |
           0xd4) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)))
               | 0xd4) + (CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)) | 0xd4);
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)(unaff_RBP + 8 + CONCAT44(uVar7,uVar6) * 2) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

