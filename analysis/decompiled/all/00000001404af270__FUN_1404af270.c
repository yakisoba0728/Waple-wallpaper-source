// Function: FUN_1404af270
// Addr: 1404af270
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af270(undefined8 param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *in_RAX;
  int *piVar5;
  char *pcVar6;
  undefined7 uVar8;
  undefined1 uVar9;
  int unaff_ESP;
  undefined4 unaff_00000024;
  byte in_CF;
  byte bVar7;
  
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX - bVar2;
  pcVar6 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)in_RAX * 8);
  *pcVar6 = *pcVar6 + bVar2;
  *in_RAX = *in_RAX - (int)in_RAX;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  piVar5 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar7 + bVar2,bVar2));
  iVar4 = (int)piVar5 + *piVar5 + (uint)CARRY1(bVar7,bVar2);
  uVar1 = CONCAT31((int3)((uint)iVar4 >> 8),(byte)iVar4 ^ (byte)((uint)iVar4 >> 8));
  uVar1 = uVar1 + *(int *)(ulonglong)uVar1;
  pcVar6 = (char *)(ulonglong)uVar1;
  uVar9 = (undefined1)(param_2 + unaff_ESP + (uint)in_CF >> 8);
  *(char *)CONCAT71(uVar8,uVar9) = *(char *)CONCAT71(uVar8,uVar9) + (char)unaff_ESP;
  cVar3 = (char)uVar1;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

