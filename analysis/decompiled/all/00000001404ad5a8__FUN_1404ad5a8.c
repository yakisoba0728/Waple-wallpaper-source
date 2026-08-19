// Function: FUN_1404ad5a8
// Addr: 1404ad5a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad5a8(char *param_1,char *param_2)

{
  uint uVar1;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_RAX;
  int *piVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar12;
  byte unaff_BL;
  char in_SS;
  byte in_CF;
  uint uVar2;
  char cVar10;
  undefined7 uVar11;
  
  bVar4 = bRam2800000021004ad4;
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  piVar7 = (int *)CONCAT71(uVar11,bRam2800000021004ad4);
  *piVar7 = *piVar7 + (int)piVar7 + (uint)in_CF;
  *piVar7 = *piVar7 + (int)piVar7;
  *param_1 = *param_1 + in_SS;
  *param_2 = *param_2 + bVar4;
  *(byte *)piVar7 = (char)*piVar7 + bVar4;
  bVar4 = bVar4 ^ 10;
  bVar3 = bVar4 * '\x02';
  puVar8 = (uint *)CONCAT71(uVar11,bVar3);
  uVar5 = (uint)puVar8;
  *puVar8 = *puVar8 + uVar5 + (uint)CARRY1(bVar4,bVar4);
  uVar1 = *puVar8;
  uVar2 = *puVar8;
  *puVar8 = uVar2 + uVar5 + (uint)(unaff_BL < bVar12);
  cVar10 = (char)((ulonglong)in_RAX >> 8) + 'J' +
           (CARRY4(uVar1,uVar5) || CARRY4(uVar2 + uVar5,(uint)(unaff_BL < bVar12)));
  pcVar9 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar10,bVar3));
  *param_1 = *param_1 + cVar10;
  *pcVar9 = *pcVar9 + bVar3;
  puVar8 = (uint *)CONCAT71((int7)((ulonglong)pcVar9 >> 8),bVar4 << 2);
  uVar6 = (uint)puVar8;
  *puVar8 = *puVar8 + uVar6 + (uint)CARRY1(bVar3,bVar3);
  uVar5 = (uint)((byte)(unaff_BL - bVar12) < bVar12);
  uVar1 = *puVar8;
  uVar2 = *puVar8;
  *puVar8 = uVar2 + uVar6 + uVar5;
  *param_1 = *param_1 + cVar10 + 'J' + (CARRY4(uVar1,uVar6) || CARRY4(uVar2 + uVar6,uVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

