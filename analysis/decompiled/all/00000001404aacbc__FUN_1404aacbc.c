// Function: FUN_1404aacbc
// Addr: 1404aacbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aaccd) overlaps instruction at (ram,0x0001404aaccc)
    */

void FUN_1404aacbc(longlong param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte bVar7;
  ulonglong in_RAX;
  byte *pbVar8;
  char unaff_BH;
  longlong unaff_RBP;
  bool in_ZF;
  longlong lVar6;
  
  bVar7 = (byte)(in_RAX >> 8);
  if (!in_ZF) {
    pcVar1 = (char *)((in_RAX ^ 6) + 0x76);
    *pcVar1 = *pcVar1 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)in_RAX + (char)param_1;
  lVar6 = CONCAT71((int7)(in_RAX >> 8),cVar3);
  pbVar8 = (byte *)(param_1 + -1);
  if (pbVar8 == (byte *)0x0 || cVar3 == '\0') {
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar7;
    uVar4 = ((int)lVar6 - *(int *)(lVar6 * 2)) - (uint)CARRY1(bVar2,bVar7);
    uVar5 = uVar4 + 0x60000634;
    if (uVar4 < 0x9ffff9cc && uVar5 != 0) {
      *(char *)(unaff_RBP + 0x76) = *(char *)(unaff_RBP + 0x76) + unaff_BH;
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

