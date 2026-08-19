// Function: FUN_1404d29bc
// Addr: 1404d29bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d29bc(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte bVar7;
  undefined8 in_RAX;
  uint unaff_EBX;
  char *unaff_RBP;
  uint *unaff_RDI;
  char *pcVar5;
  uint *puVar6;
  
  bVar2 = (byte)in_RAX & (byte)param_2;
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *pcVar5 = *pcVar5 + (char)((ulonglong)param_2 >> 8);
  *pcVar5 = *pcVar5 + bVar2;
  bVar2 = *param_1;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar7;
  iVar4 = (int)pcVar5 + *(int *)((longlong)pcVar5 * 2) + (uint)CARRY1(bVar2,bVar7);
  bVar2 = (byte)iVar4;
  cVar3 = bVar2 + 0x54;
  uVar1 = CONCAT31((int3)((uint)iVar4 >> 8),cVar3);
  puVar6 = (uint *)(ulonglong)uVar1;
  *(char *)puVar6 = (char)*puVar6 + cVar3 + (0xab < bVar2);
  if (param_1 + -1 == (byte *)0x0 || (char)*puVar6 == '\0') {
    *unaff_RBP = *unaff_RBP - (char)(param_1 + -1);
    *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = *puVar6 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

