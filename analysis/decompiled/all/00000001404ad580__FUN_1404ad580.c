// Function: FUN_1404ad580
// Addr: 1404ad580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad580(char *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined3 uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  char cVar13;
  longlong in_RAX;
  uint *puVar11;
  int *piVar12;
  byte bVar14;
  byte unaff_BL;
  undefined2 in_SS;
  uint uVar10;
  
  *param_1 = *param_1 + (char)in_SS;
  uVar10 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *(byte *)(in_RAX * 2));
  uVar9 = uVar10 + 0x33000b54;
  puVar11 = (uint *)(ulonglong)uVar9;
  uVar2 = (uint)(0xccfff4ab < uVar10);
  uVar1 = *puVar11;
  uVar10 = *puVar11;
  *puVar11 = uVar10 + uVar9 + uVar2;
  uVar2 = (uint)(CARRY4(uVar1,uVar9) || CARRY4(uVar10 + uVar9,uVar2));
  uVar10 = *puVar11;
  uVar1 = *puVar11;
  *puVar11 = uVar1 + uVar9 + uVar2;
  uVar4 = (undefined3)(uVar9 >> 8);
  uVar5 = CONCAT31(uVar4,uRam3300000021004ad4);
  puVar11 = (uint *)(ulonglong)uVar5;
  uVar2 = (uint)(CARRY4(uVar10,uVar9) || CARRY4(uVar1 + uVar9,uVar2));
  uVar10 = *puVar11;
  uVar1 = *puVar11;
  *puVar11 = uVar1 + uVar5 + uVar2;
  pcVar3 = *(char **)(CONCAT62((int6)((ulonglong)&stack0x00000000 >> 0x10),in_SS) + 8);
  uVar2 = (uint)(CARRY4(uVar10,uVar5) || CARRY4(uVar1 + uVar5,uVar2));
  uVar10 = *puVar11;
  uVar1 = *puVar11;
  *puVar11 = uVar1 + uVar5 + uVar2;
  bVar8 = bRam2800000021004ad4;
  uVar6 = CONCAT31(uVar4,bRam2800000021004ad4);
  piVar12 = (int *)(ulonglong)uVar6;
  *piVar12 = *piVar12 + uVar6 + (uint)(CARRY4(uVar10,uVar5) || CARRY4(uVar1 + uVar5,uVar2));
  *piVar12 = *piVar12 + uVar6;
  *param_1 = *param_1 + (char)in_SS;
  *pcVar3 = *pcVar3 + bVar8;
  *(byte *)piVar12 = (char)*piVar12 + bVar8;
  bVar8 = bVar8 ^ 10;
  bVar7 = bVar8 * '\x02';
  uVar2 = CONCAT31(uVar4,bVar7);
  puVar11 = (uint *)(ulonglong)uVar2;
  *puVar11 = *puVar11 + uVar2 + (uint)CARRY1(bVar8,bVar8);
  bVar14 = (byte)((ulonglong)pcVar3 >> 8);
  uVar10 = *puVar11;
  uVar1 = *puVar11;
  *puVar11 = uVar1 + uVar2 + (uint)(unaff_BL < bVar14);
  cVar13 = (char)(uVar9 >> 8) + 'J' +
           (CARRY4(uVar10,uVar2) || CARRY4(uVar1 + uVar2,(uint)(unaff_BL < bVar14)));
  uVar10 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11(cVar13,bVar7));
  *param_1 = *param_1 + cVar13;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + bVar7;
  uVar5 = CONCAT31((int3)(uVar10 >> 8),bVar8 << 2);
  puVar11 = (uint *)(ulonglong)uVar5;
  *puVar11 = *puVar11 + uVar5 + (uint)CARRY1(bVar7,bVar7);
  uVar2 = (uint)((byte)(unaff_BL - bVar14) < bVar14);
  uVar10 = *puVar11;
  uVar1 = *puVar11;
  *puVar11 = uVar1 + uVar5 + uVar2;
  *param_1 = *param_1 + cVar13 + 'J' + (CARRY4(uVar10,uVar5) || CARRY4(uVar1 + uVar5,uVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

