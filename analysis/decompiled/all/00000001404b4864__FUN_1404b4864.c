// Function: FUN_1404b4864
// Addr: 1404b4864
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4864(char *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint *in_RAX;
  uint *puVar7;
  byte unaff_BL;
  byte unaff_BH;
  int *piVar6;
  byte bVar8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar5 = (byte)in_RAX + (byte)param_1;
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  *(char *)piVar6 = (char)*piVar6 + cVar5 + CARRY1((byte)in_RAX,(byte)param_1);
  pbVar1 = (byte *)((longlong)piVar6 + -0x244fffef);
  bVar8 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  *piVar6 = (*piVar6 - (int)piVar6) - (uint)CARRY1(bVar8,unaff_BH);
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar8 - unaff_BL,cVar5));
  uVar3 = (uint)(bVar8 < unaff_BL);
  uVar2 = *puVar7;
  uVar4 = *puVar7 - (uint)puVar7;
  *puVar7 = uVar4 - uVar3;
  *param_1 = *param_1 + cVar5 + -0x62 + (uVar2 < (uint)puVar7 || uVar4 < uVar3);
  *param_1 = *param_1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

