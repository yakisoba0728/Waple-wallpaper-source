// Function: FUN_1404d0b78
// Addr: 1404d0b78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0b78(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  uint uVar7;
  byte *in_RAX;
  uint *puVar8;
  byte *pbVar9;
  char cVar11;
  char cVar12;
  longlong unaff_RBX;
  byte *unaff_RBP;
  int *unaff_RDI;
  char in_CF;
  char cVar10;
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2 + (char)((ulonglong)in_RAX >> 8) + in_CF;
  uVar7 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX) | 0x8000b64;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
  bVar6 = bRam90003720d3003720;
  uVar4 = CONCAT31((int3)(uVar7 >> 8),bRam90003720d3003720);
  puVar8 = (uint *)(ulonglong)uVar4;
  bVar2 = *unaff_RBP;
  *puVar8 = *puVar8 & uVar4;
  bVar6 = bVar6 | (byte)*puVar8;
  uVar5 = (undefined2)(uVar7 >> 0x10);
  cVar10 = (char)(uVar7 >> 8) + cVar12;
  pbVar9 = (byte *)(ulonglong)CONCAT22(uVar5,CONCAT11(cVar10,bVar6));
  *pbVar9 = *pbVar9 | bVar6;
  cVar10 = cVar10 * '\x02';
  uVar4 = CONCAT22(uVar5,CONCAT11(cVar10,bVar6));
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  cVar10 = cVar10 + cVar11;
  uVar4 = CONCAT22(uVar5,CONCAT11(cVar10,bVar6));
  bVar3 = *(byte *)(ulonglong)uVar4;
  pcVar1 = (char *)(unaff_RBX + CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 | bVar2));
  *pcVar1 = *pcVar1 + cVar10;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar6 | bVar3) +
                   CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar12,cVar11)));
  *pcVar1 = *pcVar1 + cVar11;
  *unaff_RDI = *unaff_RDI + (int)&stack0xfffffffffffffff8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

