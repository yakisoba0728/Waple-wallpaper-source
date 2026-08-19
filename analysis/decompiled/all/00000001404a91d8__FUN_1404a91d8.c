// Function: FUN_1404a91d8
// Addr: 1404a91d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a9232) */

void FUN_1404a91d8(byte *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 in_RAX;
  char cVar7;
  char cVar8;
  char *unaff_RBX;
  char unaff_SPL;
  int *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  cVar4 = (char)in_RAX;
  *(char *)(param_2 + unaff_RDI) = *(char *)(param_2 + unaff_RDI) + cVar8;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar8;
  uVar6 = (int)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                        CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar4,cVar4)) >> 8
                              ),cVar4 + cVar7) + 0x94000c67;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  iVar3 = CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + cVar7) + -0x6bfff399;
  bVar2 = *param_1;
  bVar5 = (byte)iVar3;
  *param_1 = *param_1 + bVar5;
  uVar6 = iVar3 + *unaff_RSI + (uint)CARRY1(bVar2,bVar5);
  *unaff_RBX = *unaff_RBX + cVar7;
  puVar1 = (uint *)(in_FS_OFFSET + (ulonglong)uVar6);
  *puVar1 = *puVar1 | uVar6;
  *unaff_RBX = *unaff_RBX + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

