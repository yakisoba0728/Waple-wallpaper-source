// Function: FUN_1404d3378
// Addr: 1404d3378
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3378(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  int *in_RAX;
  byte bVar3;
  undefined4 uVar5;
  char unaff_BH;
  byte *unaff_RBP;
  int *unaff_RDI;
  byte *pbVar2;
  int iVar4;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  *(char *)in_RAX = (char)*in_RAX + unaff_BH;
  bVar3 = (byte)param_1 ^ *unaff_RBP;
  iVar4 = CONCAT31((int3)((ulonglong)param_1 >> 8),bVar3);
  *unaff_RDI = *unaff_RDI + iVar4;
  uVar1 = (int)in_RAX + *in_RAX;
  pbVar2 = (byte *)(ulonglong)uVar1;
  InterruptDescriptorTableRegister(*param_2);
  *pbVar2 = *pbVar2 + bVar3;
  *pbVar2 = *pbVar2 ^ (byte)uVar1;
  *(char *)CONCAT44(uVar5,iVar4) = *(char *)CONCAT44(uVar5,iVar4) + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

