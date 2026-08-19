// Function: FUN_1404c41f4
// Addr: 1404c41f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c41f4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  uint *puVar6;
  char in_CF;
  
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'd' + in_CF);
  uVar5 = (uint)puVar6 | *puVar6;
  cVar4 = (char)uVar5;
  uVar3 = (undefined3)(uVar5 >> 8);
  uVar5 = CONCAT31(uVar3,cVar4 + 'T');
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
  bVar2 = cVar4 + 0x88;
  *(byte *)(ulonglong)CONCAT31(uVar3,bVar2) = *(byte *)(ulonglong)CONCAT31(uVar3,bVar2) | bVar2;
  pcVar1 = (char *)((ulonglong)CONCAT31(uVar3,cVar4 + -0x26) + 0x19);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + (0xad < bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

