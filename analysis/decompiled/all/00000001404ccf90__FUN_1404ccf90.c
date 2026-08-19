// Function: FUN_1404ccf90
// Addr: 1404ccf90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ccfcc) */

void FUN_1404ccf90(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar4;
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char in_AF;
  char cVar3;
  
  pcVar1 = (char *)(param_2 + 0x35);
  *pcVar1 = *pcVar1;
  cVar2 = *pcVar1;
  cVar3 = *pcVar1;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004c + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + (char)in_RAX;
  uVar4 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((((cVar2 == '\0') << 6 | in_AF << 4 |
                                   ((POPCOUNT(cVar3) & 1U) == 0) << 2 | 2U) +
                                 (char)((ulonglong)param_2 >> 8)) * '\x02',(char)in_RAX)) +
          0x6d40000;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

