// Function: FUN_1404b0884
// Addr: 1404b0884
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0884(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int in_EAX;
  uint uVar6;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte in_CF;
  byte *pbVar7;
  char *pcVar8;
  
  pbVar7 = (byte *)(unaff_RBP + -0x7ad0ffeb);
  bVar1 = *pbVar7;
  bVar3 = *pbVar7 - (byte)in_EAX;
  *pbVar7 = bVar3 - in_CF;
  uVar6 = in_EAX + 0x4b078c00 + (uint)(bVar1 < (byte)in_EAX || bVar3 < in_CF);
  pbVar7 = (byte *)(ulonglong)uVar6;
  *param_1 = *param_1 + (char)(uVar6 >> 8);
  bVar4 = (byte)uVar6;
  *pbVar7 = *pbVar7 + bVar4;
  *pbVar7 = *pbVar7 + unaff_BL;
  pbVar7[unaff_RDI + 0x21004b] = pbVar7[unaff_RDI + 0x21004b] + (char)param_1;
  bVar1 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  pbVar7 = (byte *)(unaff_RBP + -0x7ae7ffeb);
  bVar3 = *pbVar7;
  bVar2 = *pbVar7;
  *pbVar7 = bVar2 + bVar4 + CARRY1(bVar1,bVar4);
  uVar6 = uVar6 + 0x4b059400 +
          (uint)(CARRY1(bVar3,bVar4) || CARRY1(bVar2 + bVar4,CARRY1(bVar1,bVar4)));
  *param_1 = *param_1 + (char)(uVar6 >> 8);
  *param_2 = *param_2 + (char)param_1;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  cVar5 = in(4);
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar5);
  *pcVar8 = *pcVar8 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

