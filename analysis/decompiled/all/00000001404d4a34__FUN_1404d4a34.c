// Function: FUN_1404d4a34
// Addr: 1404d4a34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4a34(char *param_1,longlong param_2,char param_3,char *param_4)

{
  uint uVar1;
  undefined8 in_RAX;
  char cVar3;
  char unaff_BH;
  char unaff_R12B;
  char *pcVar2;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)((longlong)param_1 * 2),
                                 (char)in_RAX)) + 0xac000b34;
  pcVar2 = (char *)(ulonglong)uVar1;
  *(char *)((longlong)param_1 * 3) = *(char *)((longlong)param_1 * 3) + unaff_BH;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[param_2 * 4 + -0x6efaffc3] =
       pcVar2[param_2 * 4 + -0x6efaffc3] + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x70] = pcVar2[-0x70] + cVar3;
  *(char *)((longlong)param_1 * 3) = *(char *)((longlong)param_1 * 3) + cVar3;
  *param_4 = *param_4 + param_3;
  pcVar2 = (char *)(param_2 + ((ulonglong)uVar1 | 5) * 2);
  *pcVar2 = *pcVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

