// Function: FUN_1404be9a4
// Addr: 1404be9a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be9a4(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_RAX;
  char *pcVar5;
  char unaff_SPL;
  byte in_CF;
  
  puVar1 = (uint *)(param_2 + param_1);
  uVar3 = *puVar1;
  uVar4 = *puVar1 - (uint)param_2;
  *puVar1 = uVar4 - in_CF;
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                        (char)in_RAX + -0x1c + (uVar3 < (uint)param_2 || uVar4 < in_CF)) + 0xdc40500
  ;
  *(char *)((ulonglong)uVar3 - 0x40ffd9f3) = *(char *)((ulonglong)uVar3 - 0x40ffd9f3) + (char)uVar3;
  pcVar5 = (char *)(ulonglong)(uVar3 | 0xd600026);
  *param_4 = *param_4 + unaff_SPL;
  cVar2 = (char)(uVar3 | 0xd600026);
  *pcVar5 = *pcVar5 + cVar2;
  pcVar5[-0x40ffd9f3] = pcVar5[-0x40ffd9f3] + cVar2;
  uVar4 = uVar3 | 0xd600026;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)((ulonglong)uVar4 * 2) = *(char *)((ulonglong)uVar4 * 2) + (char)param_1;
  uVar3 = CONCAT22((short)(uVar4 >> 0x10),
                   CONCAT11(((char)(uVar3 >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02',
                            (char)uVar4)) + 0x6d40000;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

