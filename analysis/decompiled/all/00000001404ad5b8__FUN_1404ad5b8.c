// Function: FUN_1404ad5b8
// Addr: 1404ad5b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad5b8(char *param_1,char *param_2)

{
  uint uVar1;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char *in_RAX;
  uint *puVar7;
  char *pcVar8;
  byte bVar10;
  byte unaff_BL;
  char in_SS;
  uint uVar2;
  char cVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_SS;
  bVar4 = (byte)in_RAX;
  *param_2 = *param_2 + bVar4;
  *in_RAX = *in_RAX + bVar4;
  bVar4 = bVar4 ^ 10;
  bVar3 = bVar4 * '\x02';
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  uVar5 = (uint)puVar7;
  *puVar7 = *puVar7 + uVar5 + (uint)CARRY1(bVar4,bVar4);
  uVar1 = *puVar7;
  uVar2 = *puVar7;
  *puVar7 = uVar2 + uVar5 + (uint)(unaff_BL < bVar10);
  cVar9 = (char)((ulonglong)in_RAX >> 8) + 'J' +
          (CARRY4(uVar1,uVar5) || CARRY4(uVar2 + uVar5,(uint)(unaff_BL < bVar10)));
  pcVar8 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar9,bVar3));
  *param_1 = *param_1 + cVar9;
  *pcVar8 = *pcVar8 + bVar3;
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),bVar4 << 2);
  uVar6 = (uint)puVar7;
  *puVar7 = *puVar7 + uVar6 + (uint)CARRY1(bVar3,bVar3);
  uVar5 = (uint)((byte)(unaff_BL - bVar10) < bVar10);
  uVar1 = *puVar7;
  uVar2 = *puVar7;
  *puVar7 = uVar2 + uVar6 + uVar5;
  *param_1 = *param_1 + cVar9 + 'J' + (CARRY4(uVar1,uVar6) || CARRY4(uVar2 + uVar6,uVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

