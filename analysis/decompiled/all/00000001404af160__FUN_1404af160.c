// Function: FUN_1404af160
// Addr: 1404af160
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af160(longlong param_1,uint param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint *in_RAX;
  char *pcVar10;
  byte bVar11;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  char *unaff_RSI;
  uint *unaff_RDI;
  bool bVar13;
  uint *puVar9;
  byte *pbVar12;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar7 = *in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  pbVar12 = (byte *)(param_1 + -1);
  bVar11 = (byte)pbVar12;
  if (pbVar12 != (byte *)0x0 && (byte)*in_RAX != 0) {
    *param_4 = *param_4 + bVar4;
    *(byte *)unaff_RDI = (char)*unaff_RDI - bVar11;
    *(byte *)in_RAX = (byte)*in_RAX + (char)((ulonglong)pbVar12 >> 8);
    if (-1 < (char)(byte)*in_RAX) {
      pbVar12 = (byte *)((longlong)in_RAX + CONCAT44(unaff_0000002c,unaff_EBP) * 2);
      *pbVar12 = *pbVar12 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (uint)in_RAX + *in_RAX + (uint)CARRY1((byte)uVar7,bVar4);
  puVar9 = (uint *)(ulonglong)uVar7;
  piVar1 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0xfa7ffed);
  *piVar1 = *piVar1 - unaff_EBX;
  bVar4 = *pbVar12;
  bVar5 = (byte)uVar7;
  *pbVar12 = *pbVar12 + bVar5;
  *unaff_RSI = (*unaff_RSI - bVar5) - CARRY1(bVar4,bVar5);
  *(byte *)puVar9 = (byte)*puVar9 + (char)unaff_EBX;
  bVar13 = SCARRY4(iRam000000014b3afd7b,unaff_EBP);
  iRam000000014b3afd7b = iRam000000014b3afd7b + unaff_EBP;
  if (!bVar13) {
    *(byte *)puVar9 = (byte)*puVar9 ^ bVar11;
    *unaff_RDI = *unaff_RDI & param_2;
    *(byte *)puVar9 = (byte)*puVar9 | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *puVar9;
  *puVar9 = *puVar9 - uVar7;
  uVar8 = CONCAT31((int3)(uVar7 >> 8),(bVar5 - (byte)*puVar9) + -0x3c);
  uVar8 = uVar8 - *(int *)(ulonglong)uVar8;
  pcVar10 = (char *)(ulonglong)uVar8;
  *(undefined1 *)((ulonglong)(param_2 + (int)&stack0x00000000 + (uint)(uVar2 < uVar7)) - 0x5d0cffed)
       = 0;
  pcVar10[0x21004af0] = pcVar10[0x21004af0] + (char)(uVar8 >> 8);
  *pcVar10 = *pcVar10 + (char)uVar8;
  uVar3 = (undefined3)(uVar8 >> 8);
  cVar6 = (char)uVar8 * '\x02';
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  cRamf0a00013a2f30013 = cVar6;
  *pbVar12 = *pbVar12;
  *pcVar10 = *pcVar10 + bVar11;
  *pcVar10 = *pcVar10 + cVar6;
  cVar6 = in(0x29);
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  *pcVar10 = *pcVar10 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

