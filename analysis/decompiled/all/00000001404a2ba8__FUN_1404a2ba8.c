// Function: FUN_1404a2ba8
// Addr: 1404a2ba8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a2c12) */

void FUN_1404a2ba8(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char cVar6;
  int in_EAX;
  int iVar4;
  char cVar7;
  undefined3 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined6 uVar13;
  longlong unaff_RBX;
  uint *puVar5;
  undefined4 uVar8;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar11 = (undefined1)param_2;
  uVar10 = (undefined4)((ulonglong)param_1 >> 0x20);
  bVar12 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(unaff_RBX + param_1);
  iVar4 = in_EAX + -0x4a97f09c;
  cVar6 = (char)((uint)iVar4 >> 8) + (char)iVar4;
  uVar2 = CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11(cVar6,(char)iVar4));
  uVar9 = (undefined3)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1 - *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11));
  uVar8 = CONCAT31(uVar9,cVar7);
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 & uVar2;
  pcVar1 = (char *)(unaff_RBX + CONCAT44(uVar10,uVar8));
  *pcVar1 = *pcVar1 + bVar12;
  pcVar1 = (char *)(CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) + CONCAT44(uVar10,uVar8));
  *pcVar1 = *pcVar1 + cVar6;
  iVar4 = (int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0x67) + 0x5680500;
  cVar3 = (char)iVar4;
  uVar2 = CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11((char)((uint)iVar4 >> 8) + cVar3,cVar3));
  puVar5 = (uint *)(ulonglong)uVar2;
  cVar6 = *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11));
  *puVar5 = *puVar5 & uVar2;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  cVar6 = (cVar7 - cVar6) - *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11));
  iVar4 = CONCAT31(uVar9,cVar6);
  *(int *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) =
       *(int *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) + iVar4;
  bVar12 = bVar12 | *(byte *)(CONCAT44(uVar10,iVar4) + CONCAT44(uVar10,iVar4));
  *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

