// Function: FUN_1404aacac
// Addr: 1404aacac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aaccd) overlaps instruction at (ram,0x0001404aaccc)
    */

void FUN_1404aacac(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte bVar8;
  uint *in_RAX;
  undefined7 uVar9;
  longlong lVar7;
  byte *pbVar10;
  longlong unaff_RSI;
  ulonglong uVar6;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + (char)*in_RAX;
  uVar6 = CONCAT71(uVar9,cVar3);
  pcVar1 = (char *)(unaff_RSI + uVar6);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RSI + param_1);
  *pcVar1 = *pcVar1 << 1;
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)((uVar6 ^ 6) + 0x76);
    *pcVar1 = *pcVar1 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = cVar3 + (char)param_1;
  lVar7 = CONCAT71(uVar9,cVar3);
  pbVar10 = (byte *)(param_1 + -1);
  if (pbVar10 == (byte *)0x0 || cVar3 == '\0') {
    bVar2 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar8;
    uVar4 = ((int)lVar7 - *(int *)(lVar7 * 2)) - (uint)CARRY1(bVar2,bVar8);
    uVar5 = uVar4 + 0x60000634;
    if (uVar4 < 0x9ffff9cc && uVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar5 != 0) {
      *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
      pcVar1 = (char *)(((ulonglong)uVar5 ^ 6) + 0x76);
      *pcVar1 = *pcVar1 + (char)(uVar5 >> 8);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

