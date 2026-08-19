// Function: FUN_1404c7d58
// Addr: 1404c7d58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7d58(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  char cVar6;
  char cVar7;
  char cVar8;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  byte *pbVar5;
  
  bVar3 = (byte)in_RAX;
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  if (in_OF == in_SF) {
    *param_1 = *param_1 + cVar7;
    *in_RAX = *in_RAX + bVar3;
    pbVar5 = in_RAX + -0x2fffcf90;
    bVar2 = *pbVar5;
    *pbVar5 = *pbVar5 + cVar7;
    if (!SCARRY1(bVar2,cVar7)) {
      (&stack0x00000044)[unaff_RDI * 2] = (&stack0x00000044)[unaff_RDI * 2] + bVar3;
      *param_1 = *param_1 + unaff_BL;
      uVar4 = (uint)in_RAX & 0x1170009;
      *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 - (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar8 = (char)((ushort)param_2 >> 8);
    cVar6 = (char)param_2 + cVar7;
    param_2 = CONCAT11(cVar8,cVar6);
    if (cVar6 == '\0') {
      in_RAX[0x7a] = in_RAX[0x7a] + cVar8;
      *in_RAX = *in_RAX ^ bVar3;
      in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (&stack0x00210044)[unaff_RDI * 2] = (&stack0x00210044)[unaff_RDI * 2] + unaff_BL;
    *in_RAX = *in_RAX + bVar3;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30);
    *pcVar1 = *pcVar1 << 1;
  }
  cVar6 = (char)((ushort)param_2 >> 8);
  cVar7 = (char)param_2 + cVar7;
  if (cVar7 == '\0') {
    in_RAX[0x7b] = in_RAX[0x7b] + bVar3;
    *in_RAX = *in_RAX ^ bVar3;
    LOCK();
    *(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30) = unaff_BH;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (&stack0x05210044)[unaff_RDI * 2] = (&stack0x05210044)[unaff_RDI * 2] + unaff_BL;
  uVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 + *in_RAX) + 0x40000664;
  pbVar5 = (byte *)(ulonglong)uVar4;
  if ((POPCOUNT(uVar4 & 0xff) & 1U) != 0) {
    pbVar5[0x7a] = pbVar5[0x7a] + cVar6;
    *pbVar5 = *pbVar5 ^ (byte)uVar4;
    in(CONCAT11(cVar6,cVar7));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar5 = *pbVar5 + (byte)uVar4;
  bVar3 = in(9);
  pbVar5 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3);
  pbVar5[0x7b] = pbVar5[0x7b] + bVar3;
  *pbVar5 = *pbVar5 ^ bVar3;
  LOCK();
  *(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30) = unaff_BH;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

