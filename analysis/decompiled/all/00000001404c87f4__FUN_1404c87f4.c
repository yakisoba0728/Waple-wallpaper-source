// Function: FUN_1404c87f4
// Addr: 1404c87f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c87f4(char *param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong in_RAX;
  longlong lVar9;
  char *pcVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  char unaff_R12B;
  uint *puVar8;
  
  pcVar10 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + in_RAX * 4);
  *pcVar10 = *pcVar10 + (char)in_RAX;
  *param_1 = *param_1 + unaff_R12B;
  uVar6 = (uint)in_RAX | 0xc40d0004;
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | (byte)uVar6;
  iVar7 = uVar6 + 0x4a000964;
  bVar5 = (char)iVar7 + (char)((uint)iVar7 >> 8);
  uVar6 = CONCAT31((int3)((uint)iVar7 >> 8),bVar5);
  puVar8 = (uint *)(ulonglong)uVar6;
  *(byte *)puVar8 = (byte)*puVar8 + (char)param_2;
  LOCK();
  puVar2 = (undefined4 *)((longlong)puVar8 * 2 + 0x21);
  uVar3 = *puVar2;
  *puVar2 = (int)param_1;
  lVar9 = CONCAT44((int)((ulonglong)param_1 >> 0x20),uVar3);
  UNLOCK();
  *(byte *)puVar8 = (byte)*puVar8 + bVar5;
  *(char *)((longlong)param_2 + 0x1b) = *(char *)((longlong)param_2 + 0x1b) + (char)uVar3;
  *puVar8 = *puVar8 ^ uVar6;
  pcVar10 = (char *)(lVar9 + -1);
  if (pcVar10 == (char *)0x0 || *puVar8 == 0) {
    *puVar8 = *puVar8 ^ uVar6;
    pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x21004c);
    *pcVar1 = *pcVar1 + bVar5;
    uVar4 = *puVar8;
    *(byte *)puVar8 = (byte)*puVar8 + bVar5;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL +
         CARRY1((byte)uVar4,bVar5);
    *puVar8 = *puVar8 ^ uVar6;
    pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + (longlong)puVar8 * 4);
    *pcVar1 = *pcVar1 + bVar5;
    *pcVar10 = *pcVar10 + param_3;
    *param_2 = *param_2 | uVar6;
    *pcVar10 = *pcVar10 + (char)pcVar10;
  }
  *(uint *)(lVar9 + 0xd) = *(uint *)(lVar9 + 0xd) & unaff_EDI;
  *(char *)(lVar9 + -0x2d) = *(char *)(lVar9 + -0x2d) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

