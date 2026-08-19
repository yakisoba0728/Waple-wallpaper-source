// Function: FUN_1404af090
// Addr: 1404af090
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af090(char *param_1,int *param_2)

{
  char *pcVar1;
  byte in_AL;
  char cVar2;
  byte in_AH;
  byte bVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar4;
  byte bVar5;
  undefined6 uVar6;
  longlong unaff_RBX;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  bVar4 = (byte)param_2;
  *(byte *)param_2 = (char)*param_2 + in_AL + CARRY1(in_AH,in_AH);
  bVar3 = in_AH * '\x02' + bVar4;
  *param_2 = *param_2 + CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)) +
             (uint)CARRY1(in_AH * '\x02',bVar4);
  cVar2 = in_AL + (char)*param_2 + CARRY1(bVar3,in_AL);
  pcVar1 = (char *)(unaff_RBX + 2 + (longlong)param_2);
  *pcVar1 = *pcVar1 + bVar5;
  param_1[unaff_RBX + 2] = param_1[unaff_RBX + 2] + bVar3 + in_AL;
  *(byte *)(unaff_RBX + -0x745affed) = *(byte *)(unaff_RBX + -0x745affed) | 0x13;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar3 + in_AL,cVar2))) + -0x11);
  *pcVar1 = *pcVar1 + bVar4;
  *param_1 = *param_1 + cVar2;
  bVar5 = bVar5 | *(byte *)((longlong)param_2 + (longlong)param_1);
  *(char *)CONCAT62(uVar6,CONCAT11(bVar5,bVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(bVar5,bVar4)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

