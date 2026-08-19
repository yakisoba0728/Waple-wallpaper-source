// Function: FUN_1404ad830
// Addr: 1404ad830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad830(char *param_1,char *param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  byte bVar8;
  undefined8 in_RAX;
  char *pcVar7;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  ulonglong unaff_retaddr;
  ulonglong uStackX_8;
  char *pcVar6;
  
  cVar3 = ((char)in_RAX + -0x12) - ((unaff_retaddr & 1) != 0);
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x28bbffee);
  *pcVar7 = *pcVar7 + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + '\b';
  *pcVar6 = *pcVar6 + cVar3;
  pbVar1 = (byte *)(unaff_RBP + 0x3400121c);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  uVar5 = ((int)pcVar6 + 0x28bbffee) - (uint)CARRY1(bVar4,unaff_BL);
  *param_1 = *param_1 + '\b';
  *param_2 = *param_2 + (char)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  pcVar7 = (char *)((ulonglong)uVar5 ^ 8);
  pbVar1 = (byte *)(pcVar7 + 0x1c);
  bVar4 = *pbVar1;
  bVar8 = (byte)(uVar5 >> 8);
  *pbVar1 = *pbVar1 + bVar8;
  uVar2 = (undefined3)(uVar5 >> 8);
  pcVar7 = (char *)(ulonglong)
                   CONCAT31(uVar2,((char)pcVar7 + *pcVar7 + CARRY1(bVar4,bVar8) + -0x12) -
                                  ((uStackX_8 & 1) != 0));
  *pcVar7 = *pcVar7 + unaff_BH;
  bVar4 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                   ((ulonglong)pcVar7 & 0xff));
  *param_1 = *param_1 + bVar4;
  *unaff_RSI = *unaff_RSI + (bVar4 | (byte)*(undefined4 *)((ulonglong)CONCAT31(uVar2,bVar4) * 2));
  *unaff_RDI = *unaff_RDI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

