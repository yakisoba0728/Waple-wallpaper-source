// Function: FUN_1404be194
// Addr: 1404be194
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be194(longlong param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  longlong in_RAX;
  longlong lVar6;
  byte bVar9;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte in_CF;
  char *pcVar7;
  byte bVar8;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  bVar4 = bVar8 - *(byte *)(in_RAX + param_1);
  lVar6 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar4 - in_CF,(char)in_RAX));
  piVar1 = (int *)(unaff_RDI + lVar6);
  *piVar1 = *piVar1 + (int)param_2 + (uint)(bVar8 < *(byte *)(in_RAX + param_1) || bVar4 < in_CF);
  uVar5 = ((int)lVar6 + 0x20000634U >> 8 & 0x25ac31) << 8;
  pcVar7 = (char *)(ulonglong)uVar5;
  pcVar2 = (char *)(param_2 + 0x21004a + param_1);
  *pcVar2 = *pcVar2 + bVar9;
  *pcVar7 = *pcVar7;
  *(byte *)(unaff_RBP + 0x25ac3100) =
       *(byte *)(unaff_RBP + 0x25ac3100) & (byte)((ulonglong)param_1 >> 8);
  pbVar3 = (byte *)(param_2 + 0x7a21004a + param_1);
  bVar4 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar9;
  *pcVar7 = *pcVar7 + CARRY1(bVar4,bVar9);
  if ((POPCOUNT(*pcVar7) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(unaff_RBP + 0x1a21004b + (ulonglong)(uVar5 & 0x25ab4800));
  *pcVar2 = *pcVar2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

