// Function: FUN_1404d10fc
// Addr: 1404d10fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d1118) overlaps instruction at (ram,0x0001404d1117)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d1117) */

void FUN_1404d10fc(char *param_1,uint *param_2,longlong param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RBP;
  uint *unaff_RSI;
  byte *unaff_RDI;
  byte unaff_R12B;
  
  cVar7 = (char)param_2;
  uVar5 = in_EAX + 0xed022e04;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + *(char *)(ulonglong)uVar5);
  *param_2 = *param_2 | uVar5;
  *(byte *)unaff_RSI = (byte)*unaff_RSI | (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_BL;
  uVar5 = uVar5 | *unaff_RSI;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  uVar3 = (undefined3)(uVar5 >> 8);
  bVar4 = (byte)uVar5 ^ *unaff_RDI;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || bVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((ulonglong)CONCAT31(uVar3,bVar4) + 0x10);
  *pcVar1 = *pcVar1 + cVar7;
  pbVar6 = (byte *)(param_3 + 0x55);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  *unaff_RBP = *unaff_RBP + (char)param_1 + CARRY1(bVar2,unaff_R12B);
  pbVar6 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + bVar4,(char)param_1));
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,cVar7)) +
                   (ulonglong)CONCAT31(uVar3,bVar4 + 9 + CARRY1(bVar2,bVar4)) * 4);
  *pcVar1 = *pcVar1 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

