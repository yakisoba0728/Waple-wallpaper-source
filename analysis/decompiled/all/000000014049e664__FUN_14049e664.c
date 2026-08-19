// Function: FUN_14049e664
// Addr: 14049e664
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e664(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar9;
  char *pcVar7;
  uint *in_RAX;
  uint *puVar8;
  byte bVar10;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  bool bVar11;
  char in_SF;
  char in_OF;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar4 = (byte)in_RAX;
  if (in_OF == in_SF) {
    bVar11 = CARRY1((byte)*in_RAX,bVar4);
    *(byte *)in_RAX = (byte)*in_RAX + bVar4;
    pbVar1 = (byte *)((longlong)in_RAX * 2);
    bVar10 = *pbVar1;
    bVar2 = *pbVar1;
    bRam210049e56c0000d6 = bVar4;
    *pbVar1 = (bVar2 - bVar4) - bVar11;
    puVar8 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11(((char)((ulonglong)in_RAX >> 8) - (char)param_2) -
                                       (bVar10 < bVar4 || (byte)(bVar2 - bVar4) < bVar11),bVar4));
    *puVar8 = *puVar8 | (uint)puVar8;
    bRam8c0000d6ca0000d6 =
         bVar4 - 0x3c | *(byte *)CONCAT71((int7)((ulonglong)puVar8 >> 8),bVar4 - 0x3c);
    uVar6 = in(0x49);
    cVar9 = (char)(uVar6 >> 8);
    *param_1 = *param_1 + cVar9;
    *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
    *(char *)(param_2 + -0x35ffff2a) = *(char *)(param_2 + -0x35ffff2a) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX & unaff_EBX;
  *(byte *)in_RAX = (byte)*in_RAX | bVar4;
  pbVar1 = (byte *)(param_1 + CONCAT44(unaff_0000001c,unaff_EBX));
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - bVar10;
  uVar6 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4 + 100 + (bVar2 < bVar10)) | 0x8e40434;
  pcVar7 = (char *)(ulonglong)uVar6;
  pcVar7[-0x2a] = pcVar7[-0x2a] + (char)(uVar6 >> 8);
  cVar9 = *pcVar7;
  cVar3 = (char)uVar6;
  *pcVar7 = *pcVar7 + cVar3;
  if (SCARRY1(cVar9,cVar3) == *pcVar7 < '\0') {
    *pcVar7 = *pcVar7 + cVar3;
    uVar5 = in(0x49);
    *param_1 = *param_1 + (char)((uint)uVar5 >> 8);
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)uVar5 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

