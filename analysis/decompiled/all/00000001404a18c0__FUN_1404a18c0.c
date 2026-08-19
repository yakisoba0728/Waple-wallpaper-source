// Function: FUN_1404a18c0
// Addr: 1404a18c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a18e5) overlaps instruction at (ram,0x0001404a18e4)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a190e) */
/* WARNING: Removing unreachable block (ram,0x0001404a192d) */

void FUN_1404a18c0(longlong param_1,undefined8 param_2,char *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined3 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined8 in_RAX;
  ulonglong uVar8;
  char *pcVar10;
  char cVar11;
  undefined7 uVar12;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  undefined7 unaff_000000a1;
  longlong unaff_R14;
  longlong in_FS_OFFSET;
  char in_CF;
  char *pcStack_8;
  char *pcVar9;
  
  uVar12 = (undefined7)((ulonglong)param_2 >> 8);
  uVar7 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + -1) - in_CF) | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  pbVar1 = (byte *)((ulonglong)uVar7 + 1);
  cVar11 = (byte)param_2 + *pbVar1;
  uVar7 = uVar7 + 0x1150005 + (uint)CARRY1((byte)param_2,*pbVar1);
  pcVar9 = (char *)(ulonglong)uVar7;
  bVar6 = *unaff_RDI;
  cVar5 = (char)uVar7;
  *unaff_RDI = *unaff_RDI + cVar5;
  pcVar10 = (char *)(param_1 + -1);
  if (pcVar10 == (char *)0x0 || *unaff_RDI == 0) {
    if (SCARRY1(bVar6,cVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    register0x00000020 = (BADSPACEBASE *)&pcStack_8;
    pcStack_8 = pcVar9;
    *pcVar9 = *pcVar9 + cVar5;
  }
  *(uint *)(pcVar9 + 6) = *(uint *)(pcVar9 + 6) & uVar7;
  pcVar9[0x34] = pcVar9[0x34] + cVar5;
  pcVar2 = (char *)(CONCAT71(unaff_000000a1,unaff_R12B) + unaff_R14 * 8);
  *pcVar2 = *pcVar2 + unaff_R12B;
  *(char *)register0x00000020 = *(char *)register0x00000020 + cVar5;
  pcVar9[0x12] = pcVar9[0x12] + cVar11;
  if (cVar5 < '\0') {
    uVar7 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11((char)(uVar7 >> 8) + cVar5,cVar5));
    *param_3 = *param_3 + cVar5;
    pcVar9 = (char *)(in_FS_OFFSET + (ulonglong)uVar7);
    *pcVar9 = *pcVar9 + cVar5;
    uVar4 = (undefined3)(uVar7 >> 8);
    uVar8 = (ulonglong)CONCAT31(uVar4,cVar5) ^ 0x47;
    pcVar9 = (char *)(uVar8 + 0x12);
    *pcVar9 = *pcVar9 + cVar11;
    bVar6 = (byte)uVar8;
    uVar7 = CONCAT31(uVar4,bVar6);
    pcVar9 = (char *)(ulonglong)uVar7;
    if (-1 < (char)bVar6) {
      *pcVar10 = *pcVar10 + bVar6 + 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(pcVar9 + CONCAT71(uVar12,cVar11)) =
         *(uint *)(pcVar9 + CONCAT71(uVar12,cVar11)) & uVar7;
    pbVar1 = (byte *)((longlong)register0x00000020 + unaff_RSI);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar6;
    *pcVar9 = *pcVar9 + bVar6 + CARRY1(bVar3,bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar10 = *pcVar10 + (char)register0x00000020;
  *(char *)((longlong)register0x00000020 + CONCAT71(uVar12,cVar11) * 8) =
       *(char *)((longlong)register0x00000020 + CONCAT71(uVar12,cVar11) * 8) + cVar11;
  *param_3 = *param_3 + (char)pcVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

