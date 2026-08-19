// Function: FUN_1404a28fc
// Addr: 1404a28fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a28fc(longlong param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  ulonglong uVar5;
  char cVar6;
  uint *puVar4;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x2f) + 0x52fcc00;
  puVar4 = (uint *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  *(byte *)puVar4 = (char)*puVar4 + bVar2;
  *param_2 = *param_2 - (char)param_1;
  *puVar4 = *puVar4 & uVar3;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8) + cVar6,bVar2));
  uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2 | *(byte *)(ulonglong)uVar3);
  pcVar1 = (char *)(uVar5 + param_1);
  *pcVar1 = *pcVar1 + cVar6;
  pcVar1 = (char *)(uVar5 - 0x33fffad1);
  *pcVar1 = *pcVar1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

