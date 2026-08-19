// Function: FUN_1404b0920
// Addr: 1404b0920
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0920(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  undefined8 in_RAX;
  byte bVar10;
  byte *unaff_RBX;
  longlong unaff_RBP;
  int iVar6;
  uint *puVar9;
  
  cVar3 = cRam0000000155d1982f;
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  cRam0000000155d1982f = (char)param_2;
  iVar6 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)(param_1 * 2),
                                 (char)in_RAX));
  uVar5 = iVar6 + 0x78000834;
  puVar9 = (uint *)(ulonglong)uVar5;
  LOCK();
  UNLOCK();
  *(byte *)puVar9 = (byte)*puVar9 + bVar10;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *puVar9 = *puVar9 & uVar5;
  uVar8 = *puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + (byte)uVar5;
  if ((char)(byte)*puVar9 < '\0') {
    *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar5 >> 8);
    *(byte *)((longlong)puVar9 + param_1) = *(byte *)((longlong)puVar9 + param_1) + bVar10;
    *(byte *)puVar9 = (byte)*puVar9 + cVar3;
    pbVar2 = (byte *)(unaff_RBP + 0x1a21004b + (longlong)puVar9);
    *pbVar2 = *pbVar2 + cVar3;
  }
  else {
    uVar7 = iVar6 + -0x727968cc + (uint)CARRY1((byte)uVar8,(byte)uVar5);
    puVar9 = (uint *)(ulonglong)uVar7;
    *(byte *)puVar9 = (byte)*puVar9 + bVar10;
    *unaff_RBX = *unaff_RBX | (byte)param_1;
    *puVar9 = *puVar9 & uVar7;
    uVar8 = *puVar9;
    bVar4 = (byte)uVar7;
    uVar5 = *puVar9;
    *(byte *)puVar9 = (byte)*puVar9 + bVar4;
    if (!SCARRY1((byte)uVar5,bVar4)) {
      uVar8 = uVar7 + 0x15867800 + (uint)CARRY1((byte)uVar8,bVar4);
      pbVar2 = (byte *)(ulonglong)uVar8 + unaff_RBP + 0x21004b;
      *pbVar2 = *pbVar2 + cVar3;
      uVar8 = CONCAT22((short)(uVar8 >> 0x10),
                       CONCAT11((char)(uVar8 >> 8) * '\x02' + cVar3,
                                (byte)uVar8 | *(byte *)(ulonglong)uVar8));
      uVar8 = uVar8 | *(uint *)(ulonglong)uVar8;
      pcVar1 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                                 CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(bVar10,cVar3)
                                         )) + param_1);
      *pcVar1 = *pcVar1 + bVar10;
      *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar8 >> 8);
      pcVar1 = (char *)((ulonglong)uVar8 + param_1);
      *pcVar1 = *pcVar1 + bVar10;
      pbVar2 = (byte *)((ulonglong)uVar8 - 0x7a);
      bVar4 = *pbVar2;
      *pbVar2 = *pbVar2 + bVar10;
      pcVar1 = (char *)(unaff_RBP + 0x1a21004b +
                       (ulonglong)(uVar8 + 0x15867800 + (uint)CARRY1(bVar4,bVar10)));
      *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

