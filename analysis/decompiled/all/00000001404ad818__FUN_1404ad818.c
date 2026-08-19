// Function: FUN_1404ad818
// Addr: 1404ad818
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad818(char *param_1,char *param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar8;
  uint in_EAX;
  uint uVar6;
  char *pcVar7;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  ulonglong unaff_retaddr;
  ulonglong uStackX_8;
  
  uVar2 = (undefined3)(in_EAX + 0x60000834 >> 8);
  *(char *)(unaff_RBP + 0x3800121c) = *(char *)(unaff_RBP + 0x3800121c) + unaff_BL;
  uVar3 = *(undefined1 *)
           (CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
           ((ulonglong)CONCAT31(uVar2,((char)(in_EAX + 0x60000834) + -0x12) - (0x9ffff7cb < in_EAX))
           & 0xff));
  *param_1 = *param_1;
  uVar6 = CONCAT31(uVar2,uVar3) + 0x54050002;
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
  cVar4 = ((char)uVar6 + -0x12) - ((unaff_retaddr & 1) != 0);
  uVar6 = CONCAT31((int3)(uVar6 >> 8),cVar4);
  pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x28bbffee);
  *pcVar7 = *pcVar7 + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + '\b';
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + cVar4;
  pbVar1 = (byte *)(unaff_RBP + 0x3400121c);
  bVar5 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  uVar6 = (uVar6 + 0x28bbffee) - (uint)CARRY1(bVar5,unaff_BL);
  *param_1 = *param_1 + '\b';
  *param_2 = *param_2 + (char)uVar6;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  pcVar7 = (char *)((ulonglong)uVar6 ^ 8);
  pbVar1 = (byte *)(pcVar7 + 0x1c);
  bVar5 = *pbVar1;
  bVar8 = (byte)(uVar6 >> 8);
  *pbVar1 = *pbVar1 + bVar8;
  uVar2 = (undefined3)(uVar6 >> 8);
  pcVar7 = (char *)(ulonglong)
                   CONCAT31(uVar2,((char)pcVar7 + *pcVar7 + CARRY1(bVar5,bVar8) + -0x12) -
                                  ((uStackX_8 & 1) != 0));
  *pcVar7 = *pcVar7 + unaff_BH;
  bVar5 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                   ((ulonglong)pcVar7 & 0xff));
  *param_1 = *param_1 + bVar5;
  *unaff_RSI = *unaff_RSI + (bVar5 | (byte)*(undefined4 *)((ulonglong)CONCAT31(uVar2,bVar5) * 2));
  *unaff_RDI = *unaff_RDI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

