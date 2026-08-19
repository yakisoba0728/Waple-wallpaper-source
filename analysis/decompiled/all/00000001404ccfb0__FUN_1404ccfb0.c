// Function: FUN_1404ccfb0
// Addr: 1404ccfb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ccff4) */

void FUN_1404ccfb0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  longlong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_AF;
  byte *pbVar3;
  
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + param_1) = *(char *)(unaff_RBP + param_1) + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(param_2 + 0x35);
  *pcVar1 = *pcVar1;
  bVar2 = (byte)in_RAX;
  pbVar3 = (byte *)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                             CONCAT11((*pcVar1 < '\0') << 7 | (*pcVar1 == '\0') << 6 | in_AF << 4 |
                                      ((POPCOUNT(*pcVar1) & 1U) == 0) << 2,bVar2)) | 0x200);
  pcVar1 = (char *)(unaff_RSI + 0x1501004c + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + bVar2;
  *pbVar3 = *pbVar3 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

