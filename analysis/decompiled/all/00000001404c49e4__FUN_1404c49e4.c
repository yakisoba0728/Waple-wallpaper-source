// Function: FUN_1404c49e4
// Addr: 1404c49e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c49e4(void)

{
  uint uVar1;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined8 in_RAX;
  uint *puVar8;
  byte in_CF;
  bool bVar11;
  bool bVar12;
  byte *pbVar9;
  char *pcVar10;
  
  bVar5 = (byte)in_RAX + 0x9c;
  puVar8 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5 - in_CF);
  uVar1 = (uint)((byte)in_RAX < 100 || bVar5 < in_CF);
  uVar2 = (uint)puVar8 + *puVar8;
  bVar11 = CARRY4((uint)puVar8,*puVar8) || CARRY4(uVar2,uVar1);
  iVar7 = uVar2 + uVar1;
  bVar5 = (byte)iVar7;
  bVar4 = bVar5 + 0xac;
  bVar12 = bVar5 < 0x54 || bVar4 < bVar11;
  uVar3 = (undefined3)((uint)iVar7 >> 8);
  bVar4 = bVar4 - bVar11;
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4);
  bVar5 = bVar4 + *pbVar9;
  bVar11 = CARRY1(bVar4,*pbVar9) || CARRY1(bVar5,bVar12);
  bVar5 = bVar5 + bVar12;
  bVar4 = bVar5 - 0x34;
  cVar6 = bVar4 - bVar11;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  *pcVar10 = *pcVar10 + cVar6 + (bVar5 < 0x34 || bVar4 < bVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

