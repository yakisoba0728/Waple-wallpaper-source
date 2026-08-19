// Function: FUN_1404ab710
// Addr: 1404ab710
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ab730) */

void FUN_1404ab710(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined6 uVar6;
  char unaff_SPL;
  char *pcVar5;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar2 = in(0xb5);
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar5 = *pcVar5 + cVar2;
  *pcVar5 = *pcVar5 + (char)param_2;
  uVar4 = (uint)pcVar5 & 0x254b000f;
  verr();
  bVar3 = (byte)uVar4;
  *(byte *)CONCAT62(uVar6,CONCAT11(0x4a,(char)param_1)) =
       *(char *)CONCAT62(uVar6,CONCAT11(0x4a,(char)param_1)) + bVar3;
  pbVar1 = (byte *)((ulonglong)uVar4 * 2);
  *pbVar1 = *pbVar1 | bVar3;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

