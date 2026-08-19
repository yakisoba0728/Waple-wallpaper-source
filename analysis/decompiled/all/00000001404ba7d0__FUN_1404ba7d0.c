// Function: FUN_1404ba7d0
// Addr: 1404ba7d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *in_RAX;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined6 uVar9;
  char unaff_SPL;
  longlong unaff_RDI;
  undefined2 in_GS;
  longlong in_FS_OFFSET;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar8 = (undefined1)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_1;
  bVar7 = (byte)param_2 ^ (byte)((ulonglong)param_1 >> 8);
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX & bVar2;
  if ((POPCOUNT((byte)*in_RAX) & 1U) != 0) {
    *(byte *)in_RAX = (byte)*in_RAX & bVar2;
    pcVar1 = (char *)(unaff_RDI + 1);
    *param_4 = *param_4 + unaff_SPL;
    *pcVar1 = *pcVar1 + cVar6;
    if (*pcVar1 != '\0') {
      *(char *)CONCAT62(uVar9,CONCAT11(uVar8,bVar7)) =
           *(char *)CONCAT62(uVar9,CONCAT11(uVar8,bVar7)) + cVar6;
      uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            bVar2 | *(byte *)(in_FS_OFFSET + (longlong)in_RAX)) + 0x80000834;
      in_RAX = (uint *)(ulonglong)uVar3;
      out(CONCAT11(uVar8,bVar7),uVar3);
    }
    bVar2 = (byte)in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX & bVar2;
    out(CONCAT11(uVar8,bVar7),(int)in_RAX);
    *(byte *)in_RAX = (byte)*in_RAX & bVar2;
    *(undefined2 *)(unaff_RDI + 0x521004f) = in_GS;
    uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 + (byte)*in_RAX) + 0xa70004f4;
    pbVar5 = (byte *)(ulonglong)uVar3;
    out(CONCAT11(uVar8,bVar7),uVar3);
    *pbVar5 = *pbVar5 & (byte)uVar3;
    *(char *)(unaff_RDI + 5) = *(char *)(unaff_RDI + 5) + cVar6;
    *param_4 = *param_4 + unaff_SPL;
    iVar4 = CONCAT31((int3)(uVar3 >> 8),
                     (byte)uVar3 | *(byte *)((longlong)pbVar5 * 2) | (byte)(uVar3 >> 8)) + 0x9540500
    ;
    bVar2 = (char)iVar4 * '\x02';
    uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),bVar2);
    out(CONCAT11(uVar8,bVar7),uVar3);
    *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 & bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

