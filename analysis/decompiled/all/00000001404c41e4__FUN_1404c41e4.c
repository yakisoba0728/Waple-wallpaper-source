// Function: FUN_1404c41e4
// Addr: 1404c41e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c41e4(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulonglong in_RAX;
  char *pcVar6;
  uint *puVar7;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = (char)in_RAX;
  pcVar6 = (char *)(in_RAX | 0x35);
  bVar3 = (byte)pcVar6;
  *pcVar6 = *pcVar6 + bVar3;
  *pcVar6 = *pcVar6 + bVar3;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar3;
  puVar7 = (uint *)CONCAT71((int7)(in_RAX >> 8),bVar3 + 8 + CARRY1(bVar1,bVar3));
  uVar5 = (uint)puVar7 | *puVar7;
  cVar4 = (char)uVar5;
  uVar2 = (undefined3)(uVar5 >> 8);
  uVar5 = CONCAT31(uVar2,cVar4 + 'T');
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
  bVar1 = cVar4 + 0x88;
  *(byte *)(ulonglong)CONCAT31(uVar2,bVar1) = *(byte *)(ulonglong)CONCAT31(uVar2,bVar1) | bVar1;
  pcVar6 = (char *)((ulonglong)CONCAT31(uVar2,cVar4 + -0x26) + 0x19);
  *pcVar6 = *pcVar6 + (char)((ulonglong)param_2 >> 8) + (0xad < bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

