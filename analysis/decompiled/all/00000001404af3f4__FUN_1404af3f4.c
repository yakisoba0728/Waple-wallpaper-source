// Function: FUN_1404af3f4
// Addr: 1404af3f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af406) overlaps instruction at (ram,0x0001404af404)
    */

void FUN_1404af3f4(longlong param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  undefined7 uVar7;
  char *pcVar8;
  char unaff_SPL;
  longlong in_FS_OFFSET;
  byte in_CF;
  bool bVar9;
  bool bVar10;
  uint *puVar5;
  char *pcVar6;
  
  uVar4 = in_EAX + 0xf0028d4 + (uint)in_CF;
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = ((char)uVar4 - *(char *)(in_FS_OFFSET + (ulonglong)uVar4)) - 0x3c;
  uVar4 = CONCAT31(uVar1,bVar2);
  puVar5 = (uint *)(ulonglong)uVar4;
  bVar9 = *puVar5 < uVar4;
  *puVar5 = *puVar5 - uVar4;
  pcVar8 = (char *)(param_1 + -1);
  bVar10 = bVar9;
  if (pcVar8 != (char *)0x0 && *puVar5 != 0) {
    bVar10 = CARRY1(bVar2,bVar9);
    puVar5 = (uint *)(ulonglong)CONCAT31(uVar1,bVar2 + bVar9);
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),(char)((ulonglong)param_2 >> 8));
  }
  uVar7 = (undefined7)((ulonglong)puVar5 >> 8);
  cVar3 = (byte)puVar5 + bVar10 + cRam0000000131d2f41e + CARRY1((byte)puVar5,bVar10);
  pcVar6 = (char *)CONCAT71(uVar7,cVar3);
  *pcVar8 = *pcVar8 + unaff_SPL;
  *pcVar6 = *pcVar6 + cVar3;
  *param_2 = *param_2 + (char)param_2;
  uVar4 = (int)CONCAT71(uVar7,cVar3 + (char)((ulonglong)puVar5 >> 8) + '\x14') + 0xf1880014;
  pcVar6 = (char *)(ulonglong)uVar4;
  *pcVar8 = *pcVar8 + unaff_SPL;
  *pcVar6 = *pcVar6 + (char)pcVar8;
  *pcVar6 = *pcVar6 + (char)uVar4;
  cVar3 = in(0x27);
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3);
  *pcVar8 = *pcVar8 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

