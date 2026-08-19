// Function: FUN_1404d2384
// Addr: 1404d2384
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2384(char *param_1,char *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint *in_RAX;
  undefined7 uVar5;
  char *pcVar3;
  byte bVar6;
  byte bVar7;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  byte *pbVar4;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)param_1;
  bVar1 = (char)in_RAX + (char)*in_RAX;
  uVar5 = (undefined7)
          (CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                    CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar7,bVar1)) >> 8);
  *param_2 = *param_2 + unaff_BH;
  pcVar3 = (char *)CONCAT71(uVar5,(bVar1 ^ 0x3a) - 0x13);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 - (char)param_1;
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
  uVar2 = in(0x15);
  pbVar4 = (byte *)CONCAT71(uVar5,uVar2);
  *unaff_RSI = *unaff_RSI + unaff_BL;
  if (*unaff_RSI != '\0') {
    bVar1 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar6;
    pcVar3 = (char *)(ulonglong)(((int)pbVar4 + -0x14f40000) - (uint)CARRY1(bVar1,bVar6));
    *pcVar3 = *pcVar3 + bVar6;
    param_2[unaff_RDI] = param_2[unaff_RDI] + bVar7;
    *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

