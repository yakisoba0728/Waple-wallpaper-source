// Function: FUN_1404bf2a8
// Addr: 1404bf2a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf2a8(ulonglong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint in_EAX;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined6 uVar7;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  uVar5 = (ulonglong)in_EAX;
  *(char *)(param_1 & 0xffffffff) = *(char *)(param_1 & 0xffffffff) + '&';
  puVar3 = (uint *)CONCAT62(0x21,CONCAT11(cVar6 + (bRam000000000021004b | 0x4b),bRam000000000021004b
                                         ) | 0x4b);
  uVar4 = (ulonglong)((uint)puVar3 | *puVar3);
  pcVar2 = (char *)(CONCAT62(uVar7,CONCAT11(cVar6,0x26)) + uVar5);
  *pcVar2 = *pcVar2 + cVar6;
  *(char *)(uVar5 * 2) = *(char *)(uVar5 * 2) + '&';
  pcVar2 = (char *)(uVar4 + uVar5);
  *pcVar2 = *pcVar2 + cVar6;
  pcVar2 = (char *)(uVar4 - 0x4e);
  *pcVar2 = *pcVar2 + cVar6;
  *(char *)(uVar5 + 0x100026b2) = *(char *)(uVar5 + 0x100026b2) + '&';
  pbVar1 = (byte *)(CONCAT62(uVar7,CONCAT11(cVar6,0x26)) + 4);
  *pbVar1 = *pbVar1 | (byte)((uint)(iRam000000000801004b + 0x801004b) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

