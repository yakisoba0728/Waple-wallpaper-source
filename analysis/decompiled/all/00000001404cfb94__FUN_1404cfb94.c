// Function: FUN_1404cfb94
// Addr: 1404cfb94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cfc19) overlaps instruction at (ram,0x0001404cfc18)
    */

void FUN_1404cfb94(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  int *piVar7;
  char *pcVar8;
  char cVar9;
  byte bVar11;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RSI;
  longlong unaff_RDI;
  char in_R11B;
  byte unaff_R12B;
  char unaff_R13B;
  uint *puVar6;
  byte *pbVar10;
  
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  uVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam580040bec60040be);
  *param_1 = *param_1 + in_R11B;
  uVar4 = (uint)uVar5 & 0x1130006;
  cVar2 = (char)uVar4 + *unaff_RSI;
  puVar6 = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar2);
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || cVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)puVar6 = (char)*puVar6;
  *unaff_RSI = *unaff_RSI >> 1;
  *(char *)((longlong)puVar6 + 0x12) = *(char *)((longlong)puVar6 + 0x12) + bVar11;
  *(char *)puVar6 = (char)*puVar6 + cVar2;
  *puVar6 = *puVar6 & (uint)param_2;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar11,cVar2));
  pcVar8 = (char *)(ulonglong)uVar4;
  cVar9 = (char)param_1 + *pcVar8;
  pbVar10 = (byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar9);
  if (cVar9 == '\0') {
    if (SCARRY1((char)param_1,*pcVar8)) {
      pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4c + unaff_RDI * 8)
      ;
      *pcVar1 = *pcVar1 + unaff_BL;
      param_2[0x12] = param_2[0x12] + bVar11;
      *pcVar8 = *pcVar8 + cVar2;
      *(char *)(unaff_RBP + -5) = *(char *)(unaff_RBP + -5) - bVar11;
      pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4c + unaff_RDI * 8)
      ;
      *pcVar8 = *pcVar8 + unaff_R13B;
      *param_2 = *param_2 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    cVar9 = (char)((char)param_2 + pcVar8[-0x7c]) >> 1;
    bVar3 = *pbVar10;
    *pbVar10 = *pbVar10 + unaff_R12B;
    cVar2 = (cVar2 - *(char *)((longlong)pcVar8 * 2)) - CARRY1(bVar3,unaff_R12B);
    piVar7 = (int *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar2);
    *piVar7 = *piVar7 + (int)pbVar10;
    *pbVar10 = *pbVar10 + unaff_R12B;
    *(char *)piVar7 = (char)*piVar7 + cVar2;
    unaff_RSI[-0x7affc37b] = unaff_RSI[-0x7affc37b] + bVar11;
    pcVar8 = (char *)func_0x0001614d48f3();
    bVar3 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar3;
    pcVar8[-0x7c] = pcVar8[-0x7c] + cVar9;
    *pbVar10 = *pbVar10 + in_R11B;
    uVar4 = (int)pbVar10 - *(int *)pbVar10;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + unaff_BL;
    *(uint *)(unaff_RSI + 4) = *(int *)(unaff_RSI + 4) + uVar4;
    pbVar10 = (byte *)((CONCAT62((int6)((ulonglong)pcVar8 >> 0x10),
                                 CONCAT11((byte)((ulonglong)pcVar8 >> 8) | bVar3 ^ 0x55 | 0xf0,bVar3
                                         )) ^ 0x55 | 0xf0) + 7);
    *pbVar10 = *pbVar10 | bVar11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

