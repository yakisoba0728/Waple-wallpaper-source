// Function: FUN_1404ae634
// Addr: 1404ae634
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae634(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *in_RAX;
  char *pcVar4;
  undefined7 uVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESP;
  ulonglong unaff_RSI;
  byte *pbVar7;
  longlong unaff_RDI;
  byte in_CF;
  bool in_OF;
  bool bVar8;
  byte *pbVar5;
  
  if (!in_OF) {
    pcVar4 = (char *)(unaff_RSI & 0xffffffff);
    pbVar7 = (byte *)(ulonglong)((int)in_RAX + *in_RAX + (uint)in_CF);
    cVar2 = (char)pcVar4;
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - cVar2;
    *param_1 = *param_1 + (char)((ulonglong)pcVar4 >> 8);
    *pbVar7 = *pbVar7 + cVar2;
    *pcVar4 = *pcVar4 + cVar2;
    uVar6 = (undefined7)((ulonglong)pcVar4 >> 8);
    cVar2 = in(7);
    pbVar5 = (byte *)CONCAT71(uVar6,cVar2);
    *pbVar5 = *pbVar5 + cVar2;
    if (*pbVar5 != 0) {
      *pbVar5 = *pbVar5 + cVar2;
      pcVar4 = (char *)((CONCAT71(uVar6,cVar2) ^ 0xd) + 0x44);
      *pcVar4 = *pcVar4 + (char)((ulonglong)param_2 >> 8);
      pbVar5 = pbVar7;
    }
    bVar3 = (byte)pbVar5;
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - bVar3;
    bVar1 = *param_1;
    *param_1 = *param_1 + bVar3;
    *(uint *)pbVar5 = (*(int *)pbVar5 - (int)param_1) - (uint)CARRY1(bVar1,bVar3);
    *param_1 = *param_1 + unaff_BL;
    *(int *)param_1 = *(int *)param_1 + unaff_ESP;
    cVar2 = (char)param_1;
    bVar8 = SCARRY1(cRam000000014a0af249,cVar2);
    cRam000000014a0af249 = cRam000000014a0af249 + cVar2;
    if (!bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar4 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x2c);
    *pcVar4 = *pcVar4 + cVar2;
    *pbVar5 = *pbVar5 & bVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

