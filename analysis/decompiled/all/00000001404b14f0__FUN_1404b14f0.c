// Function: FUN_1404b14f0
// Addr: 1404b14f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b14f0(char *param_1,uint *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar7;
  undefined8 in_RAX;
  byte unaff_BH;
  uint unaff_ESP;
  char *unaff_RSI;
  byte in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  byte *pbVar6;
  
  if (!in_ZF && in_OF == in_SF) {
    uVar4 = (int)in_RAX + 0x49f32000 + (uint)in_CF;
    *param_1 = *param_1 + (char)(uVar4 >> 8);
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    cVar3 = (char)uVar4 + (char)param_2;
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0 || cVar3 != '\0') {
      pbVar6 = (byte *)(unaff_RSI + -0x1e);
      bVar2 = *pbVar6;
      *pbVar6 = *pbVar6 + unaff_BH;
      uVar5 = CONCAT31((int3)(uVar4 >> 8),cVar3) + 0x49f32000 + (uint)CARRY1(bVar2,unaff_BH);
      *param_1 = *param_1 + (char)uVar5;
      uVar4 = *(uint *)(ulonglong)uVar5;
      *unaff_RSI = *unaff_RSI + (char)((uVar5 | uVar4) >> 8);
      piVar1 = (int *)(((ulonglong)(uVar5 | uVar4) ^ 0x1e) * 2);
      *piVar1 = *piVar1 + (int)param_2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = (char)in_RAX + 'P' + in_CF;
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *pbVar6 = *pbVar6 + bVar2;
  *param_2 = *param_2 & unaff_ESP;
  *pbVar6 = *pbVar6 | bVar2;
  pcVar7 = (char *)(ulonglong)((int)pbVar6 + 0x6681700);
  *pcVar7 = *pcVar7 + ((byte)param_1 & pbVar6[0x781c0004]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

