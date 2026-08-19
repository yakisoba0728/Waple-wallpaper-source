// Function: FUN_1404a2b98
// Addr: 1404a2b98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2bc6) overlaps instruction at (ram,0x0001404a2bc4)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a2c12) */

void FUN_1404a2b98(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar4;
  char cVar5;
  int iVar6;
  byte *in_RAX;
  uint7 uVar8;
  char cVar9;
  byte bVar11;
  byte bVar12;
  undefined6 uVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte in_CF;
  undefined1 auStack_8 [8];
  byte bVar3;
  uint *puVar7;
  longlong lVar10;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  pbVar1 = (byte *)(param_1 + unaff_RBP);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + bVar11 + in_CF;
  param_1[(longlong)&stack0x00000000] =
       param_1[(longlong)&stack0x00000000] + bVar12 +
       (CARRY1(bVar2,bVar11) || CARRY1(bVar3 + bVar11,in_CF));
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + bVar11;
  if (CARRY1(bVar2,bVar11)) {
    in_RAX[0x5000567] = in_RAX[0x5000567] + bVar12;
    *param_1 = *param_1 + (char)auStack_8;
    *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + (byte)in_RAX;
  }
  else {
    param_1 = param_1 + -1;
    uVar8 = (uint7)((ulonglong)in_RAX >> 8);
    if (param_1 == (char *)0x0 || *in_RAX == 0) {
      bVar12 = bVar12 | param_1[unaff_RBX];
      iVar6 = (int)CONCAT71(uVar8,(byte)in_RAX | *(byte *)((longlong)in_RAX * 2)) + -0x4a97f09c;
      uVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),
                       CONCAT11((char)((uint)iVar6 >> 8) + (char)iVar6,(char)iVar6));
      param_1 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),
                                 (char)param_1 - *(char *)CONCAT62(uVar13,CONCAT11(bVar12,bVar11)));
      *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 & uVar4;
      in_RAX = (byte *)((ulonglong)(uint3)(uVar4 >> 8) << 8);
    }
    else {
      in_RAX = (byte *)((ulonglong)uVar8 << 8);
    }
  }
  param_1[unaff_RBX] = param_1[unaff_RBX] + bVar12;
  param_1[CONCAT62(uVar13,CONCAT11(bVar12,bVar11))] =
       param_1[CONCAT62(uVar13,CONCAT11(bVar12,bVar11))] + (char)((ulonglong)in_RAX >> 8);
  iVar6 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x67) + 0x5680500;
  cVar5 = (char)iVar6;
  uVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11((char)((uint)iVar6 >> 8) + cVar5,cVar5));
  puVar7 = (uint *)(ulonglong)uVar4;
  cVar9 = *(char *)CONCAT62(uVar13,CONCAT11(bVar12,bVar11));
  *puVar7 = *puVar7 & uVar4;
  *(char *)puVar7 = (char)*puVar7 + cVar5;
  cVar9 = ((char)param_1 - cVar9) - *(char *)CONCAT62(uVar13,CONCAT11(bVar12,bVar11));
  lVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar9);
  *(int *)CONCAT62(uVar13,CONCAT11(bVar12,bVar11)) =
       *(int *)CONCAT62(uVar13,CONCAT11(bVar12,bVar11)) + (int)lVar10;
  bVar12 = bVar12 | *(byte *)(lVar10 * 2);
  *(char *)CONCAT62(uVar13,CONCAT11(bVar12,bVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(bVar12,bVar11)) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

