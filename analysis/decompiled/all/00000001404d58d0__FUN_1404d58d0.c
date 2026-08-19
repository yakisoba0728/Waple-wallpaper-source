// Function: FUN_1404d58d0
// Addr: 1404d58d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d58d0(longlong param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint *in_RAX;
  char *pcVar7;
  char unaff_BL;
  char unaff_BPL;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar3 = *in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8) + CARRY1((byte)uVar3,bVar4);
  pbVar1 = (byte *)(unaff_RDI + -0x37ffc9f0);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_1;
  pcVar7 = (char *)(param_1 + -1);
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  if (pcVar7 == (char *)0x0 || *pbVar1 == 0) {
    *pcVar7 = *pcVar7 + cVar5;
    iVar6 = ((uint)in_RAX | 0x740d0004) + 0x8340500;
    pcVar7 = (char *)((ulonglong)CONCAT31((int3)((uint)iVar6 >> 8),(char)iVar6 + (char)param_2) +
                     0x21004bac);
    *pcVar7 = *pcVar7 + unaff_BPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)((longlong)in_RAX + 0x4d) =
       *(byte *)((longlong)in_RAX + 0x4d) + unaff_BL + CARRY1(bVar2,(byte)param_1);
  *pcVar7 = *pcVar7 + cVar5;
  *param_2 = *param_2 + (char)pcVar7;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  cVar5 = in(2);
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  *pcVar7 = *pcVar7 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

