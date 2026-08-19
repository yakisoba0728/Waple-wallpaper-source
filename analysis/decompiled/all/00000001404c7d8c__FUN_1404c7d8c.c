// Function: FUN_1404c7d8c
// Addr: 1404c7d8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7d8c(uint param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar5;
  uint *in_RAX;
  byte *pbVar4;
  char cVar7;
  char cVar8;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  undefined7 uVar6;
  
  *in_RAX = *in_RAX & param_1;
  bVar2 = (char)in_RAX + (char)*in_RAX;
  bVar5 = (byte)((ulonglong)in_RAX >> 8) | (byte)param_2;
  pbVar4 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar5,bVar2));
  uVar6 = (undefined7)((ulonglong)pbVar4 >> 8);
  bVar2 = bVar2 & *pbVar4;
  pbVar4 = (byte *)CONCAT71(uVar6,bVar2);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30);
  *pcVar1 = *pcVar1 << 1;
  cVar8 = (char)((ushort)param_2 >> 8);
  cVar7 = (byte)param_2 + bVar5;
  if (cVar7 == '\0') {
    pbVar4[0x7a] = pbVar4[0x7a] + cVar8;
    *pbVar4 = *pbVar4 ^ bVar2;
    in(CONCAT11(cVar8,cVar7));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (&stack0x0021004c)[unaff_RDI * 2] = (&stack0x0021004c)[unaff_RDI * 2] + unaff_BL;
  *pbVar4 = *pbVar4 + bVar2;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30);
  *pcVar1 = *pcVar1 << 1;
  if ((byte)(cVar7 + bVar5) != '\0') {
    (&stack0x0521004c)[unaff_RDI * 2] = (&stack0x0521004c)[unaff_RDI * 2] + unaff_BL;
    uVar3 = (int)CONCAT71(uVar6,bVar2 + *pbVar4) + 0x40000664;
    pbVar4 = (byte *)(ulonglong)uVar3;
    if ((POPCOUNT(uVar3 & 0xff) & 1U) != 0) {
      pbVar4[0x7a] = pbVar4[0x7a] + cVar8;
      *pbVar4 = *pbVar4 ^ (byte)uVar3;
      in(CONCAT11(cVar8,cVar7 + bVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar4 = *pbVar4 + (byte)uVar3;
    bVar2 = in(9);
    pbVar4 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
    pbVar4[0x7b] = pbVar4[0x7b] + bVar2;
    *pbVar4 = *pbVar4 ^ bVar2;
    LOCK();
    *(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30) = unaff_BH;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar4[0x7b] = pbVar4[0x7b] + bVar2;
  *pbVar4 = *pbVar4 ^ bVar2;
  LOCK();
  *(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30) = unaff_BH;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

