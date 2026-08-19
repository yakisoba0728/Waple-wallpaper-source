// Function: FUN_1404d1fd0
// Addr: 1404d1fd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1fd0(char *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar6;
  uint *in_RAX;
  undefined7 uVar7;
  char *pcVar4;
  byte bVar8;
  char unaff_BL;
  char *unaff_RSI;
  char unaff_R12B;
  bool in_SF;
  byte *pbVar5;
  
  bVar8 = (byte)param_2;
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(in_RAX + 0x2300a6) = bVar8;
  *in_RAX = *in_RAX & (uint)param_1;
  cVar1 = (char)in_RAX + (char)*in_RAX;
  bVar6 = (byte)((ulonglong)in_RAX >> 8) | (byte)((ulonglong)param_2 >> 8);
  uVar7 = (undefined7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar6,cVar1)) >> 8);
  *(char *)(param_2 + 0x3a) = *(char *)(param_2 + 0x3a) + cVar1;
  pcVar4 = (char *)(param_2 + CONCAT71(uVar7,cVar1) * 2);
  *pcVar4 = *pcVar4 + bVar6;
  pcVar4 = (char *)CONCAT71(uVar7,cVar1 + -0x13);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar4 = *pcVar4 - (char)param_1;
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
  uVar2 = in(0x15);
  pbVar5 = (byte *)CONCAT71(uVar7,uVar2);
  *unaff_RSI = *unaff_RSI + unaff_BL;
  if (*unaff_RSI != '\0') {
    bVar6 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar8;
    uVar3 = ((int)pbVar5 + -0x14f40000) - (uint)CARRY1(bVar6,bVar8);
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
    *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

